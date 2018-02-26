#
# Copyright (c) 2015, EURECOM (www.eurecom.fr)
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice, this
#    list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# The views and conclusions contained in the software and documentation are those
# of the authors and should not be interpreted as representing official policies,
# either expressed or implied, of the FreeBSD Project.

import re, os, sys, string
import datetime
import getopt
import getpass

version = "1.0.2"

lines = ""
iesDefs = {}
ieofielist = {}
outdir = './'

filenames = []
verbosity = 0
prefix = "S1ap_"

FAIL = '\033[91m'
WARN = '\033[93m'
ENDC = '\033[0m'

fileprefix = ""
fileprefix_first_upper = ""

def printFail(string):
    sys.stderr.write(FAIL + string + ENDC + "\n")

def printWarning(string):
    print WARN + string + ENDC

def printDebug(string):
    if verbosity > 0:
        print string

def outputHeaderToFile(f, filename):
    now = datetime.datetime.now()
    f.write("""/*
 * Copyright (c) 2015, EURECOM (www.eurecom.fr)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
 */

""")
    f.write("/*******************************************************************************\n")
    f.write(" * This file had been created by asn1tostruct.py script v%s\n" % (version))
    f.write(" * Please do not modify this file but regenerate it via script.\n")
    f.write(" * Created on: %s by %s\n * from %s\n" % (str(now), getpass.getuser(), filenames))
    f.write(" ******************************************************************************/\n")

def lowerFirstCamelWord(word):
    """ puts the first word in a CamelCase Word in lowercase.

    I.e. CustomerID becomes customerID, XMLInfoTest becomes xmlInfoTest
    """
    newstr = ''
    swapped = word.swapcase()
    idx = 0

    # if it's all-caps, return an all-lowered version
    lowered = word.lower()

    if swapped == lowered:
        return lowered

    for c in swapped:
        if c in string.lowercase:
            newstr += c
            idx    += 1
        else:
            break
    if idx < 2:
        newstr += word[idx:]
    else:
        newstr = newstr[:-1]+ word[idx-1:]

    return newstr

def usage():
    print "Python parser for asn1 v%s" % (version)
    print "Usage: python asn1tostruct.py [options]"
    print "Available options:"
    print "-d        Enable script debug"
    print "-f [file] Input file to parse"
    print "-o [dir]  Output files to given directory"
    print "-h        Print this help and return"

try:
    opts, args = getopt.getopt(sys.argv[1:], "df:ho:", ["debug", "file", "help", "outdir"])
except getopt.GetoptError as err:
    # print help information and exit:
    usage()
    sys.exit(2)

for o, a in opts:
    if o in ("-f", "--file"):
        filenames.append(a)
    if o in ("-d", "--debug"):
        verbosity = 1
    if o in ("-o", "--outdir"):
        outdir = a
        if outdir.rfind('/') != len(outdir):
            outdir += '/'
    if o in ("-h", "--help"):
        usage()
        sys.exit(2)

for filename in filenames:
    file = open(filename, 'r')
    for line in file:
        # Removing any comment
        if line.find('--') >= 0:
            line = line[:line.find('--')]
        # Removing any carriage return
        lines += re.sub('\r', '', line)

    for m in re.findall(r'([a-zA-Z0-9-]+)\s*::=\s+SEQUENCE\s+\(\s*SIZE\s*\(\s*\d+\s*\.\.\s*[0-9a-zA-Z-]+\s*\)\s*\)\s*OF\s+[a-zA-Z-]+\s*\{\s*\{\s*([0-9a-zA-Z-]+)\s*\}\s*\}', lines, re.MULTILINE):
        ieofielist[m[0]] = m[1]
    for m in re.findall(r'([a-zA-Z0-9-]+)\s*::=\s+E-RAB-IE-ContainerList\s*\{\s*\{\s*([a-zA-Z0-9-]+)\s*\}\s*\}', lines, re.MULTILINE):
        ieofielist[m[0]] = m[1]

    for i in re.findall(r'([a-zA-Z0-9-]+)\s+(S1AP-PROTOCOL-IES)\s*::=\s*\{\s+([\,\|\{\}\t\n\.{3}\ \-a-zA-Z0-9]+)\s+}\n', lines, re.MULTILINE):
        ies = []
        maxLength = 0
        # TODO: handle extensions
        if i[1].find('EXTENSION') >= 0:
            continue
        if fileprefix == "":
            fileprefix = i[1][:i[1].find('-')].lower()
        for j in re.findall(r'\s*\{\s*([a-zA-Z0-9-\ \t]+)\s*\}\s*[\|,]*', i[2], re.MULTILINE):
            for k in re.findall(r'ID\s*([a-zA-Z0-9\-]+)\s*CRITICALITY\s*([a-zA-Z0-9\-]+)\s+[A-Z]+\s+([a-zA-Z0-9\-]+)\s*PRESENCE\s*([a-zA-Z0-9\-]+)', j, re.MULTILINE):
                printDebug("Got new ie for message " + i[0] + ": " + str(k))
                if len(k[2]) > maxLength:
                    maxLength = len(k[2])
                ies.append(k)

        if len(ies) > 0:
            iesDefs[i[0]] = { "length": maxLength, "ies": ies }
        else:
            printWarning("Didn't find any information element for message: " + i[0])

