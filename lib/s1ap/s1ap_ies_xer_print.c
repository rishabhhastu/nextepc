/*
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

/*******************************************************************************
 * This file had been created by asn1tostruct.py script v1.0.2
 * Please do not modify this file but regenerate it via script.
 * Created on: 2018-02-26 19:44:10.871742 by acetcom
 * from ['S1AP-PDU.asn']
 ******************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#include <asn_application.h>
#include <asn_internal.h>

#include "s1ap_ies_defs.h"

size_t s1ap_string_total_size = 0;

int
s1ap_xer__print2fp(const void *buffer, size_t size, void *app_key) {
    FILE *stream = (FILE *)app_key;

    if(fwrite(buffer, 1, size, stream) != size)
        return -1;

    return 0;
}

int s1ap_xer__print2sp(const void *buffer, size_t size, void *app_key) {
    char *string = (char *)app_key;

    /* Copy buffer to the formatted string */
    memcpy(&string[s1ap_string_total_size], buffer, size);

    s1ap_string_total_size += size;

    return 0;
}

static asn_enc_rval_t
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

    ASN__CALLBACK3("</", 2, mname, mlen, ">\n", xcan);

    er.encoded = 4 + xcan + (2 * mlen) + tmper.encoded;

    ASN__ENCODED_OK(er);