if len(iesDefs) == 0:
    printFail("No Information Element parsed, exiting")
    sys.exit(0)

fileprefix_first_upper = fileprefix[0].upper() + fileprefix[1:]

f = open(outdir + fileprefix + '_ies_defs.h', 'w')
outputHeaderToFile(f, filename)
f.write("#include \"%s_asn1c.h\"\n\n" % (fileprefix))
f.write("#ifndef %s_IES_DEFS_H_\n#define %s_IES_DEFS_H_\n\n" % (fileprefix.upper(), fileprefix.upper()))
f.write("/* Define the version of script used to generate this file */\n")
f.write("#define %s_SCRIPT_VERSION (%s)\n\n" % (fileprefix.upper(), re.sub('\.', '', version)))

for key in iesDefs:

    if key not in ieofielist.values():
        continue

    for (i, j) in ieofielist.items():
        if j == key:
            break

    f.write("typedef struct %s_IEs_s {\n" % (re.sub('-', '_', i)))
    f.write("    A_SEQUENCE_OF(struct %s_s) %s;\n" % (re.sub('IEs', '', re.sub('-', '_', ieofielist[i])), lowerFirstCamelWord(re.sub('IEs', '', re.sub('-', '_', ieofielist[i])))))
    f.write("} %s_IEs_t;\n\n" % (re.sub('-', '_', i)))

for key in iesDefs:
    keyupperunderscore = re.sub('-', '_', key.upper())
    keylowerunderscore = re.sub('-', '_', key.lower())
    shift = 0

    if len(iesDefs[key]["ies"]) == 0:
        continue

    # Presence mask
    for ie in iesDefs[key]["ies"]:
        ieupperunderscore = re.sub('-', '_', re.sub('id-', '', ie[0])).upper()

        if ie[3] == "optional" or ie[3] == "conditional":
            f.write("#define {0:<{pad}} {1}\n".format("%s_%s_PRESENT" % (keyupperunderscore, ieupperunderscore), "(1 << %d)" % shift,
            pad=iesDefs[key]["length"] + len(keyupperunderscore) + 9))
            shift += 1
    if (shift > 0):
        f.write("\n")

    f.write("typedef struct %s_s {\n" % (re.sub('-', '_', key)))
    if (shift > 0):
        f.write("    {0:<{pad}} {1};\n".format("uint16_t", "presenceMask", pad=iesDefs[key]["length"] + 2))
    for ie in iesDefs[key]["ies"]:
        ieunderscore = re.sub('-', '_', ie[2])
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        if ie[2] in ieofielist:
            f.write("    %s_IEs_t %s;" % (re.sub('-', '_', ie[2]), ienameunderscore))
        else:
            f.write("    {0:<{pad}} {1};".format("%s_t" % ieunderscore, ienameunderscore, pad=iesDefs[key]["length"] + 2))
        if ie[3] == "optional":
            f.write(" ///< Optional field")
        elif ie[3] == "conditional":
            f.write(" ///< Conditional field")
        f.write("\n")

    f.write("} %s_t;\n\n" % (re.sub('-', '_', key)))

f.write("typedef struct _%s_message_t {\n" % (fileprefix))
f.write("    %sProcedureCode_t procedureCode;\n" % (prefix))
f.write("    %sCriticality_t   criticality;\n" % (prefix))
f.write("    uint8_t            direction;\n")
f.write("    union {\n")

messageList = iesDefs.keys()
messageList.sort()
for message in messageList:
    if message in ieofielist.values():
        continue
    if len(iesDefs[message]["ies"]) == 0:
        continue
    f.write("        %s_t %s;\n" % (re.sub('-', '_', message), lowerFirstCamelWord(re.sub('-', '_', message))))
f.write("    };\n")
f.write("} %s_message_t;\n\n" % (fileprefix))

for key in iesDefs:
    if key in ieofielist.values():
        continue

    structName = re.sub('ies', '', key)
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', key)))
    keylowerunderscore = re.sub('-', '_', key.lower())
    firstlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))
    f.write("/** \\brief Decode function for %s ies.\n" % (key))
    if len(iesDefs[key]["ies"]) != 0:
        f.write(" * \\param %s Pointer to ASN1 structure in which data will be stored\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" *  \\param any_p Pointer to the ANY value to decode.\n")
    f.write(" **/\n")
    f.write("int %s_decode_%s(\n" % (fileprefix, keylowerunderscore))

    if len(iesDefs[key]["ies"]) != 0:
        f.write("    %s_t *%s,\n" % (re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write("    ANY_t *any_p);\n\n")

    if len(iesDefs[key]["ies"]) == 0:
        continue

    f.write("/** \\brief Encode function for %s ies.\n" % (key))
    f.write(" *  \\param %s Pointer to the ASN1 structure.\n" % (firstlower))
    f.write(" *  \\param %s Pointer to the IES structure.\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" **/\n")
    f.write("int %s_encode_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstlower))
    f.write("    %s_t *%s);\n\n" % (re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))

    f.write("/** \\brief Free function for %s ies.\n" % (key))
    f.write(" *  \\param %s Pointer to the IES structure.\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" **/\n")
    f.write("void %s_free_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    f.write("    %s_t *%s);\n\n" % (re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))

for key in iesDefs:
    if key not in ieofielist.values():
        continue

    for (i, j) in ieofielist.items():
        if j == key:
            break

    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', i))
    firstlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))
    f.write("/** \\brief Encode function for %s ies.\n" % (key))
    f.write(" *  \\param %s Pointer to the ASN1 structure.\n" % (firstlower))
    f.write(" *  \\param %s Pointer to the IES structure.\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" **/\n")
    f.write("int %s_encode_%s(\n" % (fileprefix, firstlower.lower()))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstlower))
    f.write("    %s_IEs_t *%sIEs);\n\n" % (asn1cStruct, firstlower))
    f.write("/** \\brief Decode function for %s ies.\n" % (key))
    f.write(" *  \\param any_p Pointer to the ANY value to decode.\n")
    f.write(" *  \\param callback Callback function called when any_p is successfully decoded.\n")
    f.write(" **/\n")
    f.write("int %s_decode_%s(\n" % (fileprefix, firstlower.lower()))
    f.write("    %s_IEs_t *%sIEs,\n" % (asn1cStruct, firstlower))
    f.write("    %s_t *%s);\n\n" % (asn1cStruct, lowerFirstCamelWord(asn1cStruct)))
    f.write("/** \\brief Free function for %s ies.\n" % (key))
    f.write(" *  \\param %s Pointer to the IES structure.\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" **/\n")
    f.write("void %s_free_%s(\n" % (fileprefix, firstlower.lower()))
    f.write("    %s_IEs_t *%sIEs);\n\n" % (asn1cStruct, firstlower))

for key in iesDefs:
    if key in ieofielist.values():
        for (i, j) in ieofielist.items():
           if j == key:
                break
        asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', i)))
        firstlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))
        f.write("/** \\brief Display %s encapsulated IE using XER encoding.\n" % (asn1cStruct))
        f.write(" *  \\param %s Pointer to the IES structure.\n" % (lowerFirstCamelWord(re.sub('-', '_', i))))
        f.write(" *  \\param file File descriptor to write output.\n")
        f.write(" **/\n")
        f.write("asn_enc_rval_t %s_xer_print_%s(\n" % (fileprefix, firstlower.lower()))
        f.write("    asn_app_consume_bytes_f *cb,\n")
        f.write("    void *app_key,\n")
        f.write("    %s_IEs_t *%sIEs);\n\n" % (asn1cStruct, firstlower))
    else:
        asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', key)))
        firstlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))
        f.write("/** \\brief Display %s message using XER encoding.\n" % (asn1cStruct))
        f.write(" *  \\param message_p Pointer to root message.\n")
        f.write(" *  \\param file File descriptor to write output.\n")
        f.write(" **/\n")
        f.write("asn_enc_rval_t %s_xer_print_%s(\n" % (fileprefix, firstlower.lower()))
        f.write("    asn_app_consume_bytes_f *cb,\n")
        f.write("    void *app_key,\n")
        f.write("    %s_message_t *message_p);\n\n" % (fileprefix))

f.write("int %s_xer__print2sp(const void *buffer, size_t size, void *app_key);\n\n" % (fileprefix.lower()))
f.write("int %s_xer__print2fp(const void *buffer, size_t size, void *app_key);\n\n" % (fileprefix.lower()))
f.write("extern size_t %s_string_total_size;\n\n" % (fileprefix.lower()))
f.write("S1ap_IE_t *s1ap_new_ie(S1ap_ProtocolIE_ID_t id, S1ap_Criticality_t criticality,\n")
f.write("    asn_TYPE_descriptor_t *type, void *sptr);\n\n")
f.write("#endif /* %s_IES_DEFS_H_ */\n\n" % (fileprefix.upper()))

#Generate Decode functions
f = open(outdir + fileprefix + '_ies_decoder.c', 'w')
outputHeaderToFile(f, filename)
f.write("#define TRACE_MODULE _s1ap_ies_decoder\n#include \"core_debug.h\"\n#include \"%s_ies_defs.h\"\n\n" % (fileprefix))
for key in iesDefs:
    if key in ieofielist.values():
        continue
    structName = re.sub('ies', '', key)
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', key))
    if asn1cStruct.rfind('_') == len(asn1cStruct) - 1:
        asn1cStruct = asn1cStruct[:-1]
    ielistname = re.sub('UE', 'ue', asn1cStruct)
    ielistnamefirstlower = ielistname[:1].lower() + ielistname[1:]
    asn1cStructfirstlower = asn1cStruct[:1].lower() + asn1cStruct[1:]
    keyName = re.sub('-', '_', key)
    keyupperunderscore = keyName.upper()
    firstlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))

    iesaccess = ""
    if key not in ieofielist.values():
        iesaccess = "protocolIEs."