cb_failed:
    ASN__ENCODE_FAILED;
}
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetupresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_E_RABSetupResponseIEs_t *s1AP_E_RABSetupResponseIEs;
    asn_enc_rval_t er;
    s1AP_E_RABSetupResponseIEs = &message_p->s1AP_E_RABSetupResponseIEs;

    cb("<S1AP-E-RABSetupResponseIEs-PDU>\n", 33, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-E-RABSetupResponseIEs>\n", 33, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABSetupResponseIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABSetupResponseIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_E_RABSetupResponseIEs->presenceMask & S1AP_E_RABSETUPRESPONSEIES_E_RABSETUPLISTBEARERSURES_PRESENT)
        s1ap_xer_print_s1ap_e_rabsetuplistbearersures(cb, app_key, &s1AP_E_RABSetupResponseIEs->e_RABSetupListBearerSURes);
    /* Optional field */
    if (s1AP_E_RABSetupResponseIEs->presenceMask & S1AP_E_RABSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTBEARERSURES_PRESENT)
        s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_E_RABSetupResponseIEs->e_RABFailedToSetupListBearerSURes);
    /* Optional field */
    if (s1AP_E_RABSetupResponseIEs->presenceMask & S1AP_E_RABSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_E_RABSetupResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-E-RABSetupResponseIEs>\n", 34, app_key);
    cb("</S1AP-E-RABSetupResponseIEs-PDU>\n", 34, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uecontextreleasecommand(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UEContextReleaseCommand_IEs_t *s1AP_UEContextReleaseCommand_IEs;
    asn_enc_rval_t er;
    s1AP_UEContextReleaseCommand_IEs = &message_p->s1AP_UEContextReleaseCommand_IEs;

    cb("<S1AP-UEContextReleaseCommand-IEs-PDU>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UEContextReleaseCommand-IEs>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_UE_S1AP_IDs, &s1AP_UEContextReleaseCommand_IEs->uE_S1AP_IDs, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_UEContextReleaseCommand_IEs->cause, cb, app_key, 2);
    cb("    </S1AP-UEContextReleaseCommand-IEs>\n", 40, app_key);
    cb("</S1AP-UEContextReleaseCommand-IEs-PDU>\n", 40, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_MMEConfigurationTransferIEs_t *s1AP_MMEConfigurationTransferIEs;
    asn_enc_rval_t er;
    s1AP_MMEConfigurationTransferIEs = &message_p->s1AP_MMEConfigurationTransferIEs;

    cb("<S1AP-MMEConfigurationTransferIEs-PDU>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-MMEConfigurationTransferIEs>\n", 39, app_key);
    /* Optional field */
    if (s1AP_MMEConfigurationTransferIEs->presenceMask & S1AP_MMECONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERMCT_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SONConfigurationTransfer, &s1AP_MMEConfigurationTransferIEs->sonConfigurationTransferMCT, cb, app_key, 2);
    cb("    </S1AP-MMEConfigurationTransferIEs>\n", 40, app_key);
    cb("</S1AP-MMEConfigurationTransferIEs-PDU>\n", 40, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uecapabilityinfoindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UECapabilityInfoIndicationIEs_t *s1AP_UECapabilityInfoIndicationIEs;
    asn_enc_rval_t er;
    s1AP_UECapabilityInfoIndicationIEs = &message_p->s1AP_UECapabilityInfoIndicationIEs;

    cb("<S1AP-UECapabilityInfoIndicationIEs-PDU>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UECapabilityInfoIndicationIEs>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UECapabilityInfoIndicationIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UECapabilityInfoIndicationIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_UERadioCapability, &s1AP_UECapabilityInfoIndicationIEs->ueRadioCapability, cb, app_key, 2);
    cb("    </S1AP-UECapabilityInfoIndicationIEs>\n", 42, app_key);
    cb("</S1AP-UECapabilityInfoIndicationIEs-PDU>\n", 42, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_writereplacewarningrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_WriteReplaceWarningRequestIEs_t *s1AP_WriteReplaceWarningRequestIEs;
    asn_enc_rval_t er;
    s1AP_WriteReplaceWarningRequestIEs = &message_p->s1AP_WriteReplaceWarningRequestIEs;

    cb("<S1AP-WriteReplaceWarningRequestIEs-PDU>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-WriteReplaceWarningRequestIEs>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_MessageIdentifier, &s1AP_WriteReplaceWarningRequestIEs->messageIdentifier, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_SerialNumber, &s1AP_WriteReplaceWarningRequestIEs->serialNumber, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGAREALIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_WarningAreaList, &s1AP_WriteReplaceWarningRequestIEs->warningAreaList, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_RepetitionPeriod, &s1AP_WriteReplaceWarningRequestIEs->repetitionPeriod, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_EXTENDEDREPETITIONPERIOD_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ExtendedRepetitionPeriod, &s1AP_WriteReplaceWarningRequestIEs->extendedRepetitionPeriod, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_NumberofBroadcastRequest, &s1AP_WriteReplaceWarningRequestIEs->numberofBroadcastRequest, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGTYPE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_WarningType, &s1AP_WriteReplaceWarningRequestIEs->warningType, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGSECURITYINFO_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_WarningSecurityInfo, &s1AP_WriteReplaceWarningRequestIEs->warningSecurityInfo, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_DATACODINGSCHEME_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_DataCodingScheme, &s1AP_WriteReplaceWarningRequestIEs->dataCodingScheme, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGMESSAGECONTENTS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_WarningMessageContents, &s1AP_WriteReplaceWarningRequestIEs->warningMessageContents, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_CONCURRENTWARNINGMESSAGEINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ConcurrentWarningMessageIndicator, &s1AP_WriteReplaceWarningRequestIEs->concurrentWarningMessageIndicator, cb, app_key, 2);
    cb("    </S1AP-WriteReplaceWarningRequestIEs>\n", 42, app_key);
    cb("</S1AP-WriteReplaceWarningRequestIEs-PDU>\n", 42, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetuprequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_E_RABSetupRequestIEs_t *s1AP_E_RABSetupRequestIEs;
    asn_enc_rval_t er;
    s1AP_E_RABSetupRequestIEs = &message_p->s1AP_E_RABSetupRequestIEs;

    cb("<S1AP-E-RABSetupRequestIEs-PDU>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-E-RABSetupRequestIEs>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABSetupRequestIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABSetupRequestIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_E_RABSetupRequestIEs->presenceMask & S1AP_E_RABSETUPREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_E_RABSetupRequestIEs->uEaggregateMaximumBitrate, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rabtobesetuplistbearersureq(cb, app_key, &s1AP_E_RABSetupRequestIEs->e_RABToBeSetupListBearerSUReq);
    cb("    </S1AP-E-RABSetupRequestIEs>\n", 33, app_key);
    cb("</S1AP-E-RABSetupRequestIEs-PDU>\n", 33, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_locationreportingfailureindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_LocationReportingFailureIndicationIEs_t *s1AP_LocationReportingFailureIndicationIEs;
    asn_enc_rval_t er;
    s1AP_LocationReportingFailureIndicationIEs = &message_p->s1AP_LocationReportingFailureIndicationIEs;

    cb("<S1AP-LocationReportingFailureIndicationIEs-PDU>\n", 49, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-LocationReportingFailureIndicationIEs>\n", 49, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_LocationReportingFailureIndicationIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_LocationReportingFailureIndicationIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_LocationReportingFailureIndicationIEs->cause, cb, app_key, 2);
    cb("    </S1AP-LocationReportingFailureIndicationIEs>\n", 50, app_key);
    cb("</S1AP-LocationReportingFailureIndicationIEs-PDU>\n", 50, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uecontextreleasecomplete(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UEContextReleaseComplete_IEs_t *s1AP_UEContextReleaseComplete_IEs;
    asn_enc_rval_t er;
    s1AP_UEContextReleaseComplete_IEs = &message_p->s1AP_UEContextReleaseComplete_IEs;

    cb("<S1AP-UEContextReleaseComplete-IEs-PDU>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UEContextReleaseComplete-IEs>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextReleaseComplete_IEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextReleaseComplete_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextReleaseComplete_IEs->presenceMask & S1AP_UECONTEXTRELEASECOMPLETE_IES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_UEContextReleaseComplete_IEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-UEContextReleaseComplete-IEs>\n", 41, app_key);
    cb("</S1AP-UEContextReleaseComplete-IEs-PDU>\n", 41, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabmodifylistbearermodres(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModRes) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABModifyListBearerModRes->s1AP_E_RABModifyItemBearerModRes.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABModifyItemBearerModRes, s1AP_E_RABModifyListBearerModRes->s1AP_E_RABModifyItemBearerModRes.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_overloadstop(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_OverloadStopIEs_t *s1AP_OverloadStopIEs;
    asn_enc_rval_t er;
    s1AP_OverloadStopIEs = &message_p->s1AP_OverloadStopIEs;

    cb("<S1AP-OverloadStopIEs-PDU>\n", 27, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-OverloadStopIEs>\n", 27, app_key);
    /* Optional field */
    if (s1AP_OverloadStopIEs->presenceMask & S1AP_OVERLOADSTOPIES_GUMMEILIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GUMMEIList, &s1AP_OverloadStopIEs->gummeiList, cb, app_key, 2);
    cb("    </S1AP-OverloadStopIEs>\n", 28, app_key);
    cb("</S1AP-OverloadStopIEs-PDU>\n", 28, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleaselistbearerrelcomp(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelComp) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABReleaseListBearerRelComp->s1AP_E_RABReleaseItemBearerRelComp.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABReleaseItemBearerRelComp, s1AP_E_RABReleaseListBearerRelComp->s1AP_E_RABReleaseItemBearerRelComp.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uecontextmodificationrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UEContextModificationRequestIEs_t *s1AP_UEContextModificationRequestIEs;
    asn_enc_rval_t er;
    s1AP_UEContextModificationRequestIEs = &message_p->s1AP_UEContextModificationRequestIEs;

    cb("<S1AP-UEContextModificationRequestIEs-PDU>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UEContextModificationRequestIEs>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextModificationRequestIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextModificationRequestIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_SECURITYKEY_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SecurityKey, &s1AP_UEContextModificationRequestIEs->securityKey, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SubscriberProfileIDforRFP, &s1AP_UEContextModificationRequestIEs->subscriberProfileIDforRFP, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_UEContextModificationRequestIEs->uEaggregateMaximumBitrate, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSFALLBACKINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSFallbackIndicator, &s1AP_UEContextModificationRequestIEs->csFallbackIndicator, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_UESECURITYCAPABILITIES_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_UESecurityCapabilities, &s1AP_UEContextModificationRequestIEs->ueSecurityCapabilities, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSGMembershipStatus, &s1AP_UEContextModificationRequestIEs->csgMembershipStatus, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_REGISTEREDLAI_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_LAI, &s1AP_UEContextModificationRequestIEs->registeredLAI, cb, app_key, 2);
    cb("    </S1AP-UEContextModificationRequestIEs>\n", 44, app_key);
    cb("</S1AP-UEContextModificationRequestIEs-PDU>\n", 44, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabmodifyresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_E_RABModifyResponseIEs_t *s1AP_E_RABModifyResponseIEs;
    asn_enc_rval_t er;
    s1AP_E_RABModifyResponseIEs = &message_p->s1AP_E_RABModifyResponseIEs;

    cb("<S1AP-E-RABModifyResponseIEs-PDU>\n", 34, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-E-RABModifyResponseIEs>\n", 34, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABModifyResponseIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABModifyResponseIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_E_RABModifyResponseIEs->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_E_RABMODIFYLISTBEARERMODRES_PRESENT)
        s1ap_xer_print_s1ap_e_rabmodifylistbearermodres(cb, app_key, &s1AP_E_RABModifyResponseIEs->e_RABModifyListBearerModRes);
    /* Optional field */
    if (s1AP_E_RABModifyResponseIEs->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_E_RABFAILEDTOMODIFYLIST_PRESENT)
        s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_E_RABModifyResponseIEs->e_RABFailedToModifyList);
    /* Optional field */
    if (s1AP_E_RABModifyResponseIEs->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_E_RABModifyResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-E-RABModifyResponseIEs>\n", 35, app_key);
    cb("</S1AP-E-RABModifyResponseIEs-PDU>\n", 35, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_locationreportingcontrol(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_LocationReportingControlIEs_t *s1AP_LocationReportingControlIEs;
    asn_enc_rval_t er;
    s1AP_LocationReportingControlIEs = &message_p->s1AP_LocationReportingControlIEs;

    cb("<S1AP-LocationReportingControlIEs-PDU>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-LocationReportingControlIEs>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_LocationReportingControlIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_LocationReportingControlIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_RequestType, &s1AP_LocationReportingControlIEs->requestType, cb, app_key, 2);
    cb("    </S1AP-LocationReportingControlIEs>\n", 40, app_key);
    cb("</S1AP-LocationReportingControlIEs-PDU>\n", 40, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_killresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_KillResponseIEs_t *s1AP_KillResponseIEs;
    asn_enc_rval_t er;
    s1AP_KillResponseIEs = &message_p->s1AP_KillResponseIEs;

    cb("<S1AP-KillResponseIEs-PDU>\n", 27, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-KillResponseIEs>\n", 27, app_key);
    xer_encode_local(&asn_DEF_S1AP_MessageIdentifier, &s1AP_KillResponseIEs->messageIdentifier, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_SerialNumber, &s1AP_KillResponseIEs->serialNumber, cb, app_key, 2);
    /* Optional field */
    if (s1AP_KillResponseIEs->presenceMask & S1AP_KILLRESPONSEIES_BROADCASTCANCELLEDAREALIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_BroadcastCancelledAreaList, &s1AP_KillResponseIEs->broadcastCancelledAreaList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_KillResponseIEs->presenceMask & S1AP_KILLRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_KillResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-KillResponseIEs>\n", 28, app_key);
    cb("</S1AP-KillResponseIEs-PDU>\n", 28, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_mmestatustransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_MMEStatusTransferIEs_t *s1AP_MMEStatusTransferIEs;
    asn_enc_rval_t er;
    s1AP_MMEStatusTransferIEs = &message_p->s1AP_MMEStatusTransferIEs;

    cb("<S1AP-MMEStatusTransferIEs-PDU>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-MMEStatusTransferIEs>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_MMEStatusTransferIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_MMEStatusTransferIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer, &s1AP_MMEStatusTransferIEs->eNB_StatusTransfer_TransparentContainer, cb, app_key, 2);
    cb("    </S1AP-MMEStatusTransferIEs>\n", 33, app_key);
    cb("</S1AP-MMEStatusTransferIEs-PDU>\n", 33, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobemodifiedlistbearermodreq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReq) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABToBeModifiedListBearerModReq->s1AP_E_RABToBeModifiedItemBearerModReq.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABToBeModifiedItemBearerModReq, s1AP_E_RABToBeModifiedListBearerModReq->s1AP_E_RABToBeModifiedItemBearerModReq.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationupdate(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_MMEConfigurationUpdateIEs_t *s1AP_MMEConfigurationUpdateIEs;
    asn_enc_rval_t er;
    s1AP_MMEConfigurationUpdateIEs = &message_p->s1AP_MMEConfigurationUpdateIEs;

    cb("<S1AP-MMEConfigurationUpdateIEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-MMEConfigurationUpdateIEs>\n", 37, app_key);
    /* Optional field */
    if (s1AP_MMEConfigurationUpdateIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_MMENAME_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MMEname, &s1AP_MMEConfigurationUpdateIEs->mmEname, cb, app_key, 2);
    /* Optional field */
    if (s1AP_MMEConfigurationUpdateIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_SERVEDGUMMEIS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ServedGUMMEIs, &s1AP_MMEConfigurationUpdateIEs->servedGUMMEIs, cb, app_key, 2);
    /* Optional field */
    if (s1AP_MMEConfigurationUpdateIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_RELATIVEMMECAPACITY_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_RelativeMMECapacity, &s1AP_MMEConfigurationUpdateIEs->relativeMMECapacity, cb, app_key, 2);
    cb("    </S1AP-MMEConfigurationUpdateIEs>\n", 38, app_key);
    cb("</S1AP-MMEConfigurationUpdateIEs-PDU>\n", 38, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_tracefailureindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_TraceFailureIndicationIEs_t *s1AP_TraceFailureIndicationIEs;
    asn_enc_rval_t er;
    s1AP_TraceFailureIndicationIEs = &message_p->s1AP_TraceFailureIndicationIEs;

    cb("<S1AP-TraceFailureIndicationIEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-TraceFailureIndicationIEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_TraceFailureIndicationIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_TraceFailureIndicationIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_E_UTRAN_Trace_ID, &s1AP_TraceFailureIndicationIEs->e_UTRAN_Trace_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_TraceFailureIndicationIEs->cause, cb, app_key, 2);
    cb("    </S1AP-TraceFailureIndicationIEs>\n", 38, app_key);
    cb("</S1AP-TraceFailureIndicationIEs-PDU>\n", 38, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ENBConfigurationTransferIEs_t *s1AP_ENBConfigurationTransferIEs;
    asn_enc_rval_t er;
    s1AP_ENBConfigurationTransferIEs = &message_p->s1AP_ENBConfigurationTransferIEs;

    cb("<S1AP-ENBConfigurationTransferIEs-PDU>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ENBConfigurationTransferIEs>\n", 39, app_key);
    /* Optional field */
    if (s1AP_ENBConfigurationTransferIEs->presenceMask & S1AP_ENBCONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERECT_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SONConfigurationTransfer, &s1AP_ENBConfigurationTransferIEs->sonConfigurationTransferECT, cb, app_key, 2);
    cb("    </S1AP-ENBConfigurationTransferIEs>\n", 40, app_key);
    cb("</S1AP-ENBConfigurationTransferIEs-PDU>\n", 40, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_downlinkueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkUEAssociatedLPPaTransport_IEs;
    asn_enc_rval_t er;
    s1AP_DownlinkUEAssociatedLPPaTransport_IEs = &message_p->s1AP_DownlinkUEAssociatedLPPaTransport_IEs;

    cb("<S1AP-DownlinkUEAssociatedLPPaTransport-IEs-PDU>\n", 49, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-DownlinkUEAssociatedLPPaTransport-IEs>\n", 49, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Routing_ID, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->routing_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_LPPa_PDU, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->lpPa_PDU, cb, app_key, 2);
    cb("    </S1AP-DownlinkUEAssociatedLPPaTransport-IEs>\n", 50, app_key);
    cb("</S1AP-DownlinkUEAssociatedLPPaTransport-IEs-PDU>\n", 50, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handoverfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverFailureIEs_t *s1AP_HandoverFailureIEs;
    asn_enc_rval_t er;
    s1AP_HandoverFailureIEs = &message_p->s1AP_HandoverFailureIEs;

    cb("<S1AP-HandoverFailureIEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverFailureIEs>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverFailureIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_HandoverFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverFailureIEs->presenceMask & S1AP_HANDOVERFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-HandoverFailureIEs>\n", 31, app_key);
    cb("</S1AP-HandoverFailureIEs-PDU>\n", 31, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uplinknastransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UplinkNASTransport_IEs_t *s1AP_UplinkNASTransport_IEs;
    asn_enc_rval_t er;
    s1AP_UplinkNASTransport_IEs = &message_p->s1AP_UplinkNASTransport_IEs;

    cb("<S1AP-UplinkNASTransport-IEs-PDU>\n", 34, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UplinkNASTransport-IEs>\n", 34, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UplinkNASTransport_IEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UplinkNASTransport_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_NAS_PDU, &s1AP_UplinkNASTransport_IEs->nas_pdu, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_EUTRAN_CGI, &s1AP_UplinkNASTransport_IEs->eutran_cgi, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TAI, &s1AP_UplinkNASTransport_IEs->tai, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UplinkNASTransport_IEs->presenceMask & S1AP_UPLINKNASTRANSPORT_IES_GW_TRANSPORTLAYERADDRESS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TransportLayerAddress, &s1AP_UplinkNASTransport_IEs->gW_TransportLayerAddress, cb, app_key, 2);
    cb("    </S1AP-UplinkNASTransport-IEs>\n", 35, app_key);
    cb("</S1AP-UplinkNASTransport-IEs-PDU>\n", 35, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_s1setuprequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_S1SetupRequestIEs_t *s1AP_S1SetupRequestIEs;
    asn_enc_rval_t er;
    s1AP_S1SetupRequestIEs = &message_p->s1AP_S1SetupRequestIEs;

    cb("<S1AP-S1SetupRequestIEs-PDU>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-S1SetupRequestIEs>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_Global_ENB_ID, &s1AP_S1SetupRequestIEs->global_ENB_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_S1SetupRequestIEs->presenceMask & S1AP_S1SETUPREQUESTIES_ENBNAME_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ENBname, &s1AP_S1SetupRequestIEs->eNBname, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_SupportedTAs, &s1AP_S1SetupRequestIEs->supportedTAs, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_PagingDRX, &s1AP_S1SetupRequestIEs->defaultPagingDRX, cb, app_key, 2);
    /* Optional field */
    if (s1AP_S1SetupRequestIEs->presenceMask & S1AP_S1SETUPREQUESTIES_CSG_IDLIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_IdList, &s1AP_S1SetupRequestIEs->csG_IdList, cb, app_key, 2);
    cb("    </S1AP-S1SetupRequestIEs>\n", 30, app_key);
    cb("</S1AP-S1SetupRequestIEs-PDU>\n", 30, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationupdatefailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ENBConfigurationUpdateFailureIEs_t *s1AP_ENBConfigurationUpdateFailureIEs;
    asn_enc_rval_t er;
    s1AP_ENBConfigurationUpdateFailureIEs = &message_p->s1AP_ENBConfigurationUpdateFailureIEs;

    cb("<S1AP-ENBConfigurationUpdateFailureIEs-PDU>\n", 44, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ENBConfigurationUpdateFailureIEs>\n", 44, app_key);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_ENBConfigurationUpdateFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ENBConfigurationUpdateFailureIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TimeToWait, &s1AP_ENBConfigurationUpdateFailureIEs->timeToWait, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ENBConfigurationUpdateFailureIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ENBConfigurationUpdateFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-ENBConfigurationUpdateFailureIEs>\n", 45, app_key);
    cb("</S1AP-ENBConfigurationUpdateFailureIEs-PDU>\n", 45, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_pathswitchrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_PathSwitchRequestIEs_t *s1AP_PathSwitchRequestIEs;
    asn_enc_rval_t er;
    s1AP_PathSwitchRequestIEs = &message_p->s1AP_PathSwitchRequestIEs;

    cb("<S1AP-PathSwitchRequestIEs-PDU>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-PathSwitchRequestIEs>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_PathSwitchRequestIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rabtobeswitcheddllist(cb, app_key, &s1AP_PathSwitchRequestIEs->e_RABToBeSwitchedDLList);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestIEs->sourceMME_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_EUTRAN_CGI, &s1AP_PathSwitchRequestIEs->eutran_cgi, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TAI, &s1AP_PathSwitchRequestIEs->tai, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_UESecurityCapabilities, &s1AP_PathSwitchRequestIEs->ueSecurityCapabilities, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestIEs->presenceMask & S1AP_PATHSWITCHREQUESTIES_CSG_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_Id, &s1AP_PathSwitchRequestIEs->csG_Id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestIEs->presenceMask & S1AP_PATHSWITCHREQUESTIES_CELLACCESSMODE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CellAccessMode, &s1AP_PathSwitchRequestIEs->cellAccessMode, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestIEs->presenceMask & S1AP_PATHSWITCHREQUESTIES_SOURCEMME_GUMMEI_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GUMMEI, &s1AP_PathSwitchRequestIEs->sourceMME_GUMMEI, cb, app_key, 2);
    cb("    </S1AP-PathSwitchRequestIEs>\n", 33, app_key);
    cb("</S1AP-PathSwitchRequestIEs-PDU>\n", 33, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobesetuplistbearersureq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReq) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABToBeSetupListBearerSUReq->s1AP_E_RABToBeSetupItemBearerSUReq.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABToBeSetupItemBearerSUReq, s1AP_E_RABToBeSetupListBearerSUReq->s1AP_E_RABToBeSetupItemBearerSUReq.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_reset(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ResetIEs_t *s1AP_ResetIEs;
    asn_enc_rval_t er;
    s1AP_ResetIEs = &message_p->s1AP_ResetIEs;

    cb("<S1AP-ResetIEs-PDU>\n", 20, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ResetIEs>\n", 20, app_key);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_ResetIEs->cause, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ResetType, &s1AP_ResetIEs->resetType, cb, app_key, 2);
    cb("    </S1AP-ResetIEs>\n", 21, app_key);
    cb("</S1AP-ResetIEs-PDU>\n", 21, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabdataforwardinglist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABSubjecttoDataForwardingList->s1AP_E_RABDataForwardingItem.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABDataForwardingItem, s1AP_E_RABSubjecttoDataForwardingList->s1AP_E_RABDataForwardingItem.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uecontextreleaserequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UEContextReleaseRequest_IEs_t *s1AP_UEContextReleaseRequest_IEs;
    asn_enc_rval_t er;
    s1AP_UEContextReleaseRequest_IEs = &message_p->s1AP_UEContextReleaseRequest_IEs;

    cb("<S1AP-UEContextReleaseRequest-IEs-PDU>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UEContextReleaseRequest-IEs>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextReleaseRequest_IEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextReleaseRequest_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_UEContextReleaseRequest_IEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextReleaseRequest_IEs->presenceMask & S1AP_UECONTEXTRELEASEREQUEST_IES_GWCONTEXTRELEASEINDICATION_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GWContextReleaseIndication, &s1AP_UEContextReleaseRequest_IEs->gwContextReleaseIndication, cb, app_key, 2);
    cb("    </S1AP-UEContextReleaseRequest-IEs>\n", 40, app_key);
    cb("</S1AP-UEContextReleaseRequest-IEs-PDU>\n", 40, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_downlinknonueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs;
    asn_enc_rval_t er;
    s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs = &message_p->s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs;

    cb("<S1AP-DownlinkNonUEAssociatedLPPaTransport-IEs-PDU>\n", 52, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-DownlinkNonUEAssociatedLPPaTransport-IEs>\n", 52, app_key);
    xer_encode_local(&asn_DEF_S1AP_Routing_ID, &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->routing_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_LPPa_PDU, &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU, cb, app_key, 2);
    cb("    </S1AP-DownlinkNonUEAssociatedLPPaTransport-IEs>\n", 53, app_key);
    cb("</S1AP-DownlinkNonUEAssociatedLPPaTransport-IEs-PDU>\n", 53, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_ue_associatedlogicals1_connectionlistres(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListRes) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListRes->s1AP_UE_associatedLogicalS1_ConnectionItemRes.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, s1AP_UE_associatedLogicalS1_ConnectionListRes->s1AP_UE_associatedLogicalS1_ConnectionItemRes.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_paging(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_PagingIEs_t *s1AP_PagingIEs;
    asn_enc_rval_t er;
    s1AP_PagingIEs = &message_p->s1AP_PagingIEs;

    cb("<S1AP-PagingIEs-PDU>\n", 21, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-PagingIEs>\n", 21, app_key);
    xer_encode_local(&asn_DEF_S1AP_UEIdentityIndexValue, &s1AP_PagingIEs->ueIdentityIndexValue, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_UEPagingID, &s1AP_PagingIEs->uePagingID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PagingIEs->presenceMask & S1AP_PAGINGIES_PAGINGDRX_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_PagingDRX, &s1AP_PagingIEs->pagingDRX, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_CNDomain, &s1AP_PagingIEs->cnDomain, cb, app_key, 2);
    s1ap_xer_print_s1ap_tailist(cb, app_key, &s1AP_PagingIEs->taiList);
    /* Optional field */
    if (s1AP_PagingIEs->presenceMask & S1AP_PAGINGIES_CSG_IDLIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_IdList, &s1AP_PagingIEs->csG_IdList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PagingIEs->presenceMask & S1AP_PAGINGIES_PAGINGPRIORITY_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_PagingPriority, &s1AP_PagingIEs->pagingPriority, cb, app_key, 2);
    cb("    </S1AP-PagingIEs>\n", 22, app_key);
    cb("</S1AP-PagingIEs-PDU>\n", 22, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationupdateacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ENBConfigurationUpdateAcknowledgeIEs_t *s1AP_ENBConfigurationUpdateAcknowledgeIEs;
    asn_enc_rval_t er;
    s1AP_ENBConfigurationUpdateAcknowledgeIEs = &message_p->s1AP_ENBConfigurationUpdateAcknowledgeIEs;

    cb("<S1AP-ENBConfigurationUpdateAcknowledgeIEs-PDU>\n", 48, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ENBConfigurationUpdateAcknowledgeIEs>\n", 48, app_key);
    /* Optional field */
    if (s1AP_ENBConfigurationUpdateAcknowledgeIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ENBConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-ENBConfigurationUpdateAcknowledgeIEs>\n", 49, app_key);
    cb("</S1AP-ENBConfigurationUpdateAcknowledgeIEs-PDU>\n", 49, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetuplistbearersures(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSURes) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABSetupListBearerSURes->s1AP_E_RABSetupItemBearerSURes.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABSetupItemBearerSURes, s1AP_E_RABSetupListBearerSURes->s1AP_E_RABSetupItemBearerSURes.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handovernotify(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverNotifyIEs_t *s1AP_HandoverNotifyIEs;
    asn_enc_rval_t er;
    s1AP_HandoverNotifyIEs = &message_p->s1AP_HandoverNotifyIEs;

    cb("<S1AP-HandoverNotifyIEs-PDU>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverNotifyIEs>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverNotifyIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverNotifyIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_EUTRAN_CGI, &s1AP_HandoverNotifyIEs->eutran_cgi, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TAI, &s1AP_HandoverNotifyIEs->tai, cb, app_key, 2);
    cb("    </S1AP-HandoverNotifyIEs>\n", 30, app_key);
    cb("</S1AP-HandoverNotifyIEs-PDU>\n", 30, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handovercancelacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverCancelAcknowledgeIEs_t *s1AP_HandoverCancelAcknowledgeIEs;
    asn_enc_rval_t er;
    s1AP_HandoverCancelAcknowledgeIEs = &message_p->s1AP_HandoverCancelAcknowledgeIEs;

    cb("<S1AP-HandoverCancelAcknowledgeIEs-PDU>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverCancelAcknowledgeIEs>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverCancelAcknowledgeIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverCancelAcknowledgeIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverCancelAcknowledgeIEs->presenceMask & S1AP_HANDOVERCANCELACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverCancelAcknowledgeIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-HandoverCancelAcknowledgeIEs>\n", 41, app_key);
    cb("</S1AP-HandoverCancelAcknowledgeIEs-PDU>\n", 41, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handovercommand(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverCommandIEs_t *s1AP_HandoverCommandIEs;
    asn_enc_rval_t er;
    s1AP_HandoverCommandIEs = &message_p->s1AP_HandoverCommandIEs;

    cb("<S1AP-HandoverCommandIEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverCommandIEs>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverCommandIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverCommandIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_HandoverType, &s1AP_HandoverCommandIEs->handoverType, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT)
        s1ap_xer_print_s1ap_e_rabsubjecttodataforwardinglist(cb, app_key, &s1AP_HandoverCommandIEs->e_RABSubjecttoDataForwardingList);
    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_E_RABTORELEASELISTHOCMD_PRESENT)
        s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_HandoverCommandIEs->e_RABtoReleaseListHOCmd);
    xer_encode_local(&asn_DEF_S1AP_Target_ToSource_TransparentContainer, &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_TARGET_TOSOURCE_TRANSPARENTCONTAINER_SECONDARY_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Target_ToSource_TransparentContainer, &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer_Secondary, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverCommandIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-HandoverCommandIEs>\n", 31, app_key);
    cb("</S1AP-HandoverCommandIEs-PDU>\n", 31, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_bearers_subjecttostatustransfer_list(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_Bearers_SubjectToStatusTransferList->s1AP_Bearers_SubjectToStatusTransfer_Item.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_Bearers_SubjectToStatusTransfer_Item, s1AP_Bearers_SubjectToStatusTransferList->s1AP_Bearers_SubjectToStatusTransfer_Item.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_writereplacewarningresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_WriteReplaceWarningResponseIEs_t *s1AP_WriteReplaceWarningResponseIEs;
    asn_enc_rval_t er;
    s1AP_WriteReplaceWarningResponseIEs = &message_p->s1AP_WriteReplaceWarningResponseIEs;

    cb("<S1AP-WriteReplaceWarningResponseIEs-PDU>\n", 42, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-WriteReplaceWarningResponseIEs>\n", 42, app_key);
    xer_encode_local(&asn_DEF_S1AP_MessageIdentifier, &s1AP_WriteReplaceWarningResponseIEs->messageIdentifier, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_SerialNumber, &s1AP_WriteReplaceWarningResponseIEs->serialNumber, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningResponseIEs->presenceMask & S1AP_WRITEREPLACEWARNINGRESPONSEIES_BROADCASTCOMPLETEDAREALIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_BroadcastCompletedAreaList, &s1AP_WriteReplaceWarningResponseIEs->broadcastCompletedAreaList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_WriteReplaceWarningResponseIEs->presenceMask & S1AP_WRITEREPLACEWARNINGRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_WriteReplaceWarningResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-WriteReplaceWarningResponseIEs>\n", 43, app_key);
    cb("</S1AP-WriteReplaceWarningResponseIEs-PDU>\n", 43, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_tailist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_TAIList_IEs_t *s1AP_TAIList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_TAIList->s1AP_TAIItem.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_TAIItem, s1AP_TAIList->s1AP_TAIItem.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handovercancel(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverCancelIEs_t *s1AP_HandoverCancelIEs;
    asn_enc_rval_t er;
    s1AP_HandoverCancelIEs = &message_p->s1AP_HandoverCancelIEs;

    cb("<S1AP-HandoverCancelIEs-PDU>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverCancelIEs>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverCancelIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverCancelIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_HandoverCancelIEs->cause, cb, app_key, 2);
    cb("    </S1AP-HandoverCancelIEs>\n", 30, app_key);
    cb("</S1AP-HandoverCancelIEs-PDU>\n", 30, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handoverpreparationfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverPreparationFailureIEs_t *s1AP_HandoverPreparationFailureIEs;
    asn_enc_rval_t er;
    s1AP_HandoverPreparationFailureIEs = &message_p->s1AP_HandoverPreparationFailureIEs;

    cb("<S1AP-HandoverPreparationFailureIEs-PDU>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverPreparationFailureIEs>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverPreparationFailureIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverPreparationFailureIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_HandoverPreparationFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverPreparationFailureIEs->presenceMask & S1AP_HANDOVERPREPARATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverPreparationFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-HandoverPreparationFailureIEs>\n", 42, app_key);
    cb("</S1AP-HandoverPreparationFailureIEs-PDU>\n", 42, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobesetuplisthoreq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReq) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABToBeSetupListHOReq->s1AP_E_RABToBeSetupItemHOReq.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABToBeSetupItemHOReq, s1AP_E_RABToBeSetupListHOReq->s1AP_E_RABToBeSetupItemHOReq.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabmodifyrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_E_RABModifyRequestIEs_t *s1AP_E_RABModifyRequestIEs;
    asn_enc_rval_t er;
    s1AP_E_RABModifyRequestIEs = &message_p->s1AP_E_RABModifyRequestIEs;

    cb("<S1AP-E-RABModifyRequestIEs-PDU>\n", 33, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-E-RABModifyRequestIEs>\n", 33, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABModifyRequestIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABModifyRequestIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_E_RABModifyRequestIEs->presenceMask & S1AP_E_RABMODIFYREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_E_RABModifyRequestIEs->uEaggregateMaximumBitrate, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rabtobemodifiedlistbearermodreq(cb, app_key, &s1AP_E_RABModifyRequestIEs->e_RABToBeModifiedListBearerModReq);
    cb("    </S1AP-E-RABModifyRequestIEs>\n", 34, app_key);
    cb("</S1AP-E-RABModifyRequestIEs-PDU>\n", 34, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handoverrequestacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverRequestAcknowledgeIEs_t *s1AP_HandoverRequestAcknowledgeIEs;
    asn_enc_rval_t er;
    s1AP_HandoverRequestAcknowledgeIEs = &message_p->s1AP_HandoverRequestAcknowledgeIEs;

    cb("<S1AP-HandoverRequestAcknowledgeIEs-PDU>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverRequestAcknowledgeIEs>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequestAcknowledgeIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverRequestAcknowledgeIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rabadmittedlist(cb, app_key, &s1AP_HandoverRequestAcknowledgeIEs->e_RABAdmittedList);
    /* Optional field */
    if (s1AP_HandoverRequestAcknowledgeIEs->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_E_RABFAILEDTOSETUPLISTHOREQACK_PRESENT)
        s1ap_xer_print_s1ap_e_rabfailedtosetuplisthoreqack(cb, app_key, &s1AP_HandoverRequestAcknowledgeIEs->e_RABFailedToSetupListHOReqAck);
    xer_encode_local(&asn_DEF_S1AP_Target_ToSource_TransparentContainer, &s1AP_HandoverRequestAcknowledgeIEs->target_ToSource_TransparentContainer, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestAcknowledgeIEs->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CSG_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_Id, &s1AP_HandoverRequestAcknowledgeIEs->csG_Id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestAcknowledgeIEs->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverRequestAcknowledgeIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-HandoverRequestAcknowledgeIEs>\n", 42, app_key);
    cb("</S1AP-HandoverRequestAcknowledgeIEs-PDU>\n", 42, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobeswitchedullist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABToBeSwitchedULList->s1AP_E_RABToBeSwitchedULItem.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABToBeSwitchedULItem, s1AP_E_RABToBeSwitchedULList->s1AP_E_RABToBeSwitchedULItem.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_downlinknastransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_DownlinkNASTransport_IEs_t *s1AP_DownlinkNASTransport_IEs;
    asn_enc_rval_t er;
    s1AP_DownlinkNASTransport_IEs = &message_p->s1AP_DownlinkNASTransport_IEs;

    cb("<S1AP-DownlinkNASTransport-IEs-PDU>\n", 36, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-DownlinkNASTransport-IEs>\n", 36, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DownlinkNASTransport_IEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DownlinkNASTransport_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_NAS_PDU, &s1AP_DownlinkNASTransport_IEs->nas_pdu, cb, app_key, 2);
    /* Optional field */
    if (s1AP_DownlinkNASTransport_IEs->presenceMask & S1AP_DOWNLINKNASTRANSPORT_IES_HANDOVERRESTRICTIONLIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_HandoverRestrictionList, &s1AP_DownlinkNASTransport_IEs->handoverRestrictionList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_DownlinkNASTransport_IEs->presenceMask & S1AP_DOWNLINKNASTRANSPORT_IES_SUBSCRIBERPROFILEIDFORRFP_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SubscriberProfileIDforRFP, &s1AP_DownlinkNASTransport_IEs->subscriberProfileIDforRFP, cb, app_key, 2);
    cb("    </S1AP-DownlinkNASTransport-IEs>\n", 37, app_key);
    cb("</S1AP-DownlinkNASTransport-IEs-PDU>\n", 37, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleaseindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_E_RABReleaseIndicationIEs_t *s1AP_E_RABReleaseIndicationIEs;
    asn_enc_rval_t er;
    s1AP_E_RABReleaseIndicationIEs = &message_p->s1AP_E_RABReleaseIndicationIEs;

    cb("<S1AP-E-RABReleaseIndicationIEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-E-RABReleaseIndicationIEs>\n", 37, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABReleaseIndicationIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABReleaseIndicationIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_E_RABReleaseIndicationIEs->e_RABReleasedList);
    cb("    </S1AP-E-RABReleaseIndicationIEs>\n", 38, app_key);
    cb("</S1AP-E-RABReleaseIndicationIEs-PDU>\n", 38, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_pathswitchrequestacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_PathSwitchRequestAcknowledgeIEs_t *s1AP_PathSwitchRequestAcknowledgeIEs;
    asn_enc_rval_t er;
    s1AP_PathSwitchRequestAcknowledgeIEs = &message_p->s1AP_PathSwitchRequestAcknowledgeIEs;

    cb("<S1AP-PathSwitchRequestAcknowledgeIEs-PDU>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-PathSwitchRequestAcknowledgeIEs>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_PathSwitchRequestAcknowledgeIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_PathSwitchRequestAcknowledgeIEs->uEaggregateMaximumBitrate, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBESWITCHEDULLIST_PRESENT)
        s1ap_xer_print_s1ap_e_rabtobeswitchedullist(cb, app_key, &s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeSwitchedULList);
    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBERELEASEDLIST_PRESENT)
        s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeReleasedList);
    xer_encode_local(&asn_DEF_S1AP_SecurityContext, &s1AP_PathSwitchRequestAcknowledgeIEs->securityContext, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_PathSwitchRequestAcknowledgeIEs->criticalityDiagnostics, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_MME_UE_S1AP_ID_2_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id_2, cb, app_key, 2);
    cb("    </S1AP-PathSwitchRequestAcknowledgeIEs>\n", 44, app_key);
    cb("</S1AP-PathSwitchRequestAcknowledgeIEs-PDU>\n", 44, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_nasnondeliveryindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_NASNonDeliveryIndication_IEs_t *s1AP_NASNonDeliveryIndication_IEs;
    asn_enc_rval_t er;
    s1AP_NASNonDeliveryIndication_IEs = &message_p->s1AP_NASNonDeliveryIndication_IEs;

    cb("<S1AP-NASNonDeliveryIndication-IEs-PDU>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-NASNonDeliveryIndication-IEs>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_NASNonDeliveryIndication_IEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_NASNonDeliveryIndication_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_NAS_PDU, &s1AP_NASNonDeliveryIndication_IEs->nas_pdu, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_NASNonDeliveryIndication_IEs->cause, cb, app_key, 2);
    cb("    </S1AP-NASNonDeliveryIndication-IEs>\n", 41, app_key);
    cb("</S1AP-NASNonDeliveryIndication-IEs-PDU>\n", 41, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rablist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABList_IEs_t *s1AP_E_RABList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABList->s1AP_E_RABItem.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABItem, s1AP_E_RABList->s1AP_E_RABItem.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_initialcontextsetuprequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_InitialContextSetupRequestIEs_t *s1AP_InitialContextSetupRequestIEs;
    asn_enc_rval_t er;
    s1AP_InitialContextSetupRequestIEs = &message_p->s1AP_InitialContextSetupRequestIEs;

    cb("<S1AP-InitialContextSetupRequestIEs-PDU>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-InitialContextSetupRequestIEs>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialContextSetupRequestIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_InitialContextSetupRequestIEs->uEaggregateMaximumBitrate, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rabtobesetuplistctxtsureq(cb, app_key, &s1AP_InitialContextSetupRequestIEs->e_RABToBeSetupListCtxtSUReq);
    xer_encode_local(&asn_DEF_S1AP_UESecurityCapabilities, &s1AP_InitialContextSetupRequestIEs->ueSecurityCapabilities, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_SecurityKey, &s1AP_InitialContextSetupRequestIEs->securityKey, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_TRACEACTIVATION_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TraceActivation, &s1AP_InitialContextSetupRequestIEs->traceActivation, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_HandoverRestrictionList, &s1AP_InitialContextSetupRequestIEs->handoverRestrictionList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_UERADIOCAPABILITY_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_UERadioCapability, &s1AP_InitialContextSetupRequestIEs->ueRadioCapability, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SubscriberProfileIDforRFP, &s1AP_InitialContextSetupRequestIEs->subscriberProfileIDforRFP, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_CSFALLBACKINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSFallbackIndicator, &s1AP_InitialContextSetupRequestIEs->csFallbackIndicator, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SRVCCOperationPossible, &s1AP_InitialContextSetupRequestIEs->srvccOperationPossible, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSGMembershipStatus, &s1AP_InitialContextSetupRequestIEs->csgMembershipStatus, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_REGISTEREDLAI_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_LAI, &s1AP_InitialContextSetupRequestIEs->registeredLAI, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_GUMMEI_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GUMMEI, &s1AP_InitialContextSetupRequestIEs->gummei_id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_MME_UE_S1AP_ID_2_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id_2, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ManagementBasedMDTAllowed, &s1AP_InitialContextSetupRequestIEs->managementBasedMDTAllowed, cb, app_key, 2);
    cb("    </S1AP-InitialContextSetupRequestIEs>\n", 42, app_key);
    cb("</S1AP-InitialContextSetupRequestIEs-PDU>\n", 42, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_s1setupresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_S1SetupResponseIEs_t *s1AP_S1SetupResponseIEs;
    asn_enc_rval_t er;
    s1AP_S1SetupResponseIEs = &message_p->s1AP_S1SetupResponseIEs;

    cb("<S1AP-S1SetupResponseIEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-S1SetupResponseIEs>\n", 30, app_key);
    /* Optional field */
    if (s1AP_S1SetupResponseIEs->presenceMask & S1AP_S1SETUPRESPONSEIES_MMENAME_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MMEname, &s1AP_S1SetupResponseIEs->mmEname, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ServedGUMMEIs, &s1AP_S1SetupResponseIEs->servedGUMMEIs, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_RelativeMMECapacity, &s1AP_S1SetupResponseIEs->relativeMMECapacity, cb, app_key, 2);
    /* Optional field */
    if (s1AP_S1SetupResponseIEs->presenceMask & S1AP_S1SETUPRESPONSEIES_MMERELAYSUPPORTINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MMERelaySupportIndicator, &s1AP_S1SetupResponseIEs->mmeRelaySupportIndicator, cb, app_key, 2);
    /* Optional field */
    if (s1AP_S1SetupResponseIEs->presenceMask & S1AP_S1SETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_S1SetupResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-S1SetupResponseIEs>\n", 31, app_key);
    cb("</S1AP-S1SetupResponseIEs-PDU>\n", 31, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationupdatefailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_MMEConfigurationUpdateFailureIEs_t *s1AP_MMEConfigurationUpdateFailureIEs;
    asn_enc_rval_t er;
    s1AP_MMEConfigurationUpdateFailureIEs = &message_p->s1AP_MMEConfigurationUpdateFailureIEs;

    cb("<S1AP-MMEConfigurationUpdateFailureIEs-PDU>\n", 44, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-MMEConfigurationUpdateFailureIEs>\n", 44, app_key);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_MMEConfigurationUpdateFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_MMEConfigurationUpdateFailureIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TimeToWait, &s1AP_MMEConfigurationUpdateFailureIEs->timeToWait, cb, app_key, 2);
    /* Optional field */
    if (s1AP_MMEConfigurationUpdateFailureIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_MMEConfigurationUpdateFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-MMEConfigurationUpdateFailureIEs>\n", 45, app_key);
    cb("</S1AP-MMEConfigurationUpdateFailureIEs-PDU>\n", 45, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_initialcontextsetupresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_InitialContextSetupResponseIEs_t *s1AP_InitialContextSetupResponseIEs;
    asn_enc_rval_t er;
    s1AP_InitialContextSetupResponseIEs = &message_p->s1AP_InitialContextSetupResponseIEs;

    cb("<S1AP-InitialContextSetupResponseIEs-PDU>\n", 42, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-InitialContextSetupResponseIEs>\n", 42, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupResponseIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialContextSetupResponseIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rabsetuplistctxtsures(cb, app_key, &s1AP_InitialContextSetupResponseIEs->e_RABSetupListCtxtSURes);
    /* Optional field */
    if (s1AP_InitialContextSetupResponseIEs->presenceMask & S1AP_INITIALCONTEXTSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTCTXTSURES_PRESENT)
        s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_InitialContextSetupResponseIEs->e_RABFailedToSetupListCtxtSURes);
    /* Optional field */
    if (s1AP_InitialContextSetupResponseIEs->presenceMask & S1AP_INITIALCONTEXTSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_InitialContextSetupResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-InitialContextSetupResponseIEs>\n", 43, app_key);
    cb("</S1AP-InitialContextSetupResponseIEs-PDU>\n", 43, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationupdate(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ENBConfigurationUpdateIEs_t *s1AP_ENBConfigurationUpdateIEs;
    asn_enc_rval_t er;
    s1AP_ENBConfigurationUpdateIEs = &message_p->s1AP_ENBConfigurationUpdateIEs;

    cb("<S1AP-ENBConfigurationUpdateIEs-PDU>\n", 37, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ENBConfigurationUpdateIEs>\n", 37, app_key);
    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_ENBNAME_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ENBname, &s1AP_ENBConfigurationUpdateIEs->eNBname, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_SUPPORTEDTAS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SupportedTAs, &s1AP_ENBConfigurationUpdateIEs->supportedTAs, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_CSG_IDLIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_IdList, &s1AP_ENBConfigurationUpdateIEs->csG_IdList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_DEFAULTPAGINGDRX_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_PagingDRX, &s1AP_ENBConfigurationUpdateIEs->defaultPagingDRX, cb, app_key, 2);
    cb("    </S1AP-ENBConfigurationUpdateIEs>\n", 38, app_key);
    cb("</S1AP-ENBConfigurationUpdateIEs-PDU>\n", 38, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_locationreport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_LocationReportIEs_t *s1AP_LocationReportIEs;
    asn_enc_rval_t er;
    s1AP_LocationReportIEs = &message_p->s1AP_LocationReportIEs;

    cb("<S1AP-LocationReportIEs-PDU>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-LocationReportIEs>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_LocationReportIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_LocationReportIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_EUTRAN_CGI, &s1AP_LocationReportIEs->eutran_cgi, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TAI, &s1AP_LocationReportIEs->tai, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_RequestType, &s1AP_LocationReportIEs->requestType, cb, app_key, 2);
    cb("    </S1AP-LocationReportIEs>\n", 30, app_key);
    cb("</S1AP-LocationReportIEs-PDU>\n", 30, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uplinkueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UplinkUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkUEAssociatedLPPaTransport_IEs;
    asn_enc_rval_t er;
    s1AP_UplinkUEAssociatedLPPaTransport_IEs = &message_p->s1AP_UplinkUEAssociatedLPPaTransport_IEs;

    cb("<S1AP-UplinkUEAssociatedLPPaTransport-IEs-PDU>\n", 47, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UplinkUEAssociatedLPPaTransport-IEs>\n", 47, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Routing_ID, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->routing_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_LPPa_PDU, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->lpPa_PDU, cb, app_key, 2);
    cb("    </S1AP-UplinkUEAssociatedLPPaTransport-IEs>\n", 48, app_key);
    cb("</S1AP-UplinkUEAssociatedLPPaTransport-IEs-PDU>\n", 48, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabfailedtosetuplisthoreqack(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAck) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABFailedtoSetupListHOReqAck->s1AP_E_RABFailedtoSetupItemHOReqAck.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck, s1AP_E_RABFailedtoSetupListHOReqAck->s1AP_E_RABFailedtoSetupItemHOReqAck.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uecontextmodificationresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UEContextModificationResponseIEs_t *s1AP_UEContextModificationResponseIEs;
    asn_enc_rval_t er;
    s1AP_UEContextModificationResponseIEs = &message_p->s1AP_UEContextModificationResponseIEs;

    cb("<S1AP-UEContextModificationResponseIEs-PDU>\n", 44, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UEContextModificationResponseIEs>\n", 44, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextModificationResponseIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextModificationResponseIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationResponseIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_UEContextModificationResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-UEContextModificationResponseIEs>\n", 45, app_key);
    cb("</S1AP-UEContextModificationResponseIEs-PDU>\n", 45, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleaseresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_E_RABReleaseResponseIEs_t *s1AP_E_RABReleaseResponseIEs;
    asn_enc_rval_t er;
    s1AP_E_RABReleaseResponseIEs = &message_p->s1AP_E_RABReleaseResponseIEs;

    cb("<S1AP-E-RABReleaseResponseIEs-PDU>\n", 35, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-E-RABReleaseResponseIEs>\n", 35, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABReleaseResponseIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABReleaseResponseIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_E_RABReleaseResponseIEs->presenceMask & S1AP_E_RABRELEASERESPONSEIES_E_RABRELEASELISTBEARERRELCOMP_PRESENT)
        s1ap_xer_print_s1ap_e_rabreleaselistbearerrelcomp(cb, app_key, &s1AP_E_RABReleaseResponseIEs->e_RABReleaseListBearerRelComp);
    /* Optional field */
    if (s1AP_E_RABReleaseResponseIEs->presenceMask & S1AP_E_RABRELEASERESPONSEIES_E_RABFAILEDTORELEASELIST_PRESENT)
        s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_E_RABReleaseResponseIEs->e_RABFailedToReleaseList);
    /* Optional field */
    if (s1AP_E_RABReleaseResponseIEs->presenceMask & S1AP_E_RABRELEASERESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_E_RABReleaseResponseIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-E-RABReleaseResponseIEs>\n", 36, app_key);
    cb("</S1AP-E-RABReleaseResponseIEs-PDU>\n", 36, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobeswitcheddllist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABToBeSwitchedDLList->s1AP_E_RABToBeSwitchedDLItem.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABToBeSwitchedDLItem, s1AP_E_RABToBeSwitchedDLList->s1AP_E_RABToBeSwitchedDLItem.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handoverrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverRequestIEs_t *s1AP_HandoverRequestIEs;
    asn_enc_rval_t er;
    s1AP_HandoverRequestIEs = &message_p->s1AP_HandoverRequestIEs;

    cb("<S1AP-HandoverRequestIEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverRequestIEs>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequestIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_HandoverType, &s1AP_HandoverRequestIEs->handoverType, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_HandoverRequestIEs->cause, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_HandoverRequestIEs->uEaggregateMaximumBitrate, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rabtobesetuplisthoreq(cb, app_key, &s1AP_HandoverRequestIEs->e_RABToBeSetupListHOReq);
    xer_encode_local(&asn_DEF_S1AP_Source_ToTarget_TransparentContainer, &s1AP_HandoverRequestIEs->source_ToTarget_TransparentContainer, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_UESecurityCapabilities, &s1AP_HandoverRequestIEs->ueSecurityCapabilities, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_HandoverRestrictionList, &s1AP_HandoverRequestIEs->handoverRestrictionList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_TRACEACTIVATION_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TraceActivation, &s1AP_HandoverRequestIEs->traceActivation, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_REQUESTTYPE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_RequestType, &s1AP_HandoverRequestIEs->requestType, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SRVCCOperationPossible, &s1AP_HandoverRequestIEs->srvccOperationPossible, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_SecurityContext, &s1AP_HandoverRequestIEs->securityContext, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_CSG_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_Id, &s1AP_HandoverRequestIEs->csG_Id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSGMembershipStatus, &s1AP_HandoverRequestIEs->csgMembershipStatus, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_GUMMEI_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GUMMEI, &s1AP_HandoverRequestIEs->gummei_id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_MME_UE_S1AP_ID_2_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequestIEs->mme_ue_s1ap_id_2, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ManagementBasedMDTAllowed, &s1AP_HandoverRequestIEs->managementBasedMDTAllowed, cb, app_key, 2);
    cb("    </S1AP-HandoverRequestIEs>\n", 31, app_key);
    cb("</S1AP-HandoverRequestIEs-PDU>\n", 31, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_handoverrequired(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_HandoverRequiredIEs_t *s1AP_HandoverRequiredIEs;
    asn_enc_rval_t er;
    s1AP_HandoverRequiredIEs = &message_p->s1AP_HandoverRequiredIEs;

    cb("<S1AP-HandoverRequiredIEs-PDU>\n", 31, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-HandoverRequiredIEs>\n", 31, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequiredIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverRequiredIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_HandoverType, &s1AP_HandoverRequiredIEs->handoverType, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_HandoverRequiredIEs->cause, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TargetID, &s1AP_HandoverRequiredIEs->targetID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_DIRECT_FORWARDING_PATH_AVAILABILITY_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Direct_Forwarding_Path_Availability, &s1AP_HandoverRequiredIEs->direct_Forwarding_Path_Availability, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_SRVCCHOINDICATION_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_SRVCCHOIndication, &s1AP_HandoverRequiredIEs->srvcchoIndication, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Source_ToTarget_TransparentContainer, &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_SOURCE_TOTARGET_TRANSPARENTCONTAINER_SECONDARY_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Source_ToTarget_TransparentContainer, &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer_Secondary, cb, app_key, 2);
    /* Conditional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_MSCLASSMARK2_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MSClassmark2, &s1AP_HandoverRequiredIEs->msClassmark2, cb, app_key, 2);
    /* Conditional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_MSCLASSMARK3_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MSClassmark3, &s1AP_HandoverRequiredIEs->msClassmark3, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_CSG_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_Id, &s1AP_HandoverRequiredIEs->csG_Id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_CELLACCESSMODE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CellAccessMode, &s1AP_HandoverRequiredIEs->cellAccessMode, cb, app_key, 2);
    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_PS_SERVICENOTAVAILABLE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_PS_ServiceNotAvailable, &s1AP_HandoverRequiredIEs->pS_ServiceNotAvailable, cb, app_key, 2);
    cb("    </S1AP-HandoverRequiredIEs>\n", 32, app_key);
    cb("</S1AP-HandoverRequiredIEs-PDU>\n", 32, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationupdateacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_MMEConfigurationUpdateAcknowledgeIEs_t *s1AP_MMEConfigurationUpdateAcknowledgeIEs;
    asn_enc_rval_t er;
    s1AP_MMEConfigurationUpdateAcknowledgeIEs = &message_p->s1AP_MMEConfigurationUpdateAcknowledgeIEs;

    cb("<S1AP-MMEConfigurationUpdateAcknowledgeIEs-PDU>\n", 48, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-MMEConfigurationUpdateAcknowledgeIEs>\n", 48, app_key);
    /* Optional field */
    if (s1AP_MMEConfigurationUpdateAcknowledgeIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_MMEConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-MMEConfigurationUpdateAcknowledgeIEs>\n", 49, app_key);
    cb("</S1AP-MMEConfigurationUpdateAcknowledgeIEs-PDU>\n", 49, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabadmittedlist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABAdmittedList->s1AP_E_RABAdmittedItem.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABAdmittedItem, s1AP_E_RABAdmittedList->s1AP_E_RABAdmittedItem.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_initialuemessage(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_InitialUEMessage_IEs_t *s1AP_InitialUEMessage_IEs;
    asn_enc_rval_t er;
    s1AP_InitialUEMessage_IEs = &message_p->s1AP_InitialUEMessage_IEs;

    cb("<S1AP-InitialUEMessage-IEs-PDU>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-InitialUEMessage-IEs>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialUEMessage_IEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_NAS_PDU, &s1AP_InitialUEMessage_IEs->nas_pdu, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TAI, &s1AP_InitialUEMessage_IEs->tai, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_EUTRAN_CGI, &s1AP_InitialUEMessage_IEs->eutran_cgi, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_RRC_Establishment_Cause, &s1AP_InitialUEMessage_IEs->rrC_Establishment_Cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_S_TMSI_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_S_TMSI, &s1AP_InitialUEMessage_IEs->s_tmsi, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_CSG_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CSG_Id, &s1AP_InitialUEMessage_IEs->csG_Id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_GUMMEI_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GUMMEI, &s1AP_InitialUEMessage_IEs->gummei_id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_CELLACCESSMODE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CellAccessMode, &s1AP_InitialUEMessage_IEs->cellAccessMode, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_GW_TRANSPORTLAYERADDRESS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TransportLayerAddress, &s1AP_InitialUEMessage_IEs->gW_TransportLayerAddress, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_RELAYNODE_INDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_RelayNode_Indicator, &s1AP_InitialUEMessage_IEs->relayNode_Indicator, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_GUMMEITYPE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GUMMEIType, &s1AP_InitialUEMessage_IEs->gummeiType, cb, app_key, 2);
    cb("    </S1AP-InitialUEMessage-IEs>\n", 33, app_key);
    cb("</S1AP-InitialUEMessage-IEs-PDU>\n", 33, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_celltraffictrace(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_CellTrafficTraceIEs_t *s1AP_CellTrafficTraceIEs;
    asn_enc_rval_t er;
    s1AP_CellTrafficTraceIEs = &message_p->s1AP_CellTrafficTraceIEs;

    cb("<S1AP-CellTrafficTraceIEs-PDU>\n", 31, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-CellTrafficTraceIEs>\n", 31, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_CellTrafficTraceIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_CellTrafficTraceIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_E_UTRAN_Trace_ID, &s1AP_CellTrafficTraceIEs->e_UTRAN_Trace_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_EUTRAN_CGI, &s1AP_CellTrafficTraceIEs->eutran_cgi, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TransportLayerAddress, &s1AP_CellTrafficTraceIEs->traceCollectionEntityIPAddress, cb, app_key, 2);
    /* Optional field */
    if (s1AP_CellTrafficTraceIEs->presenceMask & S1AP_CELLTRAFFICTRACEIES_PRIVACYINDICATOR_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_PrivacyIndicator, &s1AP_CellTrafficTraceIEs->privacyIndicator, cb, app_key, 2);
    cb("    </S1AP-CellTrafficTraceIEs>\n", 32, app_key);
    cb("</S1AP-CellTrafficTraceIEs-PDU>\n", 32, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_enbstatustransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ENBStatusTransferIEs_t *s1AP_ENBStatusTransferIEs;
    asn_enc_rval_t er;
    s1AP_ENBStatusTransferIEs = &message_p->s1AP_ENBStatusTransferIEs;

    cb("<S1AP-ENBStatusTransferIEs-PDU>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ENBStatusTransferIEs>\n", 32, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_ENBStatusTransferIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_ENBStatusTransferIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer, &s1AP_ENBStatusTransferIEs->eNB_StatusTransfer_TransparentContainer, cb, app_key, 2);
    cb("    </S1AP-ENBStatusTransferIEs>\n", 33, app_key);
    cb("</S1AP-ENBStatusTransferIEs-PDU>\n", 33, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uecontextmodificationfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UEContextModificationFailureIEs_t *s1AP_UEContextModificationFailureIEs;
    asn_enc_rval_t er;
    s1AP_UEContextModificationFailureIEs = &message_p->s1AP_UEContextModificationFailureIEs;

    cb("<S1AP-UEContextModificationFailureIEs-PDU>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UEContextModificationFailureIEs>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextModificationFailureIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextModificationFailureIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_UEContextModificationFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UEContextModificationFailureIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_UEContextModificationFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-UEContextModificationFailureIEs>\n", 44, app_key);
    cb("</S1AP-UEContextModificationFailureIEs-PDU>\n", 44, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_mmedirectinformationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_MMEDirectInformationTransferIEs_t *s1AP_MMEDirectInformationTransferIEs;
    asn_enc_rval_t er;
    s1AP_MMEDirectInformationTransferIEs = &message_p->s1AP_MMEDirectInformationTransferIEs;

    cb("<S1AP-MMEDirectInformationTransferIEs-PDU>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-MMEDirectInformationTransferIEs>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_Inter_SystemInformationTransferType, &s1AP_MMEDirectInformationTransferIEs->inter_SystemInformationTransferTypeMDT, cb, app_key, 2);
    cb("    </S1AP-MMEDirectInformationTransferIEs>\n", 44, app_key);
    cb("</S1AP-MMEDirectInformationTransferIEs-PDU>\n", 44, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_s1setupfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_S1SetupFailureIEs_t *s1AP_S1SetupFailureIEs;
    asn_enc_rval_t er;
    s1AP_S1SetupFailureIEs = &message_p->s1AP_S1SetupFailureIEs;

    cb("<S1AP-S1SetupFailureIEs-PDU>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-S1SetupFailureIEs>\n", 29, app_key);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_S1SetupFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_S1SetupFailureIEs->presenceMask & S1AP_S1SETUPFAILUREIES_TIMETOWAIT_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TimeToWait, &s1AP_S1SetupFailureIEs->timeToWait, cb, app_key, 2);
    /* Optional field */
    if (s1AP_S1SetupFailureIEs->presenceMask & S1AP_S1SETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_S1SetupFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-S1SetupFailureIEs>\n", 30, app_key);
    cb("</S1AP-S1SetupFailureIEs-PDU>\n", 30, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_downlinks1cdma2000tunneling(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_DownlinkS1cdma2000tunnelingIEs_t *s1AP_DownlinkS1cdma2000tunnelingIEs;
    asn_enc_rval_t er;
    s1AP_DownlinkS1cdma2000tunnelingIEs = &message_p->s1AP_DownlinkS1cdma2000tunnelingIEs;

    cb("<S1AP-DownlinkS1cdma2000tunnelingIEs-PDU>\n", 42, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-DownlinkS1cdma2000tunnelingIEs>\n", 42, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DownlinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DownlinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_DownlinkS1cdma2000tunnelingIEs->presenceMask & S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT)
        s1ap_xer_print_s1ap_e_rabsubjecttodataforwardinglist(cb, app_key, &s1AP_DownlinkS1cdma2000tunnelingIEs->e_RABSubjecttoDataForwardingList);
    /* Optional field */
    if (s1AP_DownlinkS1cdma2000tunnelingIEs->presenceMask & S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_CDMA2000HOSTATUS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Cdma2000HOStatus, &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000HOStatus, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cdma2000RATType, &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000RATType, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cdma2000PDU, &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000PDU, cb, app_key, 2);
    cb("    </S1AP-DownlinkS1cdma2000tunnelingIEs>\n", 43, app_key);
    cb("</S1AP-DownlinkS1cdma2000tunnelingIEs-PDU>\n", 43, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleasecommand(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_E_RABReleaseCommandIEs_t *s1AP_E_RABReleaseCommandIEs;
    asn_enc_rval_t er;
    s1AP_E_RABReleaseCommandIEs = &message_p->s1AP_E_RABReleaseCommandIEs;

    cb("<S1AP-E-RABReleaseCommandIEs-PDU>\n", 34, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-E-RABReleaseCommandIEs>\n", 34, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABReleaseCommandIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABReleaseCommandIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_E_RABReleaseCommandIEs->presenceMask & S1AP_E_RABRELEASECOMMANDIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_E_RABReleaseCommandIEs->uEaggregateMaximumBitrate, cb, app_key, 2);
    s1ap_xer_print_s1ap_e_rablist(cb, app_key, &s1AP_E_RABReleaseCommandIEs->e_RABToBeReleasedList);
    /* Optional field */
    if (s1AP_E_RABReleaseCommandIEs->presenceMask & S1AP_E_RABRELEASECOMMANDIES_NAS_PDU_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_NAS_PDU, &s1AP_E_RABReleaseCommandIEs->nas_pdu, cb, app_key, 2);
    cb("    </S1AP-E-RABReleaseCommandIEs>\n", 35, app_key);
    cb("</S1AP-E-RABReleaseCommandIEs-PDU>\n", 35, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_resetacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ResetAcknowledgeIEs_t *s1AP_ResetAcknowledgeIEs;
    asn_enc_rval_t er;
    s1AP_ResetAcknowledgeIEs = &message_p->s1AP_ResetAcknowledgeIEs;

    cb("<S1AP-ResetAcknowledgeIEs-PDU>\n", 31, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ResetAcknowledgeIEs>\n", 31, app_key);
    /* Optional field */
    if (s1AP_ResetAcknowledgeIEs->presenceMask & S1AP_RESETACKNOWLEDGEIES_UE_ASSOCIATEDLOGICALS1_CONNECTIONLISTRESACK_PRESENT)
        s1ap_xer_print_s1ap_ue_associatedlogicals1_connectionlistresack(cb, app_key, &s1AP_ResetAcknowledgeIEs->uE_associatedLogicalS1_ConnectionListResAck);
    /* Optional field */
    if (s1AP_ResetAcknowledgeIEs->presenceMask & S1AP_RESETACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ResetAcknowledgeIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-ResetAcknowledgeIEs>\n", 32, app_key);
    cb("</S1AP-ResetAcknowledgeIEs-PDU>\n", 32, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_deactivatetrace(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_DeactivateTraceIEs_t *s1AP_DeactivateTraceIEs;
    asn_enc_rval_t er;
    s1AP_DeactivateTraceIEs = &message_p->s1AP_DeactivateTraceIEs;

    cb("<S1AP-DeactivateTraceIEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-DeactivateTraceIEs>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DeactivateTraceIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DeactivateTraceIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_E_UTRAN_Trace_ID, &s1AP_DeactivateTraceIEs->e_UTRAN_Trace_ID, cb, app_key, 2);
    cb("    </S1AP-DeactivateTraceIEs>\n", 31, app_key);
    cb("</S1AP-DeactivateTraceIEs-PDU>\n", 31, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_pathswitchrequestfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_PathSwitchRequestFailureIEs_t *s1AP_PathSwitchRequestFailureIEs;
    asn_enc_rval_t er;
    s1AP_PathSwitchRequestFailureIEs = &message_p->s1AP_PathSwitchRequestFailureIEs;

    cb("<S1AP-PathSwitchRequestFailureIEs-PDU>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-PathSwitchRequestFailureIEs>\n", 39, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestFailureIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_PathSwitchRequestFailureIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_PathSwitchRequestFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_PathSwitchRequestFailureIEs->presenceMask & S1AP_PATHSWITCHREQUESTFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_PathSwitchRequestFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-PathSwitchRequestFailureIEs>\n", 40, app_key);
    cb("</S1AP-PathSwitchRequestFailureIEs-PDU>\n", 40, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_enbdirectinformationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ENBDirectInformationTransferIEs_t *s1AP_ENBDirectInformationTransferIEs;
    asn_enc_rval_t er;
    s1AP_ENBDirectInformationTransferIEs = &message_p->s1AP_ENBDirectInformationTransferIEs;

    cb("<S1AP-ENBDirectInformationTransferIEs-PDU>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ENBDirectInformationTransferIEs>\n", 43, app_key);
    xer_encode_local(&asn_DEF_S1AP_Inter_SystemInformationTransferType, &s1AP_ENBDirectInformationTransferIEs->inter_SystemInformationTransferTypeEDT, cb, app_key, 2);
    cb("    </S1AP-ENBDirectInformationTransferIEs>\n", 44, app_key);
    cb("</S1AP-ENBDirectInformationTransferIEs-PDU>\n", 44, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_initialcontextsetupfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_InitialContextSetupFailureIEs_t *s1AP_InitialContextSetupFailureIEs;
    asn_enc_rval_t er;
    s1AP_InitialContextSetupFailureIEs = &message_p->s1AP_InitialContextSetupFailureIEs;

    cb("<S1AP-InitialContextSetupFailureIEs-PDU>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-InitialContextSetupFailureIEs>\n", 41, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupFailureIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialContextSetupFailureIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_InitialContextSetupFailureIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_InitialContextSetupFailureIEs->presenceMask & S1AP_INITIALCONTEXTSETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_InitialContextSetupFailureIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-InitialContextSetupFailureIEs>\n", 42, app_key);
    cb("</S1AP-InitialContextSetupFailureIEs-PDU>\n", 42, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uplinks1cdma2000tunneling(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UplinkS1cdma2000tunnelingIEs_t *s1AP_UplinkS1cdma2000tunnelingIEs;
    asn_enc_rval_t er;
    s1AP_UplinkS1cdma2000tunnelingIEs = &message_p->s1AP_UplinkS1cdma2000tunnelingIEs;

    cb("<S1AP-UplinkS1cdma2000tunnelingIEs-PDU>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UplinkS1cdma2000tunnelingIEs>\n", 40, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UplinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UplinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cdma2000RATType, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000RATType, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cdma2000SectorID, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000SectorID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000HOREQUIREDINDICATION_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Cdma2000HORequiredIndication, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000HORequiredIndication, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXSRVCCINFO_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Cdma2000OneXSRVCCInfo, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXSRVCCInfo, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXRAND_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Cdma2000OneXRAND, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXRAND, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_Cdma2000PDU, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000PDU, cb, app_key, 2);
    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_EUTRANROUNDTRIPDELAYESTIMATIONINFO_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_EUTRANRoundTripDelayEstimationInfo, &s1AP_UplinkS1cdma2000tunnelingIEs->eutranRoundTripDelayEstimationInfo, cb, app_key, 2);
    cb("    </S1AP-UplinkS1cdma2000tunnelingIEs>\n", 41, app_key);
    cb("</S1AP-UplinkS1cdma2000tunnelingIEs-PDU>\n", 41, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_errorindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_ErrorIndicationIEs_t *s1AP_ErrorIndicationIEs;
    asn_enc_rval_t er;
    s1AP_ErrorIndicationIEs = &message_p->s1AP_ErrorIndicationIEs;

    cb("<S1AP-ErrorIndicationIEs-PDU>\n", 30, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-ErrorIndicationIEs>\n", 30, app_key);
    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_MME_UE_S1AP_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_ErrorIndicationIEs->mme_ue_s1ap_id, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_ENB_UE_S1AP_ID_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_ErrorIndicationIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_CAUSE_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_Cause, &s1AP_ErrorIndicationIEs->cause, cb, app_key, 2);
    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_CRITICALITYDIAGNOSTICS_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ErrorIndicationIEs->criticalityDiagnostics, cb, app_key, 2);
    cb("    </S1AP-ErrorIndicationIEs>\n", 31, app_key);
    cb("</S1AP-ErrorIndicationIEs-PDU>\n", 31, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_killrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_KillRequestIEs_t *s1AP_KillRequestIEs;
    asn_enc_rval_t er;
    s1AP_KillRequestIEs = &message_p->s1AP_KillRequestIEs;

    cb("<S1AP-KillRequestIEs-PDU>\n", 26, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-KillRequestIEs>\n", 26, app_key);
    xer_encode_local(&asn_DEF_S1AP_MessageIdentifier, &s1AP_KillRequestIEs->messageIdentifier, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_SerialNumber, &s1AP_KillRequestIEs->serialNumber, cb, app_key, 2);
    /* Optional field */
    if (s1AP_KillRequestIEs->presenceMask & S1AP_KILLREQUESTIES_WARNINGAREALIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_WarningAreaList, &s1AP_KillRequestIEs->warningAreaList, cb, app_key, 2);
    cb("    </S1AP-KillRequestIEs>\n", 27, app_key);
    cb("</S1AP-KillRequestIEs-PDU>\n", 27, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_tracestart(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_TraceStartIEs_t *s1AP_TraceStartIEs;
    asn_enc_rval_t er;
    s1AP_TraceStartIEs = &message_p->s1AP_TraceStartIEs;

    cb("<S1AP-TraceStartIEs-PDU>\n", 25, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-TraceStartIEs>\n", 25, app_key);
    xer_encode_local(&asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_TraceStartIEs->mme_ue_s1ap_id, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_TraceStartIEs->eNB_UE_S1AP_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_TraceActivation, &s1AP_TraceStartIEs->traceActivation, cb, app_key, 2);
    cb("    </S1AP-TraceStartIEs>\n", 26, app_key);
    cb("</S1AP-TraceStartIEs-PDU>\n", 26, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobesetuplistctxtsureq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReq) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABToBeSetupListCtxtSUReq->s1AP_E_RABToBeSetupItemCtxtSUReq.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABToBeSetupItemCtxtSUReq, s1AP_E_RABToBeSetupListCtxtSUReq->s1AP_E_RABToBeSetupItemCtxtSUReq.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_overloadstart(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_OverloadStartIEs_t *s1AP_OverloadStartIEs;
    asn_enc_rval_t er;
    s1AP_OverloadStartIEs = &message_p->s1AP_OverloadStartIEs;

    cb("<S1AP-OverloadStartIEs-PDU>\n", 28, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-OverloadStartIEs>\n", 28, app_key);
    xer_encode_local(&asn_DEF_S1AP_OverloadResponse, &s1AP_OverloadStartIEs->overloadResponse, cb, app_key, 2);
    /* Optional field */
    if (s1AP_OverloadStartIEs->presenceMask & S1AP_OVERLOADSTARTIES_GUMMEILIST_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_GUMMEIList, &s1AP_OverloadStartIEs->gummeiList, cb, app_key, 2);
    /* Optional field */
    if (s1AP_OverloadStartIEs->presenceMask & S1AP_OVERLOADSTARTIES_TRAFFICLOADREDUCTIONINDICATION_PRESENT)
        xer_encode_local(&asn_DEF_S1AP_TrafficLoadReductionIndication, &s1AP_OverloadStartIEs->trafficLoadReductionIndication, cb, app_key, 2);
    cb("    </S1AP-OverloadStartIEs>\n", 29, app_key);
    cb("</S1AP-OverloadStartIEs-PDU>\n", 29, app_key);
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabinformationlist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationList) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABInformationList->s1AP_E_RABInformationList.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABInformationListItem, s1AP_E_RABInformationList->s1AP_E_RABInformationList.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetuplistctxtsures(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSURes) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_E_RABSetupListCtxtSURes->s1AP_E_RABSetupItemCtxtSURes.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_E_RABSetupItemCtxtSURes, s1AP_E_RABSetupListCtxtSURes->s1AP_E_RABSetupItemCtxtSURes.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_ue_associatedlogicals1_connectionlistresack(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAck) {

    int i;
    asn_enc_rval_t er;
    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListResAck->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.count; i++) {
        er = xer_encode(&asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, s1AP_UE_associatedLogicalS1_ConnectionListResAck->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.array[i], XER_F_BASIC, cb, app_key);
    }
    ASN__ENCODED_OK(er);
}

asn_enc_rval_t s1ap_xer_print_s1ap_uplinknonueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p)
{
    S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkNonUEAssociatedLPPaTransport_IEs;
    asn_enc_rval_t er;
    s1AP_UplinkNonUEAssociatedLPPaTransport_IEs = &message_p->s1AP_UplinkNonUEAssociatedLPPaTransport_IEs;

    cb("<S1AP-UplinkNonUEAssociatedLPPaTransport-IEs-PDU>\n", 50, app_key);
    xer_encode_local(&asn_DEF_S1AP_Criticality, &message_p->criticality, cb, app_key, 1);
    xer_encode_local(&asn_DEF_S1AP_ProcedureCode, &message_p->procedureCode, cb, app_key, 1);
    cb("    <S1AP-UplinkNonUEAssociatedLPPaTransport-IEs>\n", 50, app_key);
    xer_encode_local(&asn_DEF_S1AP_Routing_ID, &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->routing_ID, cb, app_key, 2);
    xer_encode_local(&asn_DEF_S1AP_LPPa_PDU, &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU, cb, app_key, 2);
    cb("    </S1AP-UplinkNonUEAssociatedLPPaTransport-IEs>\n", 51, app_key);
    cb("</S1AP-UplinkNonUEAssociatedLPPaTransport-IEs-PDU>\n", 51, app_key);
    ASN__ENCODED_OK(er);
}