#        iesaccess = "%s_ies." % (firstlower)

    f.write("int %s_decode_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    if len(iesDefs[key]["ies"]) != 0:
        f.write("    %s_t *%s,\n" % (re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write("    ANY_t *any_p) {\n\n")

    f.write("    asn_dec_rval_t dec_ret = {0};\n");
    f.write("    %s_t  %s;\n    %s_t *%s_p = &%s;\n" % (asn1cStruct, asn1cStructfirstlower, asn1cStruct, asn1cStructfirstlower, asn1cStructfirstlower))
    f.write("    int i;\n")

    f.write("    d_assert(any_p, return -1, \"Null param\");\n")
    if len(iesDefs[key]["ies"]) != 0:
        f.write("    d_assert(%s, return -1, \"Null param\");\n\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))

    f.write("    d_trace(25, \"[S1AP] Decode %s\\n\");\n\n" % re.sub('-', '_', keyName))
    f.write("    memset(&%s, 0, sizeof(%s_t));\n" % (asn1cStructfirstlower, asn1cStruct));
    f.write("    dec_ret = aper_decode(NULL, &asn_DEF_%s, (void **)&%s_p, any_p->buf, any_p->size, 0, 0);\n" % (asn1cStruct, asn1cStructfirstlower));
    f.write("    if (dec_ret.code != RC_OK)\n")
    f.write("    {\n")
    f.write("        d_error(\"Decoding of IE %s failed\");\n" % (asn1cStructfirstlower))
    f.write("        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, %s_p);\n" % (asn1cStruct, asn1cStructfirstlower));
    f.write("        return -1;\n")
    f.write("    }\n\n");
    f.write("    for (i = 0; i < %s_p->%slist.count; i++) {\n" % (asn1cStructfirstlower, iesaccess))
    f.write("        %s_IE_t *ie_p;\n" % (fileprefix[0].upper() + fileprefix[1:]))
    f.write("        ANY_t *st;\n\n")
    f.write("        ie_p = (%s_IE_t *)%s_p->%slist.array[i];\n" % (fileprefix[0].upper() + fileprefix[1:], asn1cStructfirstlower, iesaccess))
    f.write("        d_assert(ie_p, return -1, \"Null param\");\n")
    f.write("        st = &ie_p->value;\n")
    f.write("        d_assert(st, return -1, \"Null param\");\n")
    f.write("        switch(ie_p->id) {\n")
    for ie in iesDefs[key]["ies"]:
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        ienameunderscorefirstlower = lowerFirstCamelWord(ienameunderscore)
        ietypesubst = re.sub('-', '', ie[2])
        ietypeunderscore = re.sub('-', '_', ie[2])
        ieupperunderscore = re.sub('-', '_', re.sub('id-', '', ie[0])).upper()

        if ie[3] == "optional":
            f.write("            /* Optional field */\n")
        elif ie[3] == "conditional":
            f.write("            /* Conditional field */\n")
        f.write("            case %sProtocolIE_ID_%s:\n" % (prefix, re.sub('-', '_', ie[0])))
        f.write("            {\n")
        if ie[2] in ieofielist.keys():
            f.write("                %s_t *%s_p = NULL;\n\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
            f.write("                ANY_to_type_aper(&ie_p->value, &asn_DEF_%s, (void**)&%s_p);\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
            f.write("                if (%s_decode_%s(&%s->%s, %s_p) < 0)\n" % (fileprefix, ietypeunderscore.lower(), lowerFirstCamelWord(re.sub('-', '_', key)), ienameunderscore, lowerFirstCamelWord(ietypesubst)))
            f.write("                {\n")
            f.write("                    d_error(\"Decoding of encapsulated IE %s failed\");\n" % (lowerFirstCamelWord(ietypesubst)))
            f.write("                    ASN_STRUCT_FREE(asn_DEF_%s, %s_p);\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
            f.write("                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, %s_p);\n" % (asn1cStruct, lowerFirstCamelWord(asn1cStruct)))
            f.write("                    return -1;\n")
            f.write("                }\n")
            f.write("                ASN_STRUCT_FREE(asn_DEF_%s, %s_p);\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
        else:
            f.write("                %s_t *%s_p = &%s->%s;\n\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst), lowerFirstCamelWord(re.sub('-', '_', key)), ienameunderscore))
            f.write("                dec_ret = aper_decode(NULL, &asn_DEF_%s, (void **)&%s_p, st->buf, st->size, 0, 0);\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
            f.write("                if (dec_ret.code != RC_OK)\n")
            f.write("                {\n")
            f.write("                    d_error(\"Decoding of IE %s failed\");\n" % (lowerFirstCamelWord(ietypesubst)))
            f.write("                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, %s_p);\n" % (asn1cStruct, lowerFirstCamelWord(asn1cStruct)))
            f.write("                    return -1;\n")
            f.write("                }\n")
        if ie[3] != "mandatory":
            f.write("                %s->presenceMask |= %s_%s_PRESENT;\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), keyupperunderscore, ieupperunderscore))
        f.write("            } break;\n")
    f.write("            default:\n")
    f.write("                d_warn(\"Unknown protocol IE id (%%d) for message %s\", (int)ie_p->id);\n" % (re.sub('-', '_', structName.lower())))
    f.write("                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, %s_p);\n" % (asn1cStruct, lowerFirstCamelWord(asn1cStruct)))
    f.write("                break;\n")
    f.write("        }\n")
    f.write("    }\n\n")
    f.write("    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, %s_p);\n" % (asn1cStruct, lowerFirstCamelWord(asn1cStruct)))
    f.write("    return 0;\n")
    f.write("}\n\n")

for key in iesDefs:
    if key not in ieofielist.values():
        continue

    for (i, j) in ieofielist.items():
        if j == key:
            break

    keyname = re.sub('IEs', '', i)

    f.write("int %s_decode_%s(\n" % (fileprefix, re.sub('-', '_', keyname).lower()))
    f.write("    %s_IEs_t *%sIEs,\n" % (re.sub('-', '_', keyname), lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("    %s_t *%s) {\n\n" % (re.sub('-', '_', keyname), lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("    int i, decoded = 0;\n")
    f.write("    int tempDecoded = 0;\n\n")

    f.write("    d_assert(%s, return -1, \"Null param\");\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname))));
    f.write("    d_assert(%sIEs, return -1, \"Null param\");\n\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname))));

    f.write("    for (i = 0; i < %s->list.count; i++) {\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("        %s_IE_t *ie_p = (%s_IE_t *)%s->list.array[i];\n" % (fileprefix[0].upper() + fileprefix[1:], fileprefix[0].upper() + fileprefix[1:], lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("        switch (ie_p->id) {\n")
    for ie in iesDefs[key]["ies"]:
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        f.write("            case %sProtocolIE_ID_%s:\n" % (prefix, re.sub('-', '_', ie[0])))
        f.write("            {\n")
        f.write("                %s_t *%s_p = NULL;\n" % (re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_%s, (void**)&%s_p);\n" % (re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                if (tempDecoded < 0 || %s_p == NULL) {\n" % (lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                    d_error(\"Decoding of IE %s for message %s failed\");\n" % (ienameunderscore, re.sub('-', '_', keyname)))
        f.write("                    if (%s_p)\n" % (lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                        ASN_STRUCT_FREE(asn_DEF_%s, %s_p);\n" % (re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                    return -1;\n")
        f.write("                }\n")
        f.write("                decoded += tempDecoded;\n")
        f.write("                ASN_SEQUENCE_ADD(&%sIEs->%s, %s_p);\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname)),
        re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key))), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("            } break;\n")
    f.write("            default:\n")
    f.write("                d_warn(\"Unknown protocol IE id (%%d) for message %s\", (int)ie_p->id);\n" % (re.sub('-', '_', structName.lower())))
    f.write("                break;\n")
    f.write("        }\n")
    f.write("    }\n")
    f.write("    return decoded;\n")
    f.write("}\n\n")


#Generate IES Encode functions
f = open(outdir + fileprefix + '_ies_encoder.c', 'w')
outputHeaderToFile(f,filename)
f.write("#define TRACE_MODULE _s1ap_ies_encoder\n#include \"core_debug.h\"\n#include \"%s_ies_defs.h\"\n\n" % (fileprefix))
for key in iesDefs:
    if key in ieofielist.values():
        continue

    structName = re.sub('ies', '', key)
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', key))
    if asn1cStruct.rfind('_') == len(asn1cStruct) - 1:
        asn1cStruct = asn1cStruct[:-1]
    asn1cStructfirstlower = asn1cStruct[:1].lower() + asn1cStruct[1:]
    firstwordlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))

    iesaccess = ""
    if key not in ieofielist.values():
        iesaccess = "protocolIEs."
#        iesaccess = "%s_ies." % (firstwordlower)

    keyName = re.sub('-', '_', key)
    keyupperunderscore = keyName.upper()
    # No IE to encode...
    if len(iesDefs[key]["ies"]) == 0:
        continue

    f.write("int %s_encode_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstwordlower))
    f.write("    %s_t *%s) {\n\n" % (re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))

    f.write("    %s_IE_t *ie;\n\n" % (fileprefix_first_upper))

    f.write("    d_assert(%s, return -1, \"Null param\");\n" % (firstwordlower));
    f.write("    d_assert(%s, return -1, \"Null param\");\n\n" % (lowerFirstCamelWord(re.sub('-', '_', key))));
    f.write("    d_trace(25, \"[S1AP] Encode %s\\n\");\n\n" % re.sub('-', '_', keyName))

    for ie in iesDefs[key]["ies"]:
        iename = re.sub('-', '_', re.sub('id-', '', ie[0]))
        ienameunderscore = re.sub('-', '_', iename)
        ienamefirstwordlower = lowerFirstCamelWord(iename)
        ieupperunderscore = re.sub('-', '_', re.sub('id-', '', ie[0])).upper()
        ietypeunderscore = re.sub('-', '_', ie[2])

        if ie[3] != "mandatory":
            if ie[3] == "optional":
                f.write("    /* Optional field */\n")
            elif ie[3] == "conditional":
                f.write("    /* Conditional field */\n")
            f.write("    if (%s->presenceMask & %s_%s_PRESENT) {\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), keyupperunderscore, ieupperunderscore))
            if ie[2] in ieofielist.keys():
                f.write("        %s_t %s;\n\n" % (ietypeunderscore, ienamefirstwordlower))
                f.write("        memset(&%s, 0, sizeof(%s_t));\n" % (ienamefirstwordlower, ietypeunderscore))
                f.write("\n")
                f.write("        if (%s_encode_%s(&%s, &%s->%s) < 0) return -1;\n" % (fileprefix, ietypeunderscore.lower(), ienamefirstwordlower, lowerFirstCamelWord(re.sub('-', '_', key)), ienamefirstwordlower))
            f.write("        if ((ie = %s_new_ie(%sProtocolIE_ID_%s,\n" % (fileprefix, prefix, re.sub('-', '_', ie[0])))
            f.write("                            %sCriticality_%s,\n" % (prefix, ie[1]))
            f.write("                            &asn_DEF_%s,\n" % (ietypeunderscore))
            if ie[2] in ieofielist.keys():
                f.write("                            &%s)) == NULL) {\n" % (ienamefirstwordlower))
            else:
                f.write("                            &%s->%s)) == NULL) {\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), ienamefirstwordlower))
            f.write("            return -1;\n")
            f.write("        }\n")
            f.write("        ASN_SEQUENCE_ADD(&%s->%slist, ie);\n" % (firstwordlower, iesaccess))
            if ie[2] in ieofielist.keys():
                f.write("        /* Free any dynamic allocation that is no more used */\n")
                f.write("        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, &%s);\n\n" % (ietypeunderscore, ienamefirstwordlower))
            f.write("    }\n\n")
        else:
            if ie[2] in ieofielist.keys():
                f.write("    %s_t %s;\n\n" % (ietypeunderscore, ienamefirstwordlower))
                f.write("    memset(&%s, 0, sizeof(%s_t));\n" % (ienamefirstwordlower, ietypeunderscore))
                f.write("\n")
                f.write("    if (%s_encode_%s(&%s, &%s->%s) < 0) return -1;\n" % (fileprefix, ietypeunderscore.lower(), ienamefirstwordlower, lowerFirstCamelWord(re.sub('-', '_', key)), ienamefirstwordlower))
            f.write("    if ((ie = %s_new_ie(%sProtocolIE_ID_%s,\n" % (fileprefix, prefix, re.sub('-', '_', ie[0])))
            f.write("                        %sCriticality_%s,\n" % (prefix, ie[1]))
            f.write("                        &asn_DEF_%s,\n" % (ietypeunderscore))
            if ie[2] in ieofielist.keys():
                f.write("                        &%s)) == NULL) {\n" % (ienamefirstwordlower))
            else:
                f.write("                        &%s->%s)) == NULL) {\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), ienamefirstwordlower))
            f.write("        return -1;\n")
            f.write("    }\n")
            f.write("    ASN_SEQUENCE_ADD(&%s->%slist, ie);\n\n" % (firstwordlower, iesaccess))
            if ie[2] in ieofielist.keys():
                f.write("    /* Free any dynamic allocation that is no more used */\n")
                f.write("    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, &%s);\n\n" % (ietypeunderscore, ienamefirstwordlower))

    f.write("    return 0;\n")
    f.write("}\n\n")

for (key, value) in iesDefs.items():
    if key not in ieofielist.values():
        continue

    ie = value["ies"][0]
    ietypeunderscore = re.sub('-', '_', ie[2])

    for (i, j) in ieofielist.items():
        if j == key:
            break
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', i)))
    firstwordlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))
    f.write("int %s_encode_%s(\n" % (fileprefix, re.sub('-', '_', i).lower()))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstwordlower))
    f.write("    %s_IEs_t *%sIEs) {\n\n" % (re.sub('-', '_', i), lowerFirstCamelWord(re.sub('-', '_', i))))
    f.write("    int i;\n")

    f.write("    %s_IE_t *ie;\n\n" % (fileprefix_first_upper))

    f.write("    d_assert(%s, return -1, \"Null param\");\n" % (firstwordlower));
    f.write("    d_assert(%sIEs, return -1, \"Null param\");\n\n" % (lowerFirstCamelWord(re.sub('-', '_', i))));

    f.write("    for (i = 0; i < %sIEs->%s.count; i++) {\n" % (firstwordlower, re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
    f.write("        if ((ie = %s_new_ie(%sProtocolIE_ID_%s,\n" % (fileprefix, prefix, re.sub('-', '_', ie[0])))
    f.write("                            %sCriticality_%s,\n" % (prefix, ie[1]))
    f.write("                            &asn_DEF_%s,\n" % (ietypeunderscore))
    f.write("                            %sIEs->%s.array[i])) == NULL) {\n" % (firstwordlower, re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
    f.write("            return -1;\n")
    f.write("        }\n")
    f.write("        ASN_SEQUENCE_ADD(&%s->list, ie);\n" % (firstwordlower))
    f.write("    }\n")
    f.write("    return 0;\n")
    f.write("}\n\n")
f.write("""S1ap_IE_t *s1ap_new_ie(S1ap_ProtocolIE_ID_t id, S1ap_Criticality_t criticality,
    asn_TYPE_descriptor_t *type, void *sptr)
{
    S1ap_IE_t *buff;

    if ((buff = MALLOC(sizeof (S1ap_IE_t))) == NULL) 
    {
        // Possible error on malloc
        return NULL;
    }

    memset((void *)buff, 0, sizeof(S1ap_IE_t));
    buff->id = id;
    buff->criticality = criticality;

    if (ANY_fromType_aper(&buff->value, type, sptr) < 0) 
    {
        d_error("Encoding of %s failed", type->name);
        FREEMEM(buff);
        return NULL;
    }

    return buff;
}

""")

#Generate Free functions
f = open(outdir + fileprefix + '_ies_free.c', 'w')
outputHeaderToFile(f, filename)
f.write("#define TRACE_MODULE _s1ap_ies_free\n#include \"core_debug.h\"\n#include \"%s_ies_defs.h\"\n\n" % (fileprefix))
for key in iesDefs:
    if key in ieofielist.values():
        continue
    structName = re.sub('ies', '', key)
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', key))
    if asn1cStruct.rfind('_') == len(asn1cStruct) - 1:
        asn1cStruct = asn1cStruct[:-1]
    ielistname = re.sub('UE', 'ue', asn1cStruct)
    ielistnamefirstlower = ielistname[:1].lower() + ielistname[1:]
    asn1cStructfirstlower = asn1cStruct[:1].lower() + asn1cStruct[1:]
    keyName = re.sub('-', '_', key)
    keyupperunderscore = keyName.upper()
    firstlower = re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct))

    f.write("void %s_free_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    f.write("    %s_t *%s)\n" % (re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write("{\n\n")

    for ie in iesDefs[key]["ies"]:
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        ienameunderscorefirstlower = lowerFirstCamelWord(ienameunderscore)
        ietypesubst = re.sub('-', '', ie[2])
        ietypeunderscore = re.sub('-', '_', ie[2])
        ieupperunderscore = re.sub('-', '_', re.sub('id-', '', ie[0])).upper()

        if ie[3] == "optional":
            f.write("            /* Optional field */\n")
        elif ie[3] == "conditional":
            f.write("            /* Conditional field */\n")
        if ie[2] in ieofielist.keys():
            f.write("    %s_free_%s(&%s->%s);\n" % (fileprefix, ietypeunderscore.lower(), lowerFirstCamelWord(re.sub('-', '_', key)), ienameunderscore))
        else:
            f.write("    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, &%s->%s);\n" % (ietypeunderscore, lowerFirstCamelWord(re.sub('-', '_', key)), ienameunderscore))
    f.write("}\n\n")

for key in iesDefs:
    if key not in ieofielist.values():
        continue

    for (i, j) in ieofielist.items():
        if j == key:
            break

    keyname = re.sub('IEs', '', i)

    f.write("void %s_free_%s(\n" % (fileprefix, re.sub('-', '_', keyname).lower()))
    f.write("    %s_IEs_t *%sIEs)\n" % (re.sub('-', '_', keyname), lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("{\n")
    for ie in iesDefs[key]["ies"]:
        f.write("    int i = 0;\n\n")
        f.write("    for (i = 0; i < %sIEs->%s.count; i++)\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname)), re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
        f.write("    {\n")
        f.write("        ASN_STRUCT_FREE(asn_DEF_%s, %sIEs->%s.array[i]);\n" % (re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '_', keyname)), re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
        f.write("    }\n\n")
        f.write("    if (%sIEs->%s.array)\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname)), re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
        f.write("       FREEMEM(%sIEs->%s.array);\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname)), re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
    f.write("}\n\n")

#Generate xer print functions
f = open(outdir + fileprefix + '_ies_xer_print.c', 'w')
outputHeaderToFile(f, filename)
f.write("#include <stdlib.h>\n")
f.write("#include <stdio.h>\n\n")
f.write("#include <asn_application.h>\n#include <asn_internal.h>\n\n")
f.write("#include \"%s_ies_defs.h\"\n\n" % (fileprefix))

f.write("size_t %s_string_total_size = 0;\n\n" % (fileprefix.lower()))
f.write("""int
%s_xer__print2fp(const void *buffer, size_t size, void *app_key) {
    FILE *stream = (FILE *)app_key;

    if(fwrite(buffer, 1, size, stream) != size)
        return -1;

    return 0;
}

""" % (fileprefix.lower()))

f.write("""int %s_xer__print2sp(const void *buffer, size_t size, void *app_key) {
    char *string = (char *)app_key;

    /* Copy buffer to the formatted string */
    memcpy(&string[%s_string_total_size], buffer, size);

    %s_string_total_size += size;

    return 0;
}

""" % (fileprefix.lower(), fileprefix.lower(), fileprefix.lower()))

f.write("""static asn_enc_rval_t
xer_encode_local(asn_TYPE_descriptor_t *td, void *sptr,
        asn_app_consume_bytes_f *cb, void *app_key, int indent) {
    asn_enc_rval_t er, tmper;
    const char *mname;
    size_t mlen;
    int xcan = 2;

    if(!td || !sptr) goto cb_failed;

    mname = td->xml_tag;
    mlen = strlen(mname);

    er.encoded = 0;
    ASN__TEXT_INDENT(0, indent);
    ASN__CALLBACK3("<", 1, mname, mlen, ">", 1);

    tmper = td->xer_encoder(td, sptr, indent + 1, XER_F_BASIC, cb, app_key);
    if(tmper.encoded == -1) return tmper;

    ASN__CALLBACK3("</", 2, mname, mlen, ">\\n", xcan);

    er.encoded = 4 + xcan + (2 * mlen) + tmper.encoded;

    ASN__ENCODED_OK(er);
cb_failed:
    ASN__ENCODE_FAILED;
}
""")

for (key, value) in iesDefs.items():
    keyName = re.sub('-', '_', key)
    keyupperunderscore = keyName.upper()
    iesStructName = lowerFirstCamelWord(re.sub('-', '_', key))

    ie = value["ies"][0]
    ietypeunderscore = re.sub('-', '_', ie[2])

    if key in ieofielist.values():
        f.write("asn_enc_rval_t %s_xer_print_%s(\n" % (fileprefix, re.sub('ies', '', re.sub('_ies', '', re.sub('item', 'list', re.sub('-', '_', key).lower())))))
    else:
        f.write("asn_enc_rval_t %s_xer_print_%s(\n" % (fileprefix, re.sub('ies', '', re.sub('_ies', '', re.sub('-', '_', key).lower()))))
    #f.write("    FILE *file,\n")
    f.write("    asn_app_consume_bytes_f *cb,\n")
    f.write("    void *app_key,\n")
    if key in ieofielist.values():
        for (i, j) in ieofielist.items():
           if j == key:
                break
        iesStructName = lowerFirstCamelWord(re.sub('-', '_', i))
        f.write("    %s_IEs_t *%s) {\n\n" % (re.sub('IEs', '', re.sub('-', '_', i)), iesStructName))
        f.write("    int i;\n")
        f.write("    asn_enc_rval_t er;\n")
    else:
        f.write("    %s_message_t *message_p)\n{\n" % (fileprefix))
        f.write("    %s_t *%s;\n" % (re.sub('-', '_', key), iesStructName))
        f.write("    asn_enc_rval_t er;\n")
        #f.write("    void *app_key = (void *)file;\n")
        #f.write("    asn_app_consume_bytes_f *cb = %s_xer__print2fp;\n\n" % (fileprefix.lower()))

        f.write("    %s = &message_p->%s;\n\n" % (iesStructName, iesStructName))

    if key in ieofielist.values():
        # Increase indentation level
        f.write("    for (i = 0; i < %s->%s.count; i++) {\n" % (iesStructName, re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
        #f.write("        xer_fprint(file, &asn_DEF_%s, %s->%s.array[i]);\n" % (ietypeunderscore, iesStructName, re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
        f.write("        er = xer_encode(&asn_DEF_%s, %s->%s.array[i], XER_F_BASIC, cb, app_key);\n" % (ietypeunderscore, iesStructName, re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
        f.write("    }\n")
    else:
        f.write("    cb(\"<%s-PDU>\\n\", %d, app_key);\n" % (key, len("<%s-PDU>\n" % (key))))
        f.write("    xer_encode_local(&asn_DEF_%sCriticality, &message_p->criticality, cb, app_key, 1);\n" % prefix)
        f.write("    xer_encode_local(&asn_DEF_%sProcedureCode, &message_p->procedureCode, cb, app_key, 1);\n" % prefix)

        f.write("    cb(\"    <%s>\\n\", %d, app_key);\n" % (key, len("    <%s>\n" % (key))))

        for ie in iesDefs[key]["ies"]:
            iename = re.sub('-', '_', re.sub('id-', '', ie[0]))
            ienameunderscore = re.sub('-', '_', iename)
            ienamefirstwordlower = lowerFirstCamelWord(iename)
            ietypeunderscore = re.sub('-', '_', ie[2])
            ieupperunderscore = re.sub('-', '_', re.sub('id-', '', ie[0])).upper()

            if ie[3] != "mandatory":
                if ie[3] == "optional":
                    f.write("    /* Optional field */\n")
                elif ie[3] == "conditional":
                    f.write("    /* Conditional field */\n")
                f.write("    if (%s->presenceMask & %s_%s_PRESENT)\n    " % (iesStructName, keyupperunderscore, ieupperunderscore))

            # Is it an encapsulated IE ?
            if ie[2] in ieofielist.keys():
                f.write("    %s_xer_print_%s(cb, app_key, &%s->%s);\n" % (fileprefix, re.sub('ies', '', re.sub('-', '_', ie[2]).lower()), iesStructName, ienamefirstwordlower))
            else:
                f.write("    xer_encode_local(&asn_DEF_%s, &%s->%s, cb, app_key, 2);\n" % (ietypeunderscore, iesStructName, ienamefirstwordlower))
        f.write("    cb(\"    </%s>\\n\", %d, app_key);\n" % (key, len("    </%s>\n" % (key))))
        f.write("    cb(\"</%s-PDU>\\n\", %d, app_key);\n" % (key, len("</%s-PDU>\n" % (key))))

    f.write("    ASN__ENCODED_OK(er);\n")
    #if key not in ieofielist.values():
        #f.write("cb_failed:\n")
        #f.write("    return er;\n")
    f.write("}\n\n")
