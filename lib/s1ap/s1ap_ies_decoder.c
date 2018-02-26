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
 * Created on: 2018-02-26 19:44:10.817392 by acetcom
 * from ['S1AP-PDU.asn']
 ******************************************************************************/
#define TRACE_MODULE _s1ap_ies_decoder
#include "core_debug.h"
#include "s1ap_ies_defs.h"

int s1ap_decode_s1ap_e_rabsetupresponseies(
    S1AP_E_RABSetupResponseIEs_t *s1AP_E_RABSetupResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_E_RABSetupResponse_t  s1AP_E_RABSetupResponse;
    S1AP_E_RABSetupResponse_t *s1AP_E_RABSetupResponse_p = &s1AP_E_RABSetupResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_E_RABSetupResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_E_RABSetupResponseIEs\n");

    memset(&s1AP_E_RABSetupResponse, 0, sizeof(S1AP_E_RABSetupResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_RABSetupResponse, (void **)&s1AP_E_RABSetupResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_E_RABSetupResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_E_RABSetupResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_E_RABSetupResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_E_RABSetupResponseIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_E_RABSetupResponseIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABSetupListBearerSURes:
            {
                S1AP_E_RABSetupListBearerSURes_t *s1APERABSetupListBearerSURes_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABSetupListBearerSURes, (void**)&s1APERABSetupListBearerSURes_p);
                if (s1ap_decode_s1ap_e_rabsetuplistbearersures(&s1AP_E_RABSetupResponseIEs->e_RABSetupListBearerSURes, s1APERABSetupListBearerSURes_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABSetupListBearerSURes failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupListBearerSURes, s1APERABSetupListBearerSURes_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupListBearerSURes, s1APERABSetupListBearerSURes_p);
                s1AP_E_RABSetupResponseIEs->presenceMask |= S1AP_E_RABSETUPRESPONSEIES_E_RABSETUPLISTBEARERSURES_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListBearerSURes:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_E_RABSetupResponseIEs->e_RABFailedToSetupListBearerSURes, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                s1AP_E_RABSetupResponseIEs->presenceMask |= S1AP_E_RABSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTBEARERSURES_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_E_RABSetupResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
                    return -1;
                }
                s1AP_E_RABSetupResponseIEs->presenceMask |= S1AP_E_RABSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_e_rabsetupresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupResponse, s1AP_E_RABSetupResponse_p);
    return 0;
}

int s1ap_decode_s1ap_uecontextreleasecommand_ies(
    S1AP_UEContextReleaseCommand_IEs_t *s1AP_UEContextReleaseCommand_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UEContextReleaseCommand_t  s1AP_UEContextReleaseCommand;
    S1AP_UEContextReleaseCommand_t *s1AP_UEContextReleaseCommand_p = &s1AP_UEContextReleaseCommand;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UEContextReleaseCommand_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UEContextReleaseCommand_IEs\n");

    memset(&s1AP_UEContextReleaseCommand, 0, sizeof(S1AP_UEContextReleaseCommand_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEContextReleaseCommand, (void **)&s1AP_UEContextReleaseCommand_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UEContextReleaseCommand failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseCommand, s1AP_UEContextReleaseCommand_p);
        return -1;
    }

    for (i = 0; i < s1AP_UEContextReleaseCommand_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UEContextReleaseCommand_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_UE_S1AP_IDs:
            {
                S1AP_UE_S1AP_IDs_t *s1APUES1APIDs_p = &s1AP_UEContextReleaseCommand_IEs->uE_S1AP_IDs;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UE_S1AP_IDs, (void **)&s1APUES1APIDs_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUES1APIDs failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseCommand, s1AP_UEContextReleaseCommand_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_UEContextReleaseCommand_IEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseCommand, s1AP_UEContextReleaseCommand_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uecontextreleasecommand_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseCommand, s1AP_UEContextReleaseCommand_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseCommand, s1AP_UEContextReleaseCommand_p);
    return 0;
}

int s1ap_decode_s1ap_mmeconfigurationtransferies(
    S1AP_MMEConfigurationTransferIEs_t *s1AP_MMEConfigurationTransferIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_MMEConfigurationTransfer_t  s1AP_MMEConfigurationTransfer;
    S1AP_MMEConfigurationTransfer_t *s1AP_MMEConfigurationTransfer_p = &s1AP_MMEConfigurationTransfer;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_MMEConfigurationTransferIEs\n");

    memset(&s1AP_MMEConfigurationTransfer, 0, sizeof(S1AP_MMEConfigurationTransfer_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEConfigurationTransfer, (void **)&s1AP_MMEConfigurationTransfer_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_MMEConfigurationTransfer failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationTransfer, s1AP_MMEConfigurationTransfer_p);
        return -1;
    }

    for (i = 0; i < s1AP_MMEConfigurationTransfer_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_MMEConfigurationTransfer_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SONConfigurationTransferMCT:
            {
                S1AP_SONConfigurationTransfer_t *s1APSONConfigurationTransfer_p = &s1AP_MMEConfigurationTransferIEs->sonConfigurationTransferMCT;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SONConfigurationTransfer, (void **)&s1APSONConfigurationTransfer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSONConfigurationTransfer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationTransfer, s1AP_MMEConfigurationTransfer_p);
                    return -1;
                }
                s1AP_MMEConfigurationTransferIEs->presenceMask |= S1AP_MMECONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERMCT_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_mmeconfigurationtransferies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationTransfer, s1AP_MMEConfigurationTransfer_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationTransfer, s1AP_MMEConfigurationTransfer_p);
    return 0;
}

int s1ap_decode_s1ap_uecapabilityinfoindicationies(
    S1AP_UECapabilityInfoIndicationIEs_t *s1AP_UECapabilityInfoIndicationIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UECapabilityInfoIndication_t  s1AP_UECapabilityInfoIndication;
    S1AP_UECapabilityInfoIndication_t *s1AP_UECapabilityInfoIndication_p = &s1AP_UECapabilityInfoIndication;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UECapabilityInfoIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UECapabilityInfoIndicationIEs\n");

    memset(&s1AP_UECapabilityInfoIndication, 0, sizeof(S1AP_UECapabilityInfoIndication_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UECapabilityInfoIndication, (void **)&s1AP_UECapabilityInfoIndication_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UECapabilityInfoIndication failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UECapabilityInfoIndication, s1AP_UECapabilityInfoIndication_p);
        return -1;
    }

    for (i = 0; i < s1AP_UECapabilityInfoIndication_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UECapabilityInfoIndication_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UECapabilityInfoIndicationIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UECapabilityInfoIndication, s1AP_UECapabilityInfoIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UECapabilityInfoIndicationIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UECapabilityInfoIndication, s1AP_UECapabilityInfoIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_UERadioCapability:
            {
                S1AP_UERadioCapability_t *s1APUERadioCapability_p = &s1AP_UECapabilityInfoIndicationIEs->ueRadioCapability;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UERadioCapability, (void **)&s1APUERadioCapability_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUERadioCapability failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UECapabilityInfoIndication, s1AP_UECapabilityInfoIndication_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uecapabilityinfoindicationies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UECapabilityInfoIndication, s1AP_UECapabilityInfoIndication_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UECapabilityInfoIndication, s1AP_UECapabilityInfoIndication_p);
    return 0;
}

int s1ap_decode_s1ap_writereplacewarningrequesties(
    S1AP_WriteReplaceWarningRequestIEs_t *s1AP_WriteReplaceWarningRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_WriteReplaceWarningRequest_t  s1AP_WriteReplaceWarningRequest;
    S1AP_WriteReplaceWarningRequest_t *s1AP_WriteReplaceWarningRequest_p = &s1AP_WriteReplaceWarningRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_WriteReplaceWarningRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_WriteReplaceWarningRequestIEs\n");

    memset(&s1AP_WriteReplaceWarningRequest, 0, sizeof(S1AP_WriteReplaceWarningRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_WriteReplaceWarningRequest, (void **)&s1AP_WriteReplaceWarningRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_WriteReplaceWarningRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_WriteReplaceWarningRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_WriteReplaceWarningRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MessageIdentifier:
            {
                S1AP_MessageIdentifier_t *s1APMessageIdentifier_p = &s1AP_WriteReplaceWarningRequestIEs->messageIdentifier;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MessageIdentifier, (void **)&s1APMessageIdentifier_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMessageIdentifier failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_SerialNumber:
            {
                S1AP_SerialNumber_t *s1APSerialNumber_p = &s1AP_WriteReplaceWarningRequestIEs->serialNumber;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SerialNumber, (void **)&s1APSerialNumber_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSerialNumber failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_WarningAreaList:
            {
                S1AP_WarningAreaList_t *s1APWarningAreaList_p = &s1AP_WriteReplaceWarningRequestIEs->warningAreaList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_WarningAreaList, (void **)&s1APWarningAreaList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APWarningAreaList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningRequestIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGAREALIST_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_RepetitionPeriod:
            {
                S1AP_RepetitionPeriod_t *s1APRepetitionPeriod_p = &s1AP_WriteReplaceWarningRequestIEs->repetitionPeriod;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RepetitionPeriod, (void **)&s1APRepetitionPeriod_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRepetitionPeriod failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_ExtendedRepetitionPeriod:
            {
                S1AP_ExtendedRepetitionPeriod_t *s1APExtendedRepetitionPeriod_p = &s1AP_WriteReplaceWarningRequestIEs->extendedRepetitionPeriod;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ExtendedRepetitionPeriod, (void **)&s1APExtendedRepetitionPeriod_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APExtendedRepetitionPeriod failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningRequestIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGREQUESTIES_EXTENDEDREPETITIONPERIOD_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_NumberofBroadcastRequest:
            {
                S1AP_NumberofBroadcastRequest_t *s1APNumberofBroadcastRequest_p = &s1AP_WriteReplaceWarningRequestIEs->numberofBroadcastRequest;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_NumberofBroadcastRequest, (void **)&s1APNumberofBroadcastRequest_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APNumberofBroadcastRequest failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_WarningType:
            {
                S1AP_WarningType_t *s1APWarningType_p = &s1AP_WriteReplaceWarningRequestIEs->warningType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_WarningType, (void **)&s1APWarningType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APWarningType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningRequestIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGTYPE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_WarningSecurityInfo:
            {
                S1AP_WarningSecurityInfo_t *s1APWarningSecurityInfo_p = &s1AP_WriteReplaceWarningRequestIEs->warningSecurityInfo;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_WarningSecurityInfo, (void **)&s1APWarningSecurityInfo_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APWarningSecurityInfo failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningRequestIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGSECURITYINFO_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_DataCodingScheme:
            {
                S1AP_DataCodingScheme_t *s1APDataCodingScheme_p = &s1AP_WriteReplaceWarningRequestIEs->dataCodingScheme;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_DataCodingScheme, (void **)&s1APDataCodingScheme_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APDataCodingScheme failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningRequestIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGREQUESTIES_DATACODINGSCHEME_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_WarningMessageContents:
            {
                S1AP_WarningMessageContents_t *s1APWarningMessageContents_p = &s1AP_WriteReplaceWarningRequestIEs->warningMessageContents;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_WarningMessageContents, (void **)&s1APWarningMessageContents_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APWarningMessageContents failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningRequestIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGMESSAGECONTENTS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_ConcurrentWarningMessageIndicator:
            {
                S1AP_ConcurrentWarningMessageIndicator_t *s1APConcurrentWarningMessageIndicator_p = &s1AP_WriteReplaceWarningRequestIEs->concurrentWarningMessageIndicator;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ConcurrentWarningMessageIndicator, (void **)&s1APConcurrentWarningMessageIndicator_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APConcurrentWarningMessageIndicator failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningRequestIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGREQUESTIES_CONCURRENTWARNINGMESSAGEINDICATOR_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_writereplacewarningrequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningRequest, s1AP_WriteReplaceWarningRequest_p);
    return 0;
}

int s1ap_decode_s1ap_e_rabsetuprequesties(
    S1AP_E_RABSetupRequestIEs_t *s1AP_E_RABSetupRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_E_RABSetupRequest_t  s1AP_E_RABSetupRequest;
    S1AP_E_RABSetupRequest_t *s1AP_E_RABSetupRequest_p = &s1AP_E_RABSetupRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_E_RABSetupRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_E_RABSetupRequestIEs\n");

    memset(&s1AP_E_RABSetupRequest, 0, sizeof(S1AP_E_RABSetupRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_RABSetupRequest, (void **)&s1AP_E_RABSetupRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_E_RABSetupRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupRequest, s1AP_E_RABSetupRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_E_RABSetupRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_E_RABSetupRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_E_RABSetupRequestIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupRequest, s1AP_E_RABSetupRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_E_RABSetupRequestIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupRequest, s1AP_E_RABSetupRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate:
            {
                S1AP_UEAggregateMaximumBitrate_t *s1APUEAggregateMaximumBitrate_p = &s1AP_E_RABSetupRequestIEs->uEaggregateMaximumBitrate;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEAggregateMaximumBitrate, (void **)&s1APUEAggregateMaximumBitrate_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEAggregateMaximumBitrate failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupRequest, s1AP_E_RABSetupRequest_p);
                    return -1;
                }
                s1AP_E_RABSetupRequestIEs->presenceMask |= S1AP_E_RABSETUPREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABToBeSetupListBearerSUReq:
            {
                S1AP_E_RABToBeSetupListBearerSUReq_t *s1APERABToBeSetupListBearerSUReq_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSetupListBearerSUReq, (void**)&s1APERABToBeSetupListBearerSUReq_p);
                if (s1ap_decode_s1ap_e_rabtobesetuplistbearersureq(&s1AP_E_RABSetupRequestIEs->e_RABToBeSetupListBearerSUReq, s1APERABToBeSetupListBearerSUReq_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABToBeSetupListBearerSUReq failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupListBearerSUReq, s1APERABToBeSetupListBearerSUReq_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupRequest, s1AP_E_RABSetupRequest_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupListBearerSUReq, s1APERABToBeSetupListBearerSUReq_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_e_rabsetuprequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupRequest, s1AP_E_RABSetupRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupRequest, s1AP_E_RABSetupRequest_p);
    return 0;
}

int s1ap_decode_s1ap_locationreportingfailureindicationies(
    S1AP_LocationReportingFailureIndicationIEs_t *s1AP_LocationReportingFailureIndicationIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_LocationReportingFailureIndication_t  s1AP_LocationReportingFailureIndication;
    S1AP_LocationReportingFailureIndication_t *s1AP_LocationReportingFailureIndication_p = &s1AP_LocationReportingFailureIndication;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_LocationReportingFailureIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_LocationReportingFailureIndicationIEs\n");

    memset(&s1AP_LocationReportingFailureIndication, 0, sizeof(S1AP_LocationReportingFailureIndication_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LocationReportingFailureIndication, (void **)&s1AP_LocationReportingFailureIndication_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_LocationReportingFailureIndication failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingFailureIndication, s1AP_LocationReportingFailureIndication_p);
        return -1;
    }

    for (i = 0; i < s1AP_LocationReportingFailureIndication_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_LocationReportingFailureIndication_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_LocationReportingFailureIndicationIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingFailureIndication, s1AP_LocationReportingFailureIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_LocationReportingFailureIndicationIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingFailureIndication, s1AP_LocationReportingFailureIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_LocationReportingFailureIndicationIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingFailureIndication, s1AP_LocationReportingFailureIndication_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_locationreportingfailureindicationies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingFailureIndication, s1AP_LocationReportingFailureIndication_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingFailureIndication, s1AP_LocationReportingFailureIndication_p);
    return 0;
}

int s1ap_decode_s1ap_uecontextreleasecomplete_ies(
    S1AP_UEContextReleaseComplete_IEs_t *s1AP_UEContextReleaseComplete_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UEContextReleaseComplete_t  s1AP_UEContextReleaseComplete;
    S1AP_UEContextReleaseComplete_t *s1AP_UEContextReleaseComplete_p = &s1AP_UEContextReleaseComplete;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UEContextReleaseComplete_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UEContextReleaseComplete_IEs\n");

    memset(&s1AP_UEContextReleaseComplete, 0, sizeof(S1AP_UEContextReleaseComplete_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEContextReleaseComplete, (void **)&s1AP_UEContextReleaseComplete_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UEContextReleaseComplete failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseComplete, s1AP_UEContextReleaseComplete_p);
        return -1;
    }

    for (i = 0; i < s1AP_UEContextReleaseComplete_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UEContextReleaseComplete_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UEContextReleaseComplete_IEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseComplete, s1AP_UEContextReleaseComplete_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UEContextReleaseComplete_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseComplete, s1AP_UEContextReleaseComplete_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_UEContextReleaseComplete_IEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseComplete, s1AP_UEContextReleaseComplete_p);
                    return -1;
                }
                s1AP_UEContextReleaseComplete_IEs->presenceMask |= S1AP_UECONTEXTRELEASECOMPLETE_IES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uecontextreleasecomplete_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseComplete, s1AP_UEContextReleaseComplete_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseComplete, s1AP_UEContextReleaseComplete_p);
    return 0;
}

int s1ap_decode_s1ap_overloadstopies(
    S1AP_OverloadStopIEs_t *s1AP_OverloadStopIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_OverloadStop_t  s1AP_OverloadStop;
    S1AP_OverloadStop_t *s1AP_OverloadStop_p = &s1AP_OverloadStop;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_OverloadStopIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_OverloadStopIEs\n");

    memset(&s1AP_OverloadStop, 0, sizeof(S1AP_OverloadStop_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_OverloadStop, (void **)&s1AP_OverloadStop_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_OverloadStop failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStop, s1AP_OverloadStop_p);
        return -1;
    }

    for (i = 0; i < s1AP_OverloadStop_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_OverloadStop_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GUMMEIList:
            {
                S1AP_GUMMEIList_t *s1APGUMMEIList_p = &s1AP_OverloadStopIEs->gummeiList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GUMMEIList, (void **)&s1APGUMMEIList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APGUMMEIList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStop, s1AP_OverloadStop_p);
                    return -1;
                }
                s1AP_OverloadStopIEs->presenceMask |= S1AP_OVERLOADSTOPIES_GUMMEILIST_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_overloadstopies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStop, s1AP_OverloadStop_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStop, s1AP_OverloadStop_p);
    return 0;
}

int s1ap_decode_s1ap_uecontextmodificationrequesties(
    S1AP_UEContextModificationRequestIEs_t *s1AP_UEContextModificationRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UEContextModificationRequest_t  s1AP_UEContextModificationRequest;
    S1AP_UEContextModificationRequest_t *s1AP_UEContextModificationRequest_p = &s1AP_UEContextModificationRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UEContextModificationRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UEContextModificationRequestIEs\n");

    memset(&s1AP_UEContextModificationRequest, 0, sizeof(S1AP_UEContextModificationRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEContextModificationRequest, (void **)&s1AP_UEContextModificationRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UEContextModificationRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_UEContextModificationRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UEContextModificationRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UEContextModificationRequestIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UEContextModificationRequestIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SecurityKey:
            {
                S1AP_SecurityKey_t *s1APSecurityKey_p = &s1AP_UEContextModificationRequestIEs->securityKey;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SecurityKey, (void **)&s1APSecurityKey_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSecurityKey failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
                s1AP_UEContextModificationRequestIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONREQUESTIES_SECURITYKEY_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SubscriberProfileIDforRFP:
            {
                S1AP_SubscriberProfileIDforRFP_t *s1APSubscriberProfileIDforRFP_p = &s1AP_UEContextModificationRequestIEs->subscriberProfileIDforRFP;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SubscriberProfileIDforRFP, (void **)&s1APSubscriberProfileIDforRFP_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSubscriberProfileIDforRFP failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
                s1AP_UEContextModificationRequestIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate:
            {
                S1AP_UEAggregateMaximumBitrate_t *s1APUEAggregateMaximumBitrate_p = &s1AP_UEContextModificationRequestIEs->uEaggregateMaximumBitrate;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEAggregateMaximumBitrate, (void **)&s1APUEAggregateMaximumBitrate_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEAggregateMaximumBitrate failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
                s1AP_UEContextModificationRequestIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSFallbackIndicator:
            {
                S1AP_CSFallbackIndicator_t *s1APCSFallbackIndicator_p = &s1AP_UEContextModificationRequestIEs->csFallbackIndicator;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSFallbackIndicator, (void **)&s1APCSFallbackIndicator_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSFallbackIndicator failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
                s1AP_UEContextModificationRequestIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSFALLBACKINDICATOR_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_UESecurityCapabilities:
            {
                S1AP_UESecurityCapabilities_t *s1APUESecurityCapabilities_p = &s1AP_UEContextModificationRequestIEs->ueSecurityCapabilities;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UESecurityCapabilities, (void **)&s1APUESecurityCapabilities_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUESecurityCapabilities failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
                s1AP_UEContextModificationRequestIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONREQUESTIES_UESECURITYCAPABILITIES_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSGMembershipStatus:
            {
                S1AP_CSGMembershipStatus_t *s1APCSGMembershipStatus_p = &s1AP_UEContextModificationRequestIEs->csgMembershipStatus;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSGMembershipStatus, (void **)&s1APCSGMembershipStatus_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGMembershipStatus failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
                s1AP_UEContextModificationRequestIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_RegisteredLAI:
            {
                S1AP_LAI_t *s1aplai_p = &s1AP_UEContextModificationRequestIEs->registeredLAI;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LAI, (void **)&s1aplai_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1aplai failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                    return -1;
                }
                s1AP_UEContextModificationRequestIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONREQUESTIES_REGISTEREDLAI_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uecontextmodificationrequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationRequest, s1AP_UEContextModificationRequest_p);
    return 0;
}

int s1ap_decode_s1ap_e_rabmodifyresponseies(
    S1AP_E_RABModifyResponseIEs_t *s1AP_E_RABModifyResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_E_RABModifyResponse_t  s1AP_E_RABModifyResponse;
    S1AP_E_RABModifyResponse_t *s1AP_E_RABModifyResponse_p = &s1AP_E_RABModifyResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_E_RABModifyResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_E_RABModifyResponseIEs\n");

    memset(&s1AP_E_RABModifyResponse, 0, sizeof(S1AP_E_RABModifyResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_RABModifyResponse, (void **)&s1AP_E_RABModifyResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_E_RABModifyResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_E_RABModifyResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_E_RABModifyResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_E_RABModifyResponseIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_E_RABModifyResponseIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABModifyListBearerModRes:
            {
                S1AP_E_RABModifyListBearerModRes_t *s1APERABModifyListBearerModRes_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABModifyListBearerModRes, (void**)&s1APERABModifyListBearerModRes_p);
                if (s1ap_decode_s1ap_e_rabmodifylistbearermodres(&s1AP_E_RABModifyResponseIEs->e_RABModifyListBearerModRes, s1APERABModifyListBearerModRes_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABModifyListBearerModRes failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABModifyListBearerModRes, s1APERABModifyListBearerModRes_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABModifyListBearerModRes, s1APERABModifyListBearerModRes_p);
                s1AP_E_RABModifyResponseIEs->presenceMask |= S1AP_E_RABMODIFYRESPONSEIES_E_RABMODIFYLISTBEARERMODRES_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABFailedToModifyList:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_E_RABModifyResponseIEs->e_RABFailedToModifyList, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                s1AP_E_RABModifyResponseIEs->presenceMask |= S1AP_E_RABMODIFYRESPONSEIES_E_RABFAILEDTOMODIFYLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_E_RABModifyResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
                    return -1;
                }
                s1AP_E_RABModifyResponseIEs->presenceMask |= S1AP_E_RABMODIFYRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_e_rabmodifyresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyResponse, s1AP_E_RABModifyResponse_p);
    return 0;
}

int s1ap_decode_s1ap_locationreportingcontrolies(
    S1AP_LocationReportingControlIEs_t *s1AP_LocationReportingControlIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_LocationReportingControl_t  s1AP_LocationReportingControl;
    S1AP_LocationReportingControl_t *s1AP_LocationReportingControl_p = &s1AP_LocationReportingControl;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_LocationReportingControlIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_LocationReportingControlIEs\n");

    memset(&s1AP_LocationReportingControl, 0, sizeof(S1AP_LocationReportingControl_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LocationReportingControl, (void **)&s1AP_LocationReportingControl_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_LocationReportingControl failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingControl, s1AP_LocationReportingControl_p);
        return -1;
    }

    for (i = 0; i < s1AP_LocationReportingControl_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_LocationReportingControl_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_LocationReportingControlIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingControl, s1AP_LocationReportingControl_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_LocationReportingControlIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingControl, s1AP_LocationReportingControl_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_RequestType:
            {
                S1AP_RequestType_t *s1APRequestType_p = &s1AP_LocationReportingControlIEs->requestType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RequestType, (void **)&s1APRequestType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRequestType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingControl, s1AP_LocationReportingControl_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_locationreportingcontrolies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingControl, s1AP_LocationReportingControl_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReportingControl, s1AP_LocationReportingControl_p);
    return 0;
}

int s1ap_decode_s1ap_killresponseies(
    S1AP_KillResponseIEs_t *s1AP_KillResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_KillResponse_t  s1AP_KillResponse;
    S1AP_KillResponse_t *s1AP_KillResponse_p = &s1AP_KillResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_KillResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_KillResponseIEs\n");

    memset(&s1AP_KillResponse, 0, sizeof(S1AP_KillResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_KillResponse, (void **)&s1AP_KillResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_KillResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillResponse, s1AP_KillResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_KillResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_KillResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MessageIdentifier:
            {
                S1AP_MessageIdentifier_t *s1APMessageIdentifier_p = &s1AP_KillResponseIEs->messageIdentifier;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MessageIdentifier, (void **)&s1APMessageIdentifier_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMessageIdentifier failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillResponse, s1AP_KillResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_SerialNumber:
            {
                S1AP_SerialNumber_t *s1APSerialNumber_p = &s1AP_KillResponseIEs->serialNumber;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SerialNumber, (void **)&s1APSerialNumber_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSerialNumber failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillResponse, s1AP_KillResponse_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_BroadcastCancelledAreaList:
            {
                S1AP_BroadcastCancelledAreaList_t *s1APBroadcastCancelledAreaList_p = &s1AP_KillResponseIEs->broadcastCancelledAreaList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_BroadcastCancelledAreaList, (void **)&s1APBroadcastCancelledAreaList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APBroadcastCancelledAreaList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillResponse, s1AP_KillResponse_p);
                    return -1;
                }
                s1AP_KillResponseIEs->presenceMask |= S1AP_KILLRESPONSEIES_BROADCASTCANCELLEDAREALIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_KillResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillResponse, s1AP_KillResponse_p);
                    return -1;
                }
                s1AP_KillResponseIEs->presenceMask |= S1AP_KILLRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_killresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillResponse, s1AP_KillResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillResponse, s1AP_KillResponse_p);
    return 0;
}

int s1ap_decode_s1ap_mmestatustransferies(
    S1AP_MMEStatusTransferIEs_t *s1AP_MMEStatusTransferIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_MMEStatusTransfer_t  s1AP_MMEStatusTransfer;
    S1AP_MMEStatusTransfer_t *s1AP_MMEStatusTransfer_p = &s1AP_MMEStatusTransfer;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_MMEStatusTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_MMEStatusTransferIEs\n");

    memset(&s1AP_MMEStatusTransfer, 0, sizeof(S1AP_MMEStatusTransfer_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEStatusTransfer, (void **)&s1AP_MMEStatusTransfer_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_MMEStatusTransfer failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEStatusTransfer, s1AP_MMEStatusTransfer_p);
        return -1;
    }

    for (i = 0; i < s1AP_MMEStatusTransfer_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_MMEStatusTransfer_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_MMEStatusTransferIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEStatusTransfer, s1AP_MMEStatusTransfer_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_MMEStatusTransferIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEStatusTransfer, s1AP_MMEStatusTransfer_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_StatusTransfer_TransparentContainer:
            {
                S1AP_ENB_StatusTransfer_TransparentContainer_t *s1APENBStatusTransferTransparentContainer_p = &s1AP_MMEStatusTransferIEs->eNB_StatusTransfer_TransparentContainer;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer, (void **)&s1APENBStatusTransferTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APENBStatusTransferTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEStatusTransfer, s1AP_MMEStatusTransfer_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_mmestatustransferies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEStatusTransfer, s1AP_MMEStatusTransfer_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEStatusTransfer, s1AP_MMEStatusTransfer_p);
    return 0;
}

int s1ap_decode_s1ap_mmeconfigurationupdateies(
    S1AP_MMEConfigurationUpdateIEs_t *s1AP_MMEConfigurationUpdateIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_MMEConfigurationUpdate_t  s1AP_MMEConfigurationUpdate;
    S1AP_MMEConfigurationUpdate_t *s1AP_MMEConfigurationUpdate_p = &s1AP_MMEConfigurationUpdate;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationUpdateIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_MMEConfigurationUpdateIEs\n");

    memset(&s1AP_MMEConfigurationUpdate, 0, sizeof(S1AP_MMEConfigurationUpdate_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEConfigurationUpdate, (void **)&s1AP_MMEConfigurationUpdate_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_MMEConfigurationUpdate failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdate, s1AP_MMEConfigurationUpdate_p);
        return -1;
    }

    for (i = 0; i < s1AP_MMEConfigurationUpdate_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_MMEConfigurationUpdate_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_MMEname:
            {
                S1AP_MMEname_t *s1APMMEname_p = &s1AP_MMEConfigurationUpdateIEs->mmEname;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEname, (void **)&s1APMMEname_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMMEname failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdate, s1AP_MMEConfigurationUpdate_p);
                    return -1;
                }
                s1AP_MMEConfigurationUpdateIEs->presenceMask |= S1AP_MMECONFIGURATIONUPDATEIES_MMENAME_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_ServedGUMMEIs:
            {
                S1AP_ServedGUMMEIs_t *s1APServedGUMMEIs_p = &s1AP_MMEConfigurationUpdateIEs->servedGUMMEIs;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ServedGUMMEIs, (void **)&s1APServedGUMMEIs_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APServedGUMMEIs failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdate, s1AP_MMEConfigurationUpdate_p);
                    return -1;
                }
                s1AP_MMEConfigurationUpdateIEs->presenceMask |= S1AP_MMECONFIGURATIONUPDATEIES_SERVEDGUMMEIS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_RelativeMMECapacity:
            {
                S1AP_RelativeMMECapacity_t *s1APRelativeMMECapacity_p = &s1AP_MMEConfigurationUpdateIEs->relativeMMECapacity;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RelativeMMECapacity, (void **)&s1APRelativeMMECapacity_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRelativeMMECapacity failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdate, s1AP_MMEConfigurationUpdate_p);
                    return -1;
                }
                s1AP_MMEConfigurationUpdateIEs->presenceMask |= S1AP_MMECONFIGURATIONUPDATEIES_RELATIVEMMECAPACITY_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_mmeconfigurationupdateies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdate, s1AP_MMEConfigurationUpdate_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdate, s1AP_MMEConfigurationUpdate_p);
    return 0;
}

int s1ap_decode_s1ap_tracefailureindicationies(
    S1AP_TraceFailureIndicationIEs_t *s1AP_TraceFailureIndicationIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_TraceFailureIndication_t  s1AP_TraceFailureIndication;
    S1AP_TraceFailureIndication_t *s1AP_TraceFailureIndication_p = &s1AP_TraceFailureIndication;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_TraceFailureIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_TraceFailureIndicationIEs\n");

    memset(&s1AP_TraceFailureIndication, 0, sizeof(S1AP_TraceFailureIndication_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TraceFailureIndication, (void **)&s1AP_TraceFailureIndication_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_TraceFailureIndication failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceFailureIndication, s1AP_TraceFailureIndication_p);
        return -1;
    }

    for (i = 0; i < s1AP_TraceFailureIndication_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_TraceFailureIndication_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_TraceFailureIndicationIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceFailureIndication, s1AP_TraceFailureIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_TraceFailureIndicationIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceFailureIndication, s1AP_TraceFailureIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_UTRAN_Trace_ID:
            {
                S1AP_E_UTRAN_Trace_ID_t *s1APEUTRANTraceID_p = &s1AP_TraceFailureIndicationIEs->e_UTRAN_Trace_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_UTRAN_Trace_ID, (void **)&s1APEUTRANTraceID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APEUTRANTraceID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceFailureIndication, s1AP_TraceFailureIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_TraceFailureIndicationIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceFailureIndication, s1AP_TraceFailureIndication_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_tracefailureindicationies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceFailureIndication, s1AP_TraceFailureIndication_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceFailureIndication, s1AP_TraceFailureIndication_p);
    return 0;
}

int s1ap_decode_s1ap_enbconfigurationtransferies(
    S1AP_ENBConfigurationTransferIEs_t *s1AP_ENBConfigurationTransferIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ENBConfigurationTransfer_t  s1AP_ENBConfigurationTransfer;
    S1AP_ENBConfigurationTransfer_t *s1AP_ENBConfigurationTransfer_p = &s1AP_ENBConfigurationTransfer;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ENBConfigurationTransferIEs\n");

    memset(&s1AP_ENBConfigurationTransfer, 0, sizeof(S1AP_ENBConfigurationTransfer_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBConfigurationTransfer, (void **)&s1AP_ENBConfigurationTransfer_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ENBConfigurationTransfer failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationTransfer, s1AP_ENBConfigurationTransfer_p);
        return -1;
    }

    for (i = 0; i < s1AP_ENBConfigurationTransfer_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ENBConfigurationTransfer_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SONConfigurationTransferECT:
            {
                S1AP_SONConfigurationTransfer_t *s1APSONConfigurationTransfer_p = &s1AP_ENBConfigurationTransferIEs->sonConfigurationTransferECT;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SONConfigurationTransfer, (void **)&s1APSONConfigurationTransfer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSONConfigurationTransfer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationTransfer, s1AP_ENBConfigurationTransfer_p);
                    return -1;
                }
                s1AP_ENBConfigurationTransferIEs->presenceMask |= S1AP_ENBCONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERECT_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_enbconfigurationtransferies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationTransfer, s1AP_ENBConfigurationTransfer_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationTransfer, s1AP_ENBConfigurationTransfer_p);
    return 0;
}

int s1ap_decode_s1ap_downlinkueassociatedlppatransport_ies(
    S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_DownlinkUEAssociatedLPPaTransport_t  s1AP_DownlinkUEAssociatedLPPaTransport;
    S1AP_DownlinkUEAssociatedLPPaTransport_t *s1AP_DownlinkUEAssociatedLPPaTransport_p = &s1AP_DownlinkUEAssociatedLPPaTransport;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_DownlinkUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_DownlinkUEAssociatedLPPaTransport_IEs\n");

    memset(&s1AP_DownlinkUEAssociatedLPPaTransport, 0, sizeof(S1AP_DownlinkUEAssociatedLPPaTransport_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, (void **)&s1AP_DownlinkUEAssociatedLPPaTransport_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_DownlinkUEAssociatedLPPaTransport failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, s1AP_DownlinkUEAssociatedLPPaTransport_p);
        return -1;
    }

    for (i = 0; i < s1AP_DownlinkUEAssociatedLPPaTransport_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_DownlinkUEAssociatedLPPaTransport_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, s1AP_DownlinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, s1AP_DownlinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Routing_ID:
            {
                S1AP_Routing_ID_t *s1APRoutingID_p = &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->routing_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Routing_ID, (void **)&s1APRoutingID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRoutingID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, s1AP_DownlinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_LPPa_PDU:
            {
                S1AP_LPPa_PDU_t *s1APLPPaPDU_p = &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->lpPa_PDU;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LPPa_PDU, (void **)&s1APLPPaPDU_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APLPPaPDU failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, s1AP_DownlinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_downlinkueassociatedlppatransport_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, s1AP_DownlinkUEAssociatedLPPaTransport_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkUEAssociatedLPPaTransport, s1AP_DownlinkUEAssociatedLPPaTransport_p);
    return 0;
}

int s1ap_decode_s1ap_handoverfailureies(
    S1AP_HandoverFailureIEs_t *s1AP_HandoverFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverFailure_t  s1AP_HandoverFailure;
    S1AP_HandoverFailure_t *s1AP_HandoverFailure_p = &s1AP_HandoverFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverFailureIEs\n");

    memset(&s1AP_HandoverFailure, 0, sizeof(S1AP_HandoverFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverFailure, (void **)&s1AP_HandoverFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverFailure, s1AP_HandoverFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverFailureIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverFailure, s1AP_HandoverFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_HandoverFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverFailure, s1AP_HandoverFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_HandoverFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverFailure, s1AP_HandoverFailure_p);
                    return -1;
                }
                s1AP_HandoverFailureIEs->presenceMask |= S1AP_HANDOVERFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handoverfailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverFailure, s1AP_HandoverFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverFailure, s1AP_HandoverFailure_p);
    return 0;
}

int s1ap_decode_s1ap_uplinknastransport_ies(
    S1AP_UplinkNASTransport_IEs_t *s1AP_UplinkNASTransport_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UplinkNASTransport_t  s1AP_UplinkNASTransport;
    S1AP_UplinkNASTransport_t *s1AP_UplinkNASTransport_p = &s1AP_UplinkNASTransport;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UplinkNASTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UplinkNASTransport_IEs\n");

    memset(&s1AP_UplinkNASTransport, 0, sizeof(S1AP_UplinkNASTransport_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UplinkNASTransport, (void **)&s1AP_UplinkNASTransport_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UplinkNASTransport failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
        return -1;
    }

    for (i = 0; i < s1AP_UplinkNASTransport_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UplinkNASTransport_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UplinkNASTransport_IEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UplinkNASTransport_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_NAS_PDU:
            {
                S1AP_NAS_PDU_t *s1apnaspdu_p = &s1AP_UplinkNASTransport_IEs->nas_pdu;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_NAS_PDU, (void **)&s1apnaspdu_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apnaspdu failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_EUTRAN_CGI:
            {
                S1AP_EUTRAN_CGI_t *s1apeutrancgi_p = &s1AP_UplinkNASTransport_IEs->eutran_cgi;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_EUTRAN_CGI, (void **)&s1apeutrancgi_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apeutrancgi failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TAI:
            {
                S1AP_TAI_t *s1aptai_p = &s1AP_UplinkNASTransport_IEs->tai;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TAI, (void **)&s1aptai_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1aptai failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GW_TransportLayerAddress:
            {
                S1AP_TransportLayerAddress_t *s1APTransportLayerAddress_p = &s1AP_UplinkNASTransport_IEs->gW_TransportLayerAddress;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TransportLayerAddress, (void **)&s1APTransportLayerAddress_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTransportLayerAddress failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
                    return -1;
                }
                s1AP_UplinkNASTransport_IEs->presenceMask |= S1AP_UPLINKNASTRANSPORT_IES_GW_TRANSPORTLAYERADDRESS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknastransport_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNASTransport, s1AP_UplinkNASTransport_p);
    return 0;
}

int s1ap_decode_s1ap_s1setuprequesties(
    S1AP_S1SetupRequestIEs_t *s1AP_S1SetupRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_S1SetupRequest_t  s1AP_S1SetupRequest;
    S1AP_S1SetupRequest_t *s1AP_S1SetupRequest_p = &s1AP_S1SetupRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_S1SetupRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_S1SetupRequestIEs\n");

    memset(&s1AP_S1SetupRequest, 0, sizeof(S1AP_S1SetupRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_S1SetupRequest, (void **)&s1AP_S1SetupRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_S1SetupRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_S1SetupRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_S1SetupRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Global_ENB_ID:
            {
                S1AP_Global_ENB_ID_t *s1APGlobalENBID_p = &s1AP_S1SetupRequestIEs->global_ENB_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Global_ENB_ID, (void **)&s1APGlobalENBID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APGlobalENBID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_eNBname:
            {
                S1AP_ENBname_t *s1APENBname_p = &s1AP_S1SetupRequestIEs->eNBname;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBname, (void **)&s1APENBname_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APENBname failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
                    return -1;
                }
                s1AP_S1SetupRequestIEs->presenceMask |= S1AP_S1SETUPREQUESTIES_ENBNAME_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_SupportedTAs:
            {
                S1AP_SupportedTAs_t *s1APSupportedTAs_p = &s1AP_S1SetupRequestIEs->supportedTAs;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SupportedTAs, (void **)&s1APSupportedTAs_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSupportedTAs failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_DefaultPagingDRX:
            {
                S1AP_PagingDRX_t *s1APPagingDRX_p = &s1AP_S1SetupRequestIEs->defaultPagingDRX;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PagingDRX, (void **)&s1APPagingDRX_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APPagingDRX failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_IdList:
            {
                S1AP_CSG_IdList_t *s1APCSGIdList_p = &s1AP_S1SetupRequestIEs->csG_IdList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_IdList, (void **)&s1APCSGIdList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGIdList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
                    return -1;
                }
                s1AP_S1SetupRequestIEs->presenceMask |= S1AP_S1SETUPREQUESTIES_CSG_IDLIST_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_s1setuprequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupRequest, s1AP_S1SetupRequest_p);
    return 0;
}

int s1ap_decode_s1ap_enbconfigurationupdatefailureies(
    S1AP_ENBConfigurationUpdateFailureIEs_t *s1AP_ENBConfigurationUpdateFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ENBConfigurationUpdateFailure_t  s1AP_ENBConfigurationUpdateFailure;
    S1AP_ENBConfigurationUpdateFailure_t *s1AP_ENBConfigurationUpdateFailure_p = &s1AP_ENBConfigurationUpdateFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationUpdateFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ENBConfigurationUpdateFailureIEs\n");

    memset(&s1AP_ENBConfigurationUpdateFailure, 0, sizeof(S1AP_ENBConfigurationUpdateFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBConfigurationUpdateFailure, (void **)&s1AP_ENBConfigurationUpdateFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ENBConfigurationUpdateFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateFailure, s1AP_ENBConfigurationUpdateFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_ENBConfigurationUpdateFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ENBConfigurationUpdateFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_ENBConfigurationUpdateFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateFailure, s1AP_ENBConfigurationUpdateFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_TimeToWait:
            {
                S1AP_TimeToWait_t *s1APTimeToWait_p = &s1AP_ENBConfigurationUpdateFailureIEs->timeToWait;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TimeToWait, (void **)&s1APTimeToWait_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTimeToWait failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateFailure, s1AP_ENBConfigurationUpdateFailure_p);
                    return -1;
                }
                s1AP_ENBConfigurationUpdateFailureIEs->presenceMask |= S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_ENBConfigurationUpdateFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateFailure, s1AP_ENBConfigurationUpdateFailure_p);
                    return -1;
                }
                s1AP_ENBConfigurationUpdateFailureIEs->presenceMask |= S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_enbconfigurationupdatefailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateFailure, s1AP_ENBConfigurationUpdateFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateFailure, s1AP_ENBConfigurationUpdateFailure_p);
    return 0;
}

int s1ap_decode_s1ap_pathswitchrequesties(
    S1AP_PathSwitchRequestIEs_t *s1AP_PathSwitchRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_PathSwitchRequest_t  s1AP_PathSwitchRequest;
    S1AP_PathSwitchRequest_t *s1AP_PathSwitchRequest_p = &s1AP_PathSwitchRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_PathSwitchRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_PathSwitchRequestIEs\n");

    memset(&s1AP_PathSwitchRequest, 0, sizeof(S1AP_PathSwitchRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PathSwitchRequest, (void **)&s1AP_PathSwitchRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_PathSwitchRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_PathSwitchRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_PathSwitchRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_PathSwitchRequestIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedDLList:
            {
                S1AP_E_RABToBeSwitchedDLList_t *s1APERABToBeSwitchedDLList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSwitchedDLList, (void**)&s1APERABToBeSwitchedDLList_p);
                if (s1ap_decode_s1ap_e_rabtobeswitcheddllist(&s1AP_PathSwitchRequestIEs->e_RABToBeSwitchedDLList, s1APERABToBeSwitchedDLList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABToBeSwitchedDLList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedDLList, s1APERABToBeSwitchedDLList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedDLList, s1APERABToBeSwitchedDLList_p);
            } break;
            case S1AP_ProtocolIE_ID_id_SourceMME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_PathSwitchRequestIEs->sourceMME_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_EUTRAN_CGI:
            {
                S1AP_EUTRAN_CGI_t *s1apeutrancgi_p = &s1AP_PathSwitchRequestIEs->eutran_cgi;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_EUTRAN_CGI, (void **)&s1apeutrancgi_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apeutrancgi failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TAI:
            {
                S1AP_TAI_t *s1aptai_p = &s1AP_PathSwitchRequestIEs->tai;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TAI, (void **)&s1aptai_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1aptai failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_UESecurityCapabilities:
            {
                S1AP_UESecurityCapabilities_t *s1APUESecurityCapabilities_p = &s1AP_PathSwitchRequestIEs->ueSecurityCapabilities;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UESecurityCapabilities, (void **)&s1APUESecurityCapabilities_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUESecurityCapabilities failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_Id:
            {
                S1AP_CSG_Id_t *s1APCSGId_p = &s1AP_PathSwitchRequestIEs->csG_Id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_Id, (void **)&s1APCSGId_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGId failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
                s1AP_PathSwitchRequestIEs->presenceMask |= S1AP_PATHSWITCHREQUESTIES_CSG_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CellAccessMode:
            {
                S1AP_CellAccessMode_t *s1APCellAccessMode_p = &s1AP_PathSwitchRequestIEs->cellAccessMode;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CellAccessMode, (void **)&s1APCellAccessMode_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCellAccessMode failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
                s1AP_PathSwitchRequestIEs->presenceMask |= S1AP_PATHSWITCHREQUESTIES_CELLACCESSMODE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SourceMME_GUMMEI:
            {
                S1AP_GUMMEI_t *s1apgummei_p = &s1AP_PathSwitchRequestIEs->sourceMME_GUMMEI;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GUMMEI, (void **)&s1apgummei_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apgummei failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                    return -1;
                }
                s1AP_PathSwitchRequestIEs->presenceMask |= S1AP_PATHSWITCHREQUESTIES_SOURCEMME_GUMMEI_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_pathswitchrequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequest, s1AP_PathSwitchRequest_p);
    return 0;
}

int s1ap_decode_s1ap_reseties(
    S1AP_ResetIEs_t *s1AP_ResetIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_Reset_t  s1AP_Reset;
    S1AP_Reset_t *s1AP_Reset_p = &s1AP_Reset;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ResetIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ResetIEs\n");

    memset(&s1AP_Reset, 0, sizeof(S1AP_Reset_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Reset, (void **)&s1AP_Reset_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_Reset failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Reset, s1AP_Reset_p);
        return -1;
    }

    for (i = 0; i < s1AP_Reset_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_Reset_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_ResetIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Reset, s1AP_Reset_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_ResetType:
            {
                S1AP_ResetType_t *s1APResetType_p = &s1AP_ResetIEs->resetType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ResetType, (void **)&s1APResetType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APResetType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Reset, s1AP_Reset_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_reseties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Reset, s1AP_Reset_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Reset, s1AP_Reset_p);
    return 0;
}

int s1ap_decode_s1ap_uecontextreleaserequest_ies(
    S1AP_UEContextReleaseRequest_IEs_t *s1AP_UEContextReleaseRequest_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UEContextReleaseRequest_t  s1AP_UEContextReleaseRequest;
    S1AP_UEContextReleaseRequest_t *s1AP_UEContextReleaseRequest_p = &s1AP_UEContextReleaseRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UEContextReleaseRequest_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UEContextReleaseRequest_IEs\n");

    memset(&s1AP_UEContextReleaseRequest, 0, sizeof(S1AP_UEContextReleaseRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEContextReleaseRequest, (void **)&s1AP_UEContextReleaseRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UEContextReleaseRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseRequest, s1AP_UEContextReleaseRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_UEContextReleaseRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UEContextReleaseRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UEContextReleaseRequest_IEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseRequest, s1AP_UEContextReleaseRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UEContextReleaseRequest_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseRequest, s1AP_UEContextReleaseRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_UEContextReleaseRequest_IEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseRequest, s1AP_UEContextReleaseRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GWContextReleaseIndication:
            {
                S1AP_GWContextReleaseIndication_t *s1APGWContextReleaseIndication_p = &s1AP_UEContextReleaseRequest_IEs->gwContextReleaseIndication;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GWContextReleaseIndication, (void **)&s1APGWContextReleaseIndication_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APGWContextReleaseIndication failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseRequest, s1AP_UEContextReleaseRequest_p);
                    return -1;
                }
                s1AP_UEContextReleaseRequest_IEs->presenceMask |= S1AP_UECONTEXTRELEASEREQUEST_IES_GWCONTEXTRELEASEINDICATION_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uecontextreleaserequest_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseRequest, s1AP_UEContextReleaseRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextReleaseRequest, s1AP_UEContextReleaseRequest_p);
    return 0;
}

int s1ap_decode_s1ap_downlinknonueassociatedlppatransport_ies(
    S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_DownlinkNonUEAssociatedLPPaTransport_t  s1AP_DownlinkNonUEAssociatedLPPaTransport;
    S1AP_DownlinkNonUEAssociatedLPPaTransport_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_p = &s1AP_DownlinkNonUEAssociatedLPPaTransport;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs\n");

    memset(&s1AP_DownlinkNonUEAssociatedLPPaTransport, 0, sizeof(S1AP_DownlinkNonUEAssociatedLPPaTransport_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_DownlinkNonUEAssociatedLPPaTransport, (void **)&s1AP_DownlinkNonUEAssociatedLPPaTransport_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_DownlinkNonUEAssociatedLPPaTransport failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNonUEAssociatedLPPaTransport, s1AP_DownlinkNonUEAssociatedLPPaTransport_p);
        return -1;
    }

    for (i = 0; i < s1AP_DownlinkNonUEAssociatedLPPaTransport_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_DownlinkNonUEAssociatedLPPaTransport_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Routing_ID:
            {
                S1AP_Routing_ID_t *s1APRoutingID_p = &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->routing_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Routing_ID, (void **)&s1APRoutingID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRoutingID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNonUEAssociatedLPPaTransport, s1AP_DownlinkNonUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_LPPa_PDU:
            {
                S1AP_LPPa_PDU_t *s1APLPPaPDU_p = &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LPPa_PDU, (void **)&s1APLPPaPDU_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APLPPaPDU failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNonUEAssociatedLPPaTransport, s1AP_DownlinkNonUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_downlinknonueassociatedlppatransport_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNonUEAssociatedLPPaTransport, s1AP_DownlinkNonUEAssociatedLPPaTransport_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNonUEAssociatedLPPaTransport, s1AP_DownlinkNonUEAssociatedLPPaTransport_p);
    return 0;
}

int s1ap_decode_s1ap_pagingies(
    S1AP_PagingIEs_t *s1AP_PagingIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_Paging_t  s1AP_Paging;
    S1AP_Paging_t *s1AP_Paging_p = &s1AP_Paging;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_PagingIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_PagingIEs\n");

    memset(&s1AP_Paging, 0, sizeof(S1AP_Paging_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Paging, (void **)&s1AP_Paging_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_Paging failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
        return -1;
    }

    for (i = 0; i < s1AP_Paging_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_Paging_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_UEIdentityIndexValue:
            {
                S1AP_UEIdentityIndexValue_t *s1APUEIdentityIndexValue_p = &s1AP_PagingIEs->ueIdentityIndexValue;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEIdentityIndexValue, (void **)&s1APUEIdentityIndexValue_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEIdentityIndexValue failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_UEPagingID:
            {
                S1AP_UEPagingID_t *s1APUEPagingID_p = &s1AP_PagingIEs->uePagingID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEPagingID, (void **)&s1APUEPagingID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEPagingID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_pagingDRX:
            {
                S1AP_PagingDRX_t *s1APPagingDRX_p = &s1AP_PagingIEs->pagingDRX;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PagingDRX, (void **)&s1APPagingDRX_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APPagingDRX failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                    return -1;
                }
                s1AP_PagingIEs->presenceMask |= S1AP_PAGINGIES_PAGINGDRX_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_CNDomain:
            {
                S1AP_CNDomain_t *s1APCNDomain_p = &s1AP_PagingIEs->cnDomain;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CNDomain, (void **)&s1APCNDomain_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCNDomain failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TAIList:
            {
                S1AP_TAIList_t *s1APTAIList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_TAIList, (void**)&s1APTAIList_p);
                if (s1ap_decode_s1ap_tailist(&s1AP_PagingIEs->taiList, s1APTAIList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APTAIList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_TAIList, s1APTAIList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_TAIList, s1APTAIList_p);
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_IdList:
            {
                S1AP_CSG_IdList_t *s1APCSGIdList_p = &s1AP_PagingIEs->csG_IdList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_IdList, (void **)&s1APCSGIdList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGIdList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                    return -1;
                }
                s1AP_PagingIEs->presenceMask |= S1AP_PAGINGIES_CSG_IDLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_PagingPriority:
            {
                S1AP_PagingPriority_t *s1APPagingPriority_p = &s1AP_PagingIEs->pagingPriority;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PagingPriority, (void **)&s1APPagingPriority_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APPagingPriority failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                    return -1;
                }
                s1AP_PagingIEs->presenceMask |= S1AP_PAGINGIES_PAGINGPRIORITY_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_pagingies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Paging, s1AP_Paging_p);
    return 0;
}

int s1ap_decode_s1ap_enbconfigurationupdateacknowledgeies(
    S1AP_ENBConfigurationUpdateAcknowledgeIEs_t *s1AP_ENBConfigurationUpdateAcknowledgeIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ENBConfigurationUpdateAcknowledge_t  s1AP_ENBConfigurationUpdateAcknowledge;
    S1AP_ENBConfigurationUpdateAcknowledge_t *s1AP_ENBConfigurationUpdateAcknowledge_p = &s1AP_ENBConfigurationUpdateAcknowledge;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationUpdateAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ENBConfigurationUpdateAcknowledgeIEs\n");

    memset(&s1AP_ENBConfigurationUpdateAcknowledge, 0, sizeof(S1AP_ENBConfigurationUpdateAcknowledge_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBConfigurationUpdateAcknowledge, (void **)&s1AP_ENBConfigurationUpdateAcknowledge_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ENBConfigurationUpdateAcknowledge failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateAcknowledge, s1AP_ENBConfigurationUpdateAcknowledge_p);
        return -1;
    }

    for (i = 0; i < s1AP_ENBConfigurationUpdateAcknowledge_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ENBConfigurationUpdateAcknowledge_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_ENBConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateAcknowledge, s1AP_ENBConfigurationUpdateAcknowledge_p);
                    return -1;
                }
                s1AP_ENBConfigurationUpdateAcknowledgeIEs->presenceMask |= S1AP_ENBCONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_enbconfigurationupdateacknowledgeies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateAcknowledge, s1AP_ENBConfigurationUpdateAcknowledge_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdateAcknowledge, s1AP_ENBConfigurationUpdateAcknowledge_p);
    return 0;
}

int s1ap_decode_s1ap_handovernotifyies(
    S1AP_HandoverNotifyIEs_t *s1AP_HandoverNotifyIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverNotify_t  s1AP_HandoverNotify;
    S1AP_HandoverNotify_t *s1AP_HandoverNotify_p = &s1AP_HandoverNotify;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverNotifyIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverNotifyIEs\n");

    memset(&s1AP_HandoverNotify, 0, sizeof(S1AP_HandoverNotify_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverNotify, (void **)&s1AP_HandoverNotify_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverNotify failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverNotify, s1AP_HandoverNotify_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverNotify_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverNotify_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverNotifyIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverNotify, s1AP_HandoverNotify_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_HandoverNotifyIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverNotify, s1AP_HandoverNotify_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_EUTRAN_CGI:
            {
                S1AP_EUTRAN_CGI_t *s1apeutrancgi_p = &s1AP_HandoverNotifyIEs->eutran_cgi;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_EUTRAN_CGI, (void **)&s1apeutrancgi_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apeutrancgi failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverNotify, s1AP_HandoverNotify_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TAI:
            {
                S1AP_TAI_t *s1aptai_p = &s1AP_HandoverNotifyIEs->tai;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TAI, (void **)&s1aptai_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1aptai failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverNotify, s1AP_HandoverNotify_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handovernotifyies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverNotify, s1AP_HandoverNotify_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverNotify, s1AP_HandoverNotify_p);
    return 0;
}

int s1ap_decode_s1ap_handovercancelacknowledgeies(
    S1AP_HandoverCancelAcknowledgeIEs_t *s1AP_HandoverCancelAcknowledgeIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverCancelAcknowledge_t  s1AP_HandoverCancelAcknowledge;
    S1AP_HandoverCancelAcknowledge_t *s1AP_HandoverCancelAcknowledge_p = &s1AP_HandoverCancelAcknowledge;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverCancelAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverCancelAcknowledgeIEs\n");

    memset(&s1AP_HandoverCancelAcknowledge, 0, sizeof(S1AP_HandoverCancelAcknowledge_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverCancelAcknowledge, (void **)&s1AP_HandoverCancelAcknowledge_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverCancelAcknowledge failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancelAcknowledge, s1AP_HandoverCancelAcknowledge_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverCancelAcknowledge_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverCancelAcknowledge_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverCancelAcknowledgeIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancelAcknowledge, s1AP_HandoverCancelAcknowledge_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_HandoverCancelAcknowledgeIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancelAcknowledge, s1AP_HandoverCancelAcknowledge_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_HandoverCancelAcknowledgeIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancelAcknowledge, s1AP_HandoverCancelAcknowledge_p);
                    return -1;
                }
                s1AP_HandoverCancelAcknowledgeIEs->presenceMask |= S1AP_HANDOVERCANCELACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handovercancelacknowledgeies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancelAcknowledge, s1AP_HandoverCancelAcknowledge_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancelAcknowledge, s1AP_HandoverCancelAcknowledge_p);
    return 0;
}

int s1ap_decode_s1ap_handovercommandies(
    S1AP_HandoverCommandIEs_t *s1AP_HandoverCommandIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverCommand_t  s1AP_HandoverCommand;
    S1AP_HandoverCommand_t *s1AP_HandoverCommand_p = &s1AP_HandoverCommand;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverCommandIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverCommandIEs\n");

    memset(&s1AP_HandoverCommand, 0, sizeof(S1AP_HandoverCommand_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverCommand, (void **)&s1AP_HandoverCommand_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverCommand failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverCommand_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverCommand_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverCommandIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_HandoverCommandIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_HandoverType:
            {
                S1AP_HandoverType_t *s1APHandoverType_p = &s1AP_HandoverCommandIEs->handoverType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverType, (void **)&s1APHandoverType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APHandoverType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABSubjecttoDataForwardingList:
            {
                S1AP_E_RABSubjecttoDataForwardingList_t *s1APERABSubjecttoDataForwardingList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, (void**)&s1APERABSubjecttoDataForwardingList_p);
                if (s1ap_decode_s1ap_e_rabsubjecttodataforwardinglist(&s1AP_HandoverCommandIEs->e_RABSubjecttoDataForwardingList, s1APERABSubjecttoDataForwardingList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABSubjecttoDataForwardingList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, s1APERABSubjecttoDataForwardingList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, s1APERABSubjecttoDataForwardingList_p);
                s1AP_HandoverCommandIEs->presenceMask |= S1AP_HANDOVERCOMMANDIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABtoReleaseListHOCmd:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_HandoverCommandIEs->e_RABtoReleaseListHOCmd, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                s1AP_HandoverCommandIEs->presenceMask |= S1AP_HANDOVERCOMMANDIES_E_RABTORELEASELISTHOCMD_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer:
            {
                S1AP_Target_ToSource_TransparentContainer_t *s1APTargetToSourceTransparentContainer_p = &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Target_ToSource_TransparentContainer, (void **)&s1APTargetToSourceTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTargetToSourceTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer_Secondary:
            {
                S1AP_Target_ToSource_TransparentContainer_t *s1APTargetToSourceTransparentContainer_p = &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer_Secondary;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Target_ToSource_TransparentContainer, (void **)&s1APTargetToSourceTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTargetToSourceTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
                s1AP_HandoverCommandIEs->presenceMask |= S1AP_HANDOVERCOMMANDIES_TARGET_TOSOURCE_TRANSPARENTCONTAINER_SECONDARY_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_HandoverCommandIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                    return -1;
                }
                s1AP_HandoverCommandIEs->presenceMask |= S1AP_HANDOVERCOMMANDIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handovercommandies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCommand, s1AP_HandoverCommand_p);
    return 0;
}

int s1ap_decode_s1ap_writereplacewarningresponseies(
    S1AP_WriteReplaceWarningResponseIEs_t *s1AP_WriteReplaceWarningResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_WriteReplaceWarningResponse_t  s1AP_WriteReplaceWarningResponse;
    S1AP_WriteReplaceWarningResponse_t *s1AP_WriteReplaceWarningResponse_p = &s1AP_WriteReplaceWarningResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_WriteReplaceWarningResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_WriteReplaceWarningResponseIEs\n");

    memset(&s1AP_WriteReplaceWarningResponse, 0, sizeof(S1AP_WriteReplaceWarningResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_WriteReplaceWarningResponse, (void **)&s1AP_WriteReplaceWarningResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_WriteReplaceWarningResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningResponse, s1AP_WriteReplaceWarningResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_WriteReplaceWarningResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_WriteReplaceWarningResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MessageIdentifier:
            {
                S1AP_MessageIdentifier_t *s1APMessageIdentifier_p = &s1AP_WriteReplaceWarningResponseIEs->messageIdentifier;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MessageIdentifier, (void **)&s1APMessageIdentifier_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMessageIdentifier failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningResponse, s1AP_WriteReplaceWarningResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_SerialNumber:
            {
                S1AP_SerialNumber_t *s1APSerialNumber_p = &s1AP_WriteReplaceWarningResponseIEs->serialNumber;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SerialNumber, (void **)&s1APSerialNumber_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSerialNumber failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningResponse, s1AP_WriteReplaceWarningResponse_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_BroadcastCompletedAreaList:
            {
                S1AP_BroadcastCompletedAreaList_t *s1APBroadcastCompletedAreaList_p = &s1AP_WriteReplaceWarningResponseIEs->broadcastCompletedAreaList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_BroadcastCompletedAreaList, (void **)&s1APBroadcastCompletedAreaList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APBroadcastCompletedAreaList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningResponse, s1AP_WriteReplaceWarningResponse_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningResponseIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGRESPONSEIES_BROADCASTCOMPLETEDAREALIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_WriteReplaceWarningResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningResponse, s1AP_WriteReplaceWarningResponse_p);
                    return -1;
                }
                s1AP_WriteReplaceWarningResponseIEs->presenceMask |= S1AP_WRITEREPLACEWARNINGRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_writereplacewarningresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningResponse, s1AP_WriteReplaceWarningResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WriteReplaceWarningResponse, s1AP_WriteReplaceWarningResponse_p);
    return 0;
}

int s1ap_decode_s1ap_handovercancelies(
    S1AP_HandoverCancelIEs_t *s1AP_HandoverCancelIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverCancel_t  s1AP_HandoverCancel;
    S1AP_HandoverCancel_t *s1AP_HandoverCancel_p = &s1AP_HandoverCancel;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverCancelIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverCancelIEs\n");

    memset(&s1AP_HandoverCancel, 0, sizeof(S1AP_HandoverCancel_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverCancel, (void **)&s1AP_HandoverCancel_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverCancel failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancel, s1AP_HandoverCancel_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverCancel_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverCancel_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverCancelIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancel, s1AP_HandoverCancel_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_HandoverCancelIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancel, s1AP_HandoverCancel_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_HandoverCancelIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancel, s1AP_HandoverCancel_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handovercancelies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancel, s1AP_HandoverCancel_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverCancel, s1AP_HandoverCancel_p);
    return 0;
}

int s1ap_decode_s1ap_handoverpreparationfailureies(
    S1AP_HandoverPreparationFailureIEs_t *s1AP_HandoverPreparationFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverPreparationFailure_t  s1AP_HandoverPreparationFailure;
    S1AP_HandoverPreparationFailure_t *s1AP_HandoverPreparationFailure_p = &s1AP_HandoverPreparationFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverPreparationFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverPreparationFailureIEs\n");

    memset(&s1AP_HandoverPreparationFailure, 0, sizeof(S1AP_HandoverPreparationFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverPreparationFailure, (void **)&s1AP_HandoverPreparationFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverPreparationFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverPreparationFailure, s1AP_HandoverPreparationFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverPreparationFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverPreparationFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverPreparationFailureIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverPreparationFailure, s1AP_HandoverPreparationFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_HandoverPreparationFailureIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverPreparationFailure, s1AP_HandoverPreparationFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_HandoverPreparationFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverPreparationFailure, s1AP_HandoverPreparationFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_HandoverPreparationFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverPreparationFailure, s1AP_HandoverPreparationFailure_p);
                    return -1;
                }
                s1AP_HandoverPreparationFailureIEs->presenceMask |= S1AP_HANDOVERPREPARATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handoverpreparationfailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverPreparationFailure, s1AP_HandoverPreparationFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverPreparationFailure, s1AP_HandoverPreparationFailure_p);
    return 0;
}

int s1ap_decode_s1ap_e_rabmodifyrequesties(
    S1AP_E_RABModifyRequestIEs_t *s1AP_E_RABModifyRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_E_RABModifyRequest_t  s1AP_E_RABModifyRequest;
    S1AP_E_RABModifyRequest_t *s1AP_E_RABModifyRequest_p = &s1AP_E_RABModifyRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_E_RABModifyRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_E_RABModifyRequestIEs\n");

    memset(&s1AP_E_RABModifyRequest, 0, sizeof(S1AP_E_RABModifyRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_RABModifyRequest, (void **)&s1AP_E_RABModifyRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_E_RABModifyRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyRequest, s1AP_E_RABModifyRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_E_RABModifyRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_E_RABModifyRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_E_RABModifyRequestIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyRequest, s1AP_E_RABModifyRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_E_RABModifyRequestIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyRequest, s1AP_E_RABModifyRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate:
            {
                S1AP_UEAggregateMaximumBitrate_t *s1APUEAggregateMaximumBitrate_p = &s1AP_E_RABModifyRequestIEs->uEaggregateMaximumBitrate;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEAggregateMaximumBitrate, (void **)&s1APUEAggregateMaximumBitrate_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEAggregateMaximumBitrate failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyRequest, s1AP_E_RABModifyRequest_p);
                    return -1;
                }
                s1AP_E_RABModifyRequestIEs->presenceMask |= S1AP_E_RABMODIFYREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABToBeModifiedListBearerModReq:
            {
                S1AP_E_RABToBeModifiedListBearerModReq_t *s1APERABToBeModifiedListBearerModReq_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeModifiedListBearerModReq, (void**)&s1APERABToBeModifiedListBearerModReq_p);
                if (s1ap_decode_s1ap_e_rabtobemodifiedlistbearermodreq(&s1AP_E_RABModifyRequestIEs->e_RABToBeModifiedListBearerModReq, s1APERABToBeModifiedListBearerModReq_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABToBeModifiedListBearerModReq failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeModifiedListBearerModReq, s1APERABToBeModifiedListBearerModReq_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyRequest, s1AP_E_RABModifyRequest_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeModifiedListBearerModReq, s1APERABToBeModifiedListBearerModReq_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_e_rabmodifyrequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyRequest, s1AP_E_RABModifyRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyRequest, s1AP_E_RABModifyRequest_p);
    return 0;
}

int s1ap_decode_s1ap_handoverrequestacknowledgeies(
    S1AP_HandoverRequestAcknowledgeIEs_t *s1AP_HandoverRequestAcknowledgeIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverRequestAcknowledge_t  s1AP_HandoverRequestAcknowledge;
    S1AP_HandoverRequestAcknowledge_t *s1AP_HandoverRequestAcknowledge_p = &s1AP_HandoverRequestAcknowledge;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverRequestAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverRequestAcknowledgeIEs\n");

    memset(&s1AP_HandoverRequestAcknowledge, 0, sizeof(S1AP_HandoverRequestAcknowledge_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverRequestAcknowledge, (void **)&s1AP_HandoverRequestAcknowledge_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverRequestAcknowledge failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverRequestAcknowledge_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverRequestAcknowledge_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverRequestAcknowledgeIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_HandoverRequestAcknowledgeIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABAdmittedList:
            {
                S1AP_E_RABAdmittedList_t *s1APERABAdmittedList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABAdmittedList, (void**)&s1APERABAdmittedList_p);
                if (s1ap_decode_s1ap_e_rabadmittedlist(&s1AP_HandoverRequestAcknowledgeIEs->e_RABAdmittedList, s1APERABAdmittedList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABAdmittedList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABAdmittedList, s1APERABAdmittedList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABAdmittedList, s1APERABAdmittedList_p);
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListHOReqAck:
            {
                S1AP_E_RABFailedtoSetupListHOReqAck_t *s1APERABFailedtoSetupListHOReqAck_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABFailedtoSetupListHOReqAck, (void**)&s1APERABFailedtoSetupListHOReqAck_p);
                if (s1ap_decode_s1ap_e_rabfailedtosetuplisthoreqack(&s1AP_HandoverRequestAcknowledgeIEs->e_RABFailedToSetupListHOReqAck, s1APERABFailedtoSetupListHOReqAck_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABFailedtoSetupListHOReqAck failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABFailedtoSetupListHOReqAck, s1APERABFailedtoSetupListHOReqAck_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABFailedtoSetupListHOReqAck, s1APERABFailedtoSetupListHOReqAck_p);
                s1AP_HandoverRequestAcknowledgeIEs->presenceMask |= S1AP_HANDOVERREQUESTACKNOWLEDGEIES_E_RABFAILEDTOSETUPLISTHOREQACK_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer:
            {
                S1AP_Target_ToSource_TransparentContainer_t *s1APTargetToSourceTransparentContainer_p = &s1AP_HandoverRequestAcknowledgeIEs->target_ToSource_TransparentContainer;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Target_ToSource_TransparentContainer, (void **)&s1APTargetToSourceTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTargetToSourceTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_Id:
            {
                S1AP_CSG_Id_t *s1APCSGId_p = &s1AP_HandoverRequestAcknowledgeIEs->csG_Id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_Id, (void **)&s1APCSGId_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGId failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                    return -1;
                }
                s1AP_HandoverRequestAcknowledgeIEs->presenceMask |= S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CSG_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_HandoverRequestAcknowledgeIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                    return -1;
                }
                s1AP_HandoverRequestAcknowledgeIEs->presenceMask |= S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handoverrequestacknowledgeies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequestAcknowledge, s1AP_HandoverRequestAcknowledge_p);
    return 0;
}

int s1ap_decode_s1ap_downlinknastransport_ies(
    S1AP_DownlinkNASTransport_IEs_t *s1AP_DownlinkNASTransport_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_DownlinkNASTransport_t  s1AP_DownlinkNASTransport;
    S1AP_DownlinkNASTransport_t *s1AP_DownlinkNASTransport_p = &s1AP_DownlinkNASTransport;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_DownlinkNASTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_DownlinkNASTransport_IEs\n");

    memset(&s1AP_DownlinkNASTransport, 0, sizeof(S1AP_DownlinkNASTransport_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_DownlinkNASTransport, (void **)&s1AP_DownlinkNASTransport_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_DownlinkNASTransport failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
        return -1;
    }

    for (i = 0; i < s1AP_DownlinkNASTransport_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_DownlinkNASTransport_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_DownlinkNASTransport_IEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_DownlinkNASTransport_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_NAS_PDU:
            {
                S1AP_NAS_PDU_t *s1apnaspdu_p = &s1AP_DownlinkNASTransport_IEs->nas_pdu;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_NAS_PDU, (void **)&s1apnaspdu_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apnaspdu failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_HandoverRestrictionList:
            {
                S1AP_HandoverRestrictionList_t *s1APHandoverRestrictionList_p = &s1AP_DownlinkNASTransport_IEs->handoverRestrictionList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverRestrictionList, (void **)&s1APHandoverRestrictionList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APHandoverRestrictionList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
                    return -1;
                }
                s1AP_DownlinkNASTransport_IEs->presenceMask |= S1AP_DOWNLINKNASTRANSPORT_IES_HANDOVERRESTRICTIONLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SubscriberProfileIDforRFP:
            {
                S1AP_SubscriberProfileIDforRFP_t *s1APSubscriberProfileIDforRFP_p = &s1AP_DownlinkNASTransport_IEs->subscriberProfileIDforRFP;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SubscriberProfileIDforRFP, (void **)&s1APSubscriberProfileIDforRFP_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSubscriberProfileIDforRFP failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
                    return -1;
                }
                s1AP_DownlinkNASTransport_IEs->presenceMask |= S1AP_DOWNLINKNASTRANSPORT_IES_SUBSCRIBERPROFILEIDFORRFP_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_downlinknastransport_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkNASTransport, s1AP_DownlinkNASTransport_p);
    return 0;
}

int s1ap_decode_s1ap_e_rabreleaseindicationies(
    S1AP_E_RABReleaseIndicationIEs_t *s1AP_E_RABReleaseIndicationIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_E_RABReleaseIndication_t  s1AP_E_RABReleaseIndication;
    S1AP_E_RABReleaseIndication_t *s1AP_E_RABReleaseIndication_p = &s1AP_E_RABReleaseIndication;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_E_RABReleaseIndicationIEs\n");

    memset(&s1AP_E_RABReleaseIndication, 0, sizeof(S1AP_E_RABReleaseIndication_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_RABReleaseIndication, (void **)&s1AP_E_RABReleaseIndication_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_E_RABReleaseIndication failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseIndication, s1AP_E_RABReleaseIndication_p);
        return -1;
    }

    for (i = 0; i < s1AP_E_RABReleaseIndication_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_E_RABReleaseIndication_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_E_RABReleaseIndicationIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseIndication, s1AP_E_RABReleaseIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_E_RABReleaseIndicationIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseIndication, s1AP_E_RABReleaseIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABReleasedList:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_E_RABReleaseIndicationIEs->e_RABReleasedList, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseIndication, s1AP_E_RABReleaseIndication_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_e_rabreleaseindicationies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseIndication, s1AP_E_RABReleaseIndication_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseIndication, s1AP_E_RABReleaseIndication_p);
    return 0;
}

int s1ap_decode_s1ap_pathswitchrequestacknowledgeies(
    S1AP_PathSwitchRequestAcknowledgeIEs_t *s1AP_PathSwitchRequestAcknowledgeIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_PathSwitchRequestAcknowledge_t  s1AP_PathSwitchRequestAcknowledge;
    S1AP_PathSwitchRequestAcknowledge_t *s1AP_PathSwitchRequestAcknowledge_p = &s1AP_PathSwitchRequestAcknowledge;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_PathSwitchRequestAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_PathSwitchRequestAcknowledgeIEs\n");

    memset(&s1AP_PathSwitchRequestAcknowledge, 0, sizeof(S1AP_PathSwitchRequestAcknowledge_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PathSwitchRequestAcknowledge, (void **)&s1AP_PathSwitchRequestAcknowledge_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_PathSwitchRequestAcknowledge failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
        return -1;
    }

    for (i = 0; i < s1AP_PathSwitchRequestAcknowledge_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_PathSwitchRequestAcknowledge_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_PathSwitchRequestAcknowledgeIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate:
            {
                S1AP_UEAggregateMaximumBitrate_t *s1APUEAggregateMaximumBitrate_p = &s1AP_PathSwitchRequestAcknowledgeIEs->uEaggregateMaximumBitrate;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEAggregateMaximumBitrate, (void **)&s1APUEAggregateMaximumBitrate_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEAggregateMaximumBitrate failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
                s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask |= S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedULList:
            {
                S1AP_E_RABToBeSwitchedULList_t *s1APERABToBeSwitchedULList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSwitchedULList, (void**)&s1APERABToBeSwitchedULList_p);
                if (s1ap_decode_s1ap_e_rabtobeswitchedullist(&s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeSwitchedULList, s1APERABToBeSwitchedULList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABToBeSwitchedULList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedULList, s1APERABToBeSwitchedULList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedULList, s1APERABToBeSwitchedULList_p);
                s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask |= S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBESWITCHEDULLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABToBeReleasedList:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeReleasedList, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask |= S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBERELEASEDLIST_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_SecurityContext:
            {
                S1AP_SecurityContext_t *s1APSecurityContext_p = &s1AP_PathSwitchRequestAcknowledgeIEs->securityContext;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SecurityContext, (void **)&s1APSecurityContext_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSecurityContext failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_PathSwitchRequestAcknowledgeIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
                s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask |= S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID_2:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id_2;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                    return -1;
                }
                s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask |= S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_MME_UE_S1AP_ID_2_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_pathswitchrequestacknowledgeies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestAcknowledge, s1AP_PathSwitchRequestAcknowledge_p);
    return 0;
}

int s1ap_decode_s1ap_nasnondeliveryindication_ies(
    S1AP_NASNonDeliveryIndication_IEs_t *s1AP_NASNonDeliveryIndication_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_NASNonDeliveryIndication_t  s1AP_NASNonDeliveryIndication;
    S1AP_NASNonDeliveryIndication_t *s1AP_NASNonDeliveryIndication_p = &s1AP_NASNonDeliveryIndication;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_NASNonDeliveryIndication_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_NASNonDeliveryIndication_IEs\n");

    memset(&s1AP_NASNonDeliveryIndication, 0, sizeof(S1AP_NASNonDeliveryIndication_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_NASNonDeliveryIndication, (void **)&s1AP_NASNonDeliveryIndication_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_NASNonDeliveryIndication failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NASNonDeliveryIndication, s1AP_NASNonDeliveryIndication_p);
        return -1;
    }

    for (i = 0; i < s1AP_NASNonDeliveryIndication_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_NASNonDeliveryIndication_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_NASNonDeliveryIndication_IEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NASNonDeliveryIndication, s1AP_NASNonDeliveryIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_NASNonDeliveryIndication_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NASNonDeliveryIndication, s1AP_NASNonDeliveryIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_NAS_PDU:
            {
                S1AP_NAS_PDU_t *s1apnaspdu_p = &s1AP_NASNonDeliveryIndication_IEs->nas_pdu;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_NAS_PDU, (void **)&s1apnaspdu_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apnaspdu failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NASNonDeliveryIndication, s1AP_NASNonDeliveryIndication_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_NASNonDeliveryIndication_IEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NASNonDeliveryIndication, s1AP_NASNonDeliveryIndication_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_nasnondeliveryindication_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NASNonDeliveryIndication, s1AP_NASNonDeliveryIndication_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NASNonDeliveryIndication, s1AP_NASNonDeliveryIndication_p);
    return 0;
}

int s1ap_decode_s1ap_initialcontextsetuprequesties(
    S1AP_InitialContextSetupRequestIEs_t *s1AP_InitialContextSetupRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_InitialContextSetupRequest_t  s1AP_InitialContextSetupRequest;
    S1AP_InitialContextSetupRequest_t *s1AP_InitialContextSetupRequest_p = &s1AP_InitialContextSetupRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_InitialContextSetupRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_InitialContextSetupRequestIEs\n");

    memset(&s1AP_InitialContextSetupRequest, 0, sizeof(S1AP_InitialContextSetupRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_InitialContextSetupRequest, (void **)&s1AP_InitialContextSetupRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_InitialContextSetupRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_InitialContextSetupRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_InitialContextSetupRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_InitialContextSetupRequestIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate:
            {
                S1AP_UEAggregateMaximumBitrate_t *s1APUEAggregateMaximumBitrate_p = &s1AP_InitialContextSetupRequestIEs->uEaggregateMaximumBitrate;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEAggregateMaximumBitrate, (void **)&s1APUEAggregateMaximumBitrate_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEAggregateMaximumBitrate failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABToBeSetupListCtxtSUReq:
            {
                S1AP_E_RABToBeSetupListCtxtSUReq_t *s1APERABToBeSetupListCtxtSUReq_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSetupListCtxtSUReq, (void**)&s1APERABToBeSetupListCtxtSUReq_p);
                if (s1ap_decode_s1ap_e_rabtobesetuplistctxtsureq(&s1AP_InitialContextSetupRequestIEs->e_RABToBeSetupListCtxtSUReq, s1APERABToBeSetupListCtxtSUReq_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABToBeSetupListCtxtSUReq failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupListCtxtSUReq, s1APERABToBeSetupListCtxtSUReq_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupListCtxtSUReq, s1APERABToBeSetupListCtxtSUReq_p);
            } break;
            case S1AP_ProtocolIE_ID_id_UESecurityCapabilities:
            {
                S1AP_UESecurityCapabilities_t *s1APUESecurityCapabilities_p = &s1AP_InitialContextSetupRequestIEs->ueSecurityCapabilities;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UESecurityCapabilities, (void **)&s1APUESecurityCapabilities_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUESecurityCapabilities failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_SecurityKey:
            {
                S1AP_SecurityKey_t *s1APSecurityKey_p = &s1AP_InitialContextSetupRequestIEs->securityKey;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SecurityKey, (void **)&s1APSecurityKey_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSecurityKey failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_TraceActivation:
            {
                S1AP_TraceActivation_t *s1APTraceActivation_p = &s1AP_InitialContextSetupRequestIEs->traceActivation;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TraceActivation, (void **)&s1APTraceActivation_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTraceActivation failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_TRACEACTIVATION_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_HandoverRestrictionList:
            {
                S1AP_HandoverRestrictionList_t *s1APHandoverRestrictionList_p = &s1AP_InitialContextSetupRequestIEs->handoverRestrictionList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverRestrictionList, (void **)&s1APHandoverRestrictionList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APHandoverRestrictionList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_UERadioCapability:
            {
                S1AP_UERadioCapability_t *s1APUERadioCapability_p = &s1AP_InitialContextSetupRequestIEs->ueRadioCapability;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UERadioCapability, (void **)&s1APUERadioCapability_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUERadioCapability failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_UERADIOCAPABILITY_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SubscriberProfileIDforRFP:
            {
                S1AP_SubscriberProfileIDforRFP_t *s1APSubscriberProfileIDforRFP_p = &s1AP_InitialContextSetupRequestIEs->subscriberProfileIDforRFP;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SubscriberProfileIDforRFP, (void **)&s1APSubscriberProfileIDforRFP_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSubscriberProfileIDforRFP failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSFallbackIndicator:
            {
                S1AP_CSFallbackIndicator_t *s1APCSFallbackIndicator_p = &s1AP_InitialContextSetupRequestIEs->csFallbackIndicator;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSFallbackIndicator, (void **)&s1APCSFallbackIndicator_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSFallbackIndicator failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_CSFALLBACKINDICATOR_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SRVCCOperationPossible:
            {
                S1AP_SRVCCOperationPossible_t *s1APSRVCCOperationPossible_p = &s1AP_InitialContextSetupRequestIEs->srvccOperationPossible;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SRVCCOperationPossible, (void **)&s1APSRVCCOperationPossible_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSRVCCOperationPossible failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSGMembershipStatus:
            {
                S1AP_CSGMembershipStatus_t *s1APCSGMembershipStatus_p = &s1AP_InitialContextSetupRequestIEs->csgMembershipStatus;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSGMembershipStatus, (void **)&s1APCSGMembershipStatus_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGMembershipStatus failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_RegisteredLAI:
            {
                S1AP_LAI_t *s1aplai_p = &s1AP_InitialContextSetupRequestIEs->registeredLAI;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LAI, (void **)&s1aplai_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1aplai failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_REGISTEREDLAI_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GUMMEI_ID:
            {
                S1AP_GUMMEI_t *s1apgummei_p = &s1AP_InitialContextSetupRequestIEs->gummei_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GUMMEI, (void **)&s1apgummei_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apgummei failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_GUMMEI_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID_2:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id_2;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_MME_UE_S1AP_ID_2_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_ManagementBasedMDTAllowed:
            {
                S1AP_ManagementBasedMDTAllowed_t *s1APManagementBasedMDTAllowed_p = &s1AP_InitialContextSetupRequestIEs->managementBasedMDTAllowed;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ManagementBasedMDTAllowed, (void **)&s1APManagementBasedMDTAllowed_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APManagementBasedMDTAllowed failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                    return -1;
                }
                s1AP_InitialContextSetupRequestIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_initialcontextsetuprequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupRequest, s1AP_InitialContextSetupRequest_p);
    return 0;
}

int s1ap_decode_s1ap_s1setupresponseies(
    S1AP_S1SetupResponseIEs_t *s1AP_S1SetupResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_S1SetupResponse_t  s1AP_S1SetupResponse;
    S1AP_S1SetupResponse_t *s1AP_S1SetupResponse_p = &s1AP_S1SetupResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_S1SetupResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_S1SetupResponseIEs\n");

    memset(&s1AP_S1SetupResponse, 0, sizeof(S1AP_S1SetupResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_S1SetupResponse, (void **)&s1AP_S1SetupResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_S1SetupResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_S1SetupResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_S1SetupResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_MMEname:
            {
                S1AP_MMEname_t *s1APMMEname_p = &s1AP_S1SetupResponseIEs->mmEname;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEname, (void **)&s1APMMEname_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMMEname failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
                    return -1;
                }
                s1AP_S1SetupResponseIEs->presenceMask |= S1AP_S1SETUPRESPONSEIES_MMENAME_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_ServedGUMMEIs:
            {
                S1AP_ServedGUMMEIs_t *s1APServedGUMMEIs_p = &s1AP_S1SetupResponseIEs->servedGUMMEIs;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ServedGUMMEIs, (void **)&s1APServedGUMMEIs_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APServedGUMMEIs failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_RelativeMMECapacity:
            {
                S1AP_RelativeMMECapacity_t *s1APRelativeMMECapacity_p = &s1AP_S1SetupResponseIEs->relativeMMECapacity;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RelativeMMECapacity, (void **)&s1APRelativeMMECapacity_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRelativeMMECapacity failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_MMERelaySupportIndicator:
            {
                S1AP_MMERelaySupportIndicator_t *s1APMMERelaySupportIndicator_p = &s1AP_S1SetupResponseIEs->mmeRelaySupportIndicator;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMERelaySupportIndicator, (void **)&s1APMMERelaySupportIndicator_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMMERelaySupportIndicator failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
                    return -1;
                }
                s1AP_S1SetupResponseIEs->presenceMask |= S1AP_S1SETUPRESPONSEIES_MMERELAYSUPPORTINDICATOR_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_S1SetupResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
                    return -1;
                }
                s1AP_S1SetupResponseIEs->presenceMask |= S1AP_S1SETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_s1setupresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupResponse, s1AP_S1SetupResponse_p);
    return 0;
}

int s1ap_decode_s1ap_mmeconfigurationupdatefailureies(
    S1AP_MMEConfigurationUpdateFailureIEs_t *s1AP_MMEConfigurationUpdateFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_MMEConfigurationUpdateFailure_t  s1AP_MMEConfigurationUpdateFailure;
    S1AP_MMEConfigurationUpdateFailure_t *s1AP_MMEConfigurationUpdateFailure_p = &s1AP_MMEConfigurationUpdateFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationUpdateFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_MMEConfigurationUpdateFailureIEs\n");

    memset(&s1AP_MMEConfigurationUpdateFailure, 0, sizeof(S1AP_MMEConfigurationUpdateFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEConfigurationUpdateFailure, (void **)&s1AP_MMEConfigurationUpdateFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_MMEConfigurationUpdateFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateFailure, s1AP_MMEConfigurationUpdateFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_MMEConfigurationUpdateFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_MMEConfigurationUpdateFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_MMEConfigurationUpdateFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateFailure, s1AP_MMEConfigurationUpdateFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_TimeToWait:
            {
                S1AP_TimeToWait_t *s1APTimeToWait_p = &s1AP_MMEConfigurationUpdateFailureIEs->timeToWait;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TimeToWait, (void **)&s1APTimeToWait_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTimeToWait failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateFailure, s1AP_MMEConfigurationUpdateFailure_p);
                    return -1;
                }
                s1AP_MMEConfigurationUpdateFailureIEs->presenceMask |= S1AP_MMECONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_MMEConfigurationUpdateFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateFailure, s1AP_MMEConfigurationUpdateFailure_p);
                    return -1;
                }
                s1AP_MMEConfigurationUpdateFailureIEs->presenceMask |= S1AP_MMECONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_mmeconfigurationupdatefailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateFailure, s1AP_MMEConfigurationUpdateFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateFailure, s1AP_MMEConfigurationUpdateFailure_p);
    return 0;
}

int s1ap_decode_s1ap_initialcontextsetupresponseies(
    S1AP_InitialContextSetupResponseIEs_t *s1AP_InitialContextSetupResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_InitialContextSetupResponse_t  s1AP_InitialContextSetupResponse;
    S1AP_InitialContextSetupResponse_t *s1AP_InitialContextSetupResponse_p = &s1AP_InitialContextSetupResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_InitialContextSetupResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_InitialContextSetupResponseIEs\n");

    memset(&s1AP_InitialContextSetupResponse, 0, sizeof(S1AP_InitialContextSetupResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_InitialContextSetupResponse, (void **)&s1AP_InitialContextSetupResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_InitialContextSetupResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_InitialContextSetupResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_InitialContextSetupResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_InitialContextSetupResponseIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_InitialContextSetupResponseIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABSetupListCtxtSURes:
            {
                S1AP_E_RABSetupListCtxtSURes_t *s1APERABSetupListCtxtSURes_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABSetupListCtxtSURes, (void**)&s1APERABSetupListCtxtSURes_p);
                if (s1ap_decode_s1ap_e_rabsetuplistctxtsures(&s1AP_InitialContextSetupResponseIEs->e_RABSetupListCtxtSURes, s1APERABSetupListCtxtSURes_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABSetupListCtxtSURes failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupListCtxtSURes, s1APERABSetupListCtxtSURes_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupListCtxtSURes, s1APERABSetupListCtxtSURes_p);
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListCtxtSURes:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_InitialContextSetupResponseIEs->e_RABFailedToSetupListCtxtSURes, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                s1AP_InitialContextSetupResponseIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTCTXTSURES_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_InitialContextSetupResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
                    return -1;
                }
                s1AP_InitialContextSetupResponseIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_initialcontextsetupresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupResponse, s1AP_InitialContextSetupResponse_p);
    return 0;
}

int s1ap_decode_s1ap_enbconfigurationupdateies(
    S1AP_ENBConfigurationUpdateIEs_t *s1AP_ENBConfigurationUpdateIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ENBConfigurationUpdate_t  s1AP_ENBConfigurationUpdate;
    S1AP_ENBConfigurationUpdate_t *s1AP_ENBConfigurationUpdate_p = &s1AP_ENBConfigurationUpdate;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationUpdateIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ENBConfigurationUpdateIEs\n");

    memset(&s1AP_ENBConfigurationUpdate, 0, sizeof(S1AP_ENBConfigurationUpdate_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBConfigurationUpdate, (void **)&s1AP_ENBConfigurationUpdate_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ENBConfigurationUpdate failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdate, s1AP_ENBConfigurationUpdate_p);
        return -1;
    }

    for (i = 0; i < s1AP_ENBConfigurationUpdate_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ENBConfigurationUpdate_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_eNBname:
            {
                S1AP_ENBname_t *s1APENBname_p = &s1AP_ENBConfigurationUpdateIEs->eNBname;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBname, (void **)&s1APENBname_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APENBname failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdate, s1AP_ENBConfigurationUpdate_p);
                    return -1;
                }
                s1AP_ENBConfigurationUpdateIEs->presenceMask |= S1AP_ENBCONFIGURATIONUPDATEIES_ENBNAME_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SupportedTAs:
            {
                S1AP_SupportedTAs_t *s1APSupportedTAs_p = &s1AP_ENBConfigurationUpdateIEs->supportedTAs;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SupportedTAs, (void **)&s1APSupportedTAs_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSupportedTAs failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdate, s1AP_ENBConfigurationUpdate_p);
                    return -1;
                }
                s1AP_ENBConfigurationUpdateIEs->presenceMask |= S1AP_ENBCONFIGURATIONUPDATEIES_SUPPORTEDTAS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_IdList:
            {
                S1AP_CSG_IdList_t *s1APCSGIdList_p = &s1AP_ENBConfigurationUpdateIEs->csG_IdList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_IdList, (void **)&s1APCSGIdList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGIdList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdate, s1AP_ENBConfigurationUpdate_p);
                    return -1;
                }
                s1AP_ENBConfigurationUpdateIEs->presenceMask |= S1AP_ENBCONFIGURATIONUPDATEIES_CSG_IDLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_DefaultPagingDRX:
            {
                S1AP_PagingDRX_t *s1APPagingDRX_p = &s1AP_ENBConfigurationUpdateIEs->defaultPagingDRX;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PagingDRX, (void **)&s1APPagingDRX_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APPagingDRX failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdate, s1AP_ENBConfigurationUpdate_p);
                    return -1;
                }
                s1AP_ENBConfigurationUpdateIEs->presenceMask |= S1AP_ENBCONFIGURATIONUPDATEIES_DEFAULTPAGINGDRX_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_enbconfigurationupdateies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdate, s1AP_ENBConfigurationUpdate_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBConfigurationUpdate, s1AP_ENBConfigurationUpdate_p);
    return 0;
}

int s1ap_decode_s1ap_locationreporties(
    S1AP_LocationReportIEs_t *s1AP_LocationReportIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_LocationReport_t  s1AP_LocationReport;
    S1AP_LocationReport_t *s1AP_LocationReport_p = &s1AP_LocationReport;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_LocationReportIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_LocationReportIEs\n");

    memset(&s1AP_LocationReport, 0, sizeof(S1AP_LocationReport_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LocationReport, (void **)&s1AP_LocationReport_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_LocationReport failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
        return -1;
    }

    for (i = 0; i < s1AP_LocationReport_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_LocationReport_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_LocationReportIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_LocationReportIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_EUTRAN_CGI:
            {
                S1AP_EUTRAN_CGI_t *s1apeutrancgi_p = &s1AP_LocationReportIEs->eutran_cgi;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_EUTRAN_CGI, (void **)&s1apeutrancgi_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apeutrancgi failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TAI:
            {
                S1AP_TAI_t *s1aptai_p = &s1AP_LocationReportIEs->tai;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TAI, (void **)&s1aptai_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1aptai failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_RequestType:
            {
                S1AP_RequestType_t *s1APRequestType_p = &s1AP_LocationReportIEs->requestType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RequestType, (void **)&s1APRequestType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRequestType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_locationreporties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LocationReport, s1AP_LocationReport_p);
    return 0;
}

int s1ap_decode_s1ap_uplinkueassociatedlppatransport_ies(
    S1AP_UplinkUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UplinkUEAssociatedLPPaTransport_t  s1AP_UplinkUEAssociatedLPPaTransport;
    S1AP_UplinkUEAssociatedLPPaTransport_t *s1AP_UplinkUEAssociatedLPPaTransport_p = &s1AP_UplinkUEAssociatedLPPaTransport;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UplinkUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UplinkUEAssociatedLPPaTransport_IEs\n");

    memset(&s1AP_UplinkUEAssociatedLPPaTransport, 0, sizeof(S1AP_UplinkUEAssociatedLPPaTransport_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, (void **)&s1AP_UplinkUEAssociatedLPPaTransport_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UplinkUEAssociatedLPPaTransport failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, s1AP_UplinkUEAssociatedLPPaTransport_p);
        return -1;
    }

    for (i = 0; i < s1AP_UplinkUEAssociatedLPPaTransport_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UplinkUEAssociatedLPPaTransport_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UplinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, s1AP_UplinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UplinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, s1AP_UplinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Routing_ID:
            {
                S1AP_Routing_ID_t *s1APRoutingID_p = &s1AP_UplinkUEAssociatedLPPaTransport_IEs->routing_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Routing_ID, (void **)&s1APRoutingID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRoutingID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, s1AP_UplinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_LPPa_PDU:
            {
                S1AP_LPPa_PDU_t *s1APLPPaPDU_p = &s1AP_UplinkUEAssociatedLPPaTransport_IEs->lpPa_PDU;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LPPa_PDU, (void **)&s1APLPPaPDU_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APLPPaPDU failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, s1AP_UplinkUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinkueassociatedlppatransport_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, s1AP_UplinkUEAssociatedLPPaTransport_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkUEAssociatedLPPaTransport, s1AP_UplinkUEAssociatedLPPaTransport_p);
    return 0;
}

int s1ap_decode_s1ap_uecontextmodificationresponseies(
    S1AP_UEContextModificationResponseIEs_t *s1AP_UEContextModificationResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UEContextModificationResponse_t  s1AP_UEContextModificationResponse;
    S1AP_UEContextModificationResponse_t *s1AP_UEContextModificationResponse_p = &s1AP_UEContextModificationResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UEContextModificationResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UEContextModificationResponseIEs\n");

    memset(&s1AP_UEContextModificationResponse, 0, sizeof(S1AP_UEContextModificationResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEContextModificationResponse, (void **)&s1AP_UEContextModificationResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UEContextModificationResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationResponse, s1AP_UEContextModificationResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_UEContextModificationResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UEContextModificationResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UEContextModificationResponseIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationResponse, s1AP_UEContextModificationResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UEContextModificationResponseIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationResponse, s1AP_UEContextModificationResponse_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_UEContextModificationResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationResponse, s1AP_UEContextModificationResponse_p);
                    return -1;
                }
                s1AP_UEContextModificationResponseIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uecontextmodificationresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationResponse, s1AP_UEContextModificationResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationResponse, s1AP_UEContextModificationResponse_p);
    return 0;
}

int s1ap_decode_s1ap_e_rabreleaseresponseies(
    S1AP_E_RABReleaseResponseIEs_t *s1AP_E_RABReleaseResponseIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_E_RABReleaseResponse_t  s1AP_E_RABReleaseResponse;
    S1AP_E_RABReleaseResponse_t *s1AP_E_RABReleaseResponse_p = &s1AP_E_RABReleaseResponse;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_E_RABReleaseResponseIEs\n");

    memset(&s1AP_E_RABReleaseResponse, 0, sizeof(S1AP_E_RABReleaseResponse_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_RABReleaseResponse, (void **)&s1AP_E_RABReleaseResponse_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_E_RABReleaseResponse failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
        return -1;
    }

    for (i = 0; i < s1AP_E_RABReleaseResponse_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_E_RABReleaseResponse_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_E_RABReleaseResponseIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_E_RABReleaseResponseIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABReleaseListBearerRelComp:
            {
                S1AP_E_RABReleaseListBearerRelComp_t *s1APERABReleaseListBearerRelComp_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABReleaseListBearerRelComp, (void**)&s1APERABReleaseListBearerRelComp_p);
                if (s1ap_decode_s1ap_e_rabreleaselistbearerrelcomp(&s1AP_E_RABReleaseResponseIEs->e_RABReleaseListBearerRelComp, s1APERABReleaseListBearerRelComp_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABReleaseListBearerRelComp failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABReleaseListBearerRelComp, s1APERABReleaseListBearerRelComp_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABReleaseListBearerRelComp, s1APERABReleaseListBearerRelComp_p);
                s1AP_E_RABReleaseResponseIEs->presenceMask |= S1AP_E_RABRELEASERESPONSEIES_E_RABRELEASELISTBEARERRELCOMP_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABFailedToReleaseList:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_E_RABReleaseResponseIEs->e_RABFailedToReleaseList, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                s1AP_E_RABReleaseResponseIEs->presenceMask |= S1AP_E_RABRELEASERESPONSEIES_E_RABFAILEDTORELEASELIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_E_RABReleaseResponseIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
                    return -1;
                }
                s1AP_E_RABReleaseResponseIEs->presenceMask |= S1AP_E_RABRELEASERESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_e_rabreleaseresponseies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseResponse, s1AP_E_RABReleaseResponse_p);
    return 0;
}

int s1ap_decode_s1ap_handoverrequesties(
    S1AP_HandoverRequestIEs_t *s1AP_HandoverRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverRequest_t  s1AP_HandoverRequest;
    S1AP_HandoverRequest_t *s1AP_HandoverRequest_p = &s1AP_HandoverRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverRequestIEs\n");

    memset(&s1AP_HandoverRequest, 0, sizeof(S1AP_HandoverRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverRequest, (void **)&s1AP_HandoverRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverRequestIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_HandoverType:
            {
                S1AP_HandoverType_t *s1APHandoverType_p = &s1AP_HandoverRequestIEs->handoverType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverType, (void **)&s1APHandoverType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APHandoverType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_HandoverRequestIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate:
            {
                S1AP_UEAggregateMaximumBitrate_t *s1APUEAggregateMaximumBitrate_p = &s1AP_HandoverRequestIEs->uEaggregateMaximumBitrate;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEAggregateMaximumBitrate, (void **)&s1APUEAggregateMaximumBitrate_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEAggregateMaximumBitrate failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABToBeSetupListHOReq:
            {
                S1AP_E_RABToBeSetupListHOReq_t *s1APERABToBeSetupListHOReq_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSetupListHOReq, (void**)&s1APERABToBeSetupListHOReq_p);
                if (s1ap_decode_s1ap_e_rabtobesetuplisthoreq(&s1AP_HandoverRequestIEs->e_RABToBeSetupListHOReq, s1APERABToBeSetupListHOReq_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABToBeSetupListHOReq failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupListHOReq, s1APERABToBeSetupListHOReq_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupListHOReq, s1APERABToBeSetupListHOReq_p);
            } break;
            case S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer:
            {
                S1AP_Source_ToTarget_TransparentContainer_t *s1APSourceToTargetTransparentContainer_p = &s1AP_HandoverRequestIEs->source_ToTarget_TransparentContainer;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Source_ToTarget_TransparentContainer, (void **)&s1APSourceToTargetTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSourceToTargetTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_UESecurityCapabilities:
            {
                S1AP_UESecurityCapabilities_t *s1APUESecurityCapabilities_p = &s1AP_HandoverRequestIEs->ueSecurityCapabilities;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UESecurityCapabilities, (void **)&s1APUESecurityCapabilities_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUESecurityCapabilities failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_HandoverRestrictionList:
            {
                S1AP_HandoverRestrictionList_t *s1APHandoverRestrictionList_p = &s1AP_HandoverRequestIEs->handoverRestrictionList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverRestrictionList, (void **)&s1APHandoverRestrictionList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APHandoverRestrictionList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_TraceActivation:
            {
                S1AP_TraceActivation_t *s1APTraceActivation_p = &s1AP_HandoverRequestIEs->traceActivation;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TraceActivation, (void **)&s1APTraceActivation_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTraceActivation failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_TRACEACTIVATION_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_RequestType:
            {
                S1AP_RequestType_t *s1APRequestType_p = &s1AP_HandoverRequestIEs->requestType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RequestType, (void **)&s1APRequestType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRequestType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_REQUESTTYPE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SRVCCOperationPossible:
            {
                S1AP_SRVCCOperationPossible_t *s1APSRVCCOperationPossible_p = &s1AP_HandoverRequestIEs->srvccOperationPossible;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SRVCCOperationPossible, (void **)&s1APSRVCCOperationPossible_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSRVCCOperationPossible failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_SecurityContext:
            {
                S1AP_SecurityContext_t *s1APSecurityContext_p = &s1AP_HandoverRequestIEs->securityContext;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SecurityContext, (void **)&s1APSecurityContext_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSecurityContext failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_Id:
            {
                S1AP_CSG_Id_t *s1APCSGId_p = &s1AP_HandoverRequestIEs->csG_Id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_Id, (void **)&s1APCSGId_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGId failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_CSG_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSGMembershipStatus:
            {
                S1AP_CSGMembershipStatus_t *s1APCSGMembershipStatus_p = &s1AP_HandoverRequestIEs->csgMembershipStatus;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSGMembershipStatus, (void **)&s1APCSGMembershipStatus_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGMembershipStatus failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GUMMEI_ID:
            {
                S1AP_GUMMEI_t *s1apgummei_p = &s1AP_HandoverRequestIEs->gummei_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GUMMEI, (void **)&s1apgummei_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apgummei failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_GUMMEI_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID_2:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverRequestIEs->mme_ue_s1ap_id_2;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_MME_UE_S1AP_ID_2_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_ManagementBasedMDTAllowed:
            {
                S1AP_ManagementBasedMDTAllowed_t *s1APManagementBasedMDTAllowed_p = &s1AP_HandoverRequestIEs->managementBasedMDTAllowed;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ManagementBasedMDTAllowed, (void **)&s1APManagementBasedMDTAllowed_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APManagementBasedMDTAllowed failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                    return -1;
                }
                s1AP_HandoverRequestIEs->presenceMask |= S1AP_HANDOVERREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handoverrequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequest, s1AP_HandoverRequest_p);
    return 0;
}

int s1ap_decode_s1ap_handoverrequiredies(
    S1AP_HandoverRequiredIEs_t *s1AP_HandoverRequiredIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_HandoverRequired_t  s1AP_HandoverRequired;
    S1AP_HandoverRequired_t *s1AP_HandoverRequired_p = &s1AP_HandoverRequired;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_HandoverRequiredIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_HandoverRequiredIEs\n");

    memset(&s1AP_HandoverRequired, 0, sizeof(S1AP_HandoverRequired_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverRequired, (void **)&s1AP_HandoverRequired_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_HandoverRequired failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
        return -1;
    }

    for (i = 0; i < s1AP_HandoverRequired_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_HandoverRequired_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_HandoverRequiredIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_HandoverRequiredIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_HandoverType:
            {
                S1AP_HandoverType_t *s1APHandoverType_p = &s1AP_HandoverRequiredIEs->handoverType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_HandoverType, (void **)&s1APHandoverType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APHandoverType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_HandoverRequiredIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TargetID:
            {
                S1AP_TargetID_t *s1APTargetID_p = &s1AP_HandoverRequiredIEs->targetID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TargetID, (void **)&s1APTargetID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTargetID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_Direct_Forwarding_Path_Availability:
            {
                S1AP_Direct_Forwarding_Path_Availability_t *s1APDirectForwardingPathAvailability_p = &s1AP_HandoverRequiredIEs->direct_Forwarding_Path_Availability;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Direct_Forwarding_Path_Availability, (void **)&s1APDirectForwardingPathAvailability_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APDirectForwardingPathAvailability failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_DIRECT_FORWARDING_PATH_AVAILABILITY_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_SRVCCHOIndication:
            {
                S1AP_SRVCCHOIndication_t *s1APSRVCCHOIndication_p = &s1AP_HandoverRequiredIEs->srvcchoIndication;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SRVCCHOIndication, (void **)&s1APSRVCCHOIndication_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSRVCCHOIndication failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_SRVCCHOINDICATION_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer:
            {
                S1AP_Source_ToTarget_TransparentContainer_t *s1APSourceToTargetTransparentContainer_p = &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Source_ToTarget_TransparentContainer, (void **)&s1APSourceToTargetTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSourceToTargetTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer_Secondary:
            {
                S1AP_Source_ToTarget_TransparentContainer_t *s1APSourceToTargetTransparentContainer_p = &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer_Secondary;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Source_ToTarget_TransparentContainer, (void **)&s1APSourceToTargetTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSourceToTargetTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_SOURCE_TOTARGET_TRANSPARENTCONTAINER_SECONDARY_PRESENT;
            } break;
            /* Conditional field */
            case S1AP_ProtocolIE_ID_id_MSClassmark2:
            {
                S1AP_MSClassmark2_t *s1APMSClassmark2_p = &s1AP_HandoverRequiredIEs->msClassmark2;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MSClassmark2, (void **)&s1APMSClassmark2_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMSClassmark2 failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_MSCLASSMARK2_PRESENT;
            } break;
            /* Conditional field */
            case S1AP_ProtocolIE_ID_id_MSClassmark3:
            {
                S1AP_MSClassmark3_t *s1APMSClassmark3_p = &s1AP_HandoverRequiredIEs->msClassmark3;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MSClassmark3, (void **)&s1APMSClassmark3_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMSClassmark3 failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_MSCLASSMARK3_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_Id:
            {
                S1AP_CSG_Id_t *s1APCSGId_p = &s1AP_HandoverRequiredIEs->csG_Id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_Id, (void **)&s1APCSGId_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGId failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_CSG_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CellAccessMode:
            {
                S1AP_CellAccessMode_t *s1APCellAccessMode_p = &s1AP_HandoverRequiredIEs->cellAccessMode;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CellAccessMode, (void **)&s1APCellAccessMode_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCellAccessMode failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_CELLACCESSMODE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_PS_ServiceNotAvailable:
            {
                S1AP_PS_ServiceNotAvailable_t *s1APPSServiceNotAvailable_p = &s1AP_HandoverRequiredIEs->pS_ServiceNotAvailable;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PS_ServiceNotAvailable, (void **)&s1APPSServiceNotAvailable_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APPSServiceNotAvailable failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                    return -1;
                }
                s1AP_HandoverRequiredIEs->presenceMask |= S1AP_HANDOVERREQUIREDIES_PS_SERVICENOTAVAILABLE_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_handoverrequiredies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRequired, s1AP_HandoverRequired_p);
    return 0;
}

int s1ap_decode_s1ap_mmeconfigurationupdateacknowledgeies(
    S1AP_MMEConfigurationUpdateAcknowledgeIEs_t *s1AP_MMEConfigurationUpdateAcknowledgeIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_MMEConfigurationUpdateAcknowledge_t  s1AP_MMEConfigurationUpdateAcknowledge;
    S1AP_MMEConfigurationUpdateAcknowledge_t *s1AP_MMEConfigurationUpdateAcknowledge_p = &s1AP_MMEConfigurationUpdateAcknowledge;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationUpdateAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_MMEConfigurationUpdateAcknowledgeIEs\n");

    memset(&s1AP_MMEConfigurationUpdateAcknowledge, 0, sizeof(S1AP_MMEConfigurationUpdateAcknowledge_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEConfigurationUpdateAcknowledge, (void **)&s1AP_MMEConfigurationUpdateAcknowledge_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_MMEConfigurationUpdateAcknowledge failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateAcknowledge, s1AP_MMEConfigurationUpdateAcknowledge_p);
        return -1;
    }

    for (i = 0; i < s1AP_MMEConfigurationUpdateAcknowledge_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_MMEConfigurationUpdateAcknowledge_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_MMEConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateAcknowledge, s1AP_MMEConfigurationUpdateAcknowledge_p);
                    return -1;
                }
                s1AP_MMEConfigurationUpdateAcknowledgeIEs->presenceMask |= S1AP_MMECONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_mmeconfigurationupdateacknowledgeies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateAcknowledge, s1AP_MMEConfigurationUpdateAcknowledge_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEConfigurationUpdateAcknowledge, s1AP_MMEConfigurationUpdateAcknowledge_p);
    return 0;
}

int s1ap_decode_s1ap_initialuemessage_ies(
    S1AP_InitialUEMessage_IEs_t *s1AP_InitialUEMessage_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_InitialUEMessage_t  s1AP_InitialUEMessage;
    S1AP_InitialUEMessage_t *s1AP_InitialUEMessage_p = &s1AP_InitialUEMessage;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_InitialUEMessage_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_InitialUEMessage_IEs\n");

    memset(&s1AP_InitialUEMessage, 0, sizeof(S1AP_InitialUEMessage_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_InitialUEMessage, (void **)&s1AP_InitialUEMessage_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_InitialUEMessage failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
        return -1;
    }

    for (i = 0; i < s1AP_InitialUEMessage_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_InitialUEMessage_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_InitialUEMessage_IEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_NAS_PDU:
            {
                S1AP_NAS_PDU_t *s1apnaspdu_p = &s1AP_InitialUEMessage_IEs->nas_pdu;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_NAS_PDU, (void **)&s1apnaspdu_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apnaspdu failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TAI:
            {
                S1AP_TAI_t *s1aptai_p = &s1AP_InitialUEMessage_IEs->tai;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TAI, (void **)&s1aptai_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1aptai failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_EUTRAN_CGI:
            {
                S1AP_EUTRAN_CGI_t *s1apeutrancgi_p = &s1AP_InitialUEMessage_IEs->eutran_cgi;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_EUTRAN_CGI, (void **)&s1apeutrancgi_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apeutrancgi failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_RRC_Establishment_Cause:
            {
                S1AP_RRC_Establishment_Cause_t *s1APRRCEstablishmentCause_p = &s1AP_InitialUEMessage_IEs->rrC_Establishment_Cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RRC_Establishment_Cause, (void **)&s1APRRCEstablishmentCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRRCEstablishmentCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_S_TMSI:
            {
                S1AP_S_TMSI_t *s1apstmsi_p = &s1AP_InitialUEMessage_IEs->s_tmsi;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_S_TMSI, (void **)&s1apstmsi_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apstmsi failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
                s1AP_InitialUEMessage_IEs->presenceMask |= S1AP_INITIALUEMESSAGE_IES_S_TMSI_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CSG_Id:
            {
                S1AP_CSG_Id_t *s1APCSGId_p = &s1AP_InitialUEMessage_IEs->csG_Id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CSG_Id, (void **)&s1APCSGId_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCSGId failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
                s1AP_InitialUEMessage_IEs->presenceMask |= S1AP_INITIALUEMESSAGE_IES_CSG_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GUMMEI_ID:
            {
                S1AP_GUMMEI_t *s1apgummei_p = &s1AP_InitialUEMessage_IEs->gummei_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GUMMEI, (void **)&s1apgummei_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apgummei failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
                s1AP_InitialUEMessage_IEs->presenceMask |= S1AP_INITIALUEMESSAGE_IES_GUMMEI_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CellAccessMode:
            {
                S1AP_CellAccessMode_t *s1APCellAccessMode_p = &s1AP_InitialUEMessage_IEs->cellAccessMode;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CellAccessMode, (void **)&s1APCellAccessMode_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCellAccessMode failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
                s1AP_InitialUEMessage_IEs->presenceMask |= S1AP_INITIALUEMESSAGE_IES_CELLACCESSMODE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GW_TransportLayerAddress:
            {
                S1AP_TransportLayerAddress_t *s1APTransportLayerAddress_p = &s1AP_InitialUEMessage_IEs->gW_TransportLayerAddress;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TransportLayerAddress, (void **)&s1APTransportLayerAddress_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTransportLayerAddress failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
                s1AP_InitialUEMessage_IEs->presenceMask |= S1AP_INITIALUEMESSAGE_IES_GW_TRANSPORTLAYERADDRESS_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_RelayNode_Indicator:
            {
                S1AP_RelayNode_Indicator_t *s1APRelayNodeIndicator_p = &s1AP_InitialUEMessage_IEs->relayNode_Indicator;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_RelayNode_Indicator, (void **)&s1APRelayNodeIndicator_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRelayNodeIndicator failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
                s1AP_InitialUEMessage_IEs->presenceMask |= S1AP_INITIALUEMESSAGE_IES_RELAYNODE_INDICATOR_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GUMMEIType:
            {
                S1AP_GUMMEIType_t *s1APGUMMEIType_p = &s1AP_InitialUEMessage_IEs->gummeiType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GUMMEIType, (void **)&s1APGUMMEIType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APGUMMEIType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                    return -1;
                }
                s1AP_InitialUEMessage_IEs->presenceMask |= S1AP_INITIALUEMESSAGE_IES_GUMMEITYPE_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_initialuemessage_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialUEMessage, s1AP_InitialUEMessage_p);
    return 0;
}

int s1ap_decode_s1ap_celltraffictraceies(
    S1AP_CellTrafficTraceIEs_t *s1AP_CellTrafficTraceIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_CellTrafficTrace_t  s1AP_CellTrafficTrace;
    S1AP_CellTrafficTrace_t *s1AP_CellTrafficTrace_p = &s1AP_CellTrafficTrace;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_CellTrafficTraceIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_CellTrafficTraceIEs\n");

    memset(&s1AP_CellTrafficTrace, 0, sizeof(S1AP_CellTrafficTrace_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CellTrafficTrace, (void **)&s1AP_CellTrafficTrace_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_CellTrafficTrace failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
        return -1;
    }

    for (i = 0; i < s1AP_CellTrafficTrace_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_CellTrafficTrace_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_CellTrafficTraceIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_CellTrafficTraceIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_UTRAN_Trace_ID:
            {
                S1AP_E_UTRAN_Trace_ID_t *s1APEUTRANTraceID_p = &s1AP_CellTrafficTraceIEs->e_UTRAN_Trace_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_UTRAN_Trace_ID, (void **)&s1APEUTRANTraceID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APEUTRANTraceID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_EUTRAN_CGI:
            {
                S1AP_EUTRAN_CGI_t *s1apeutrancgi_p = &s1AP_CellTrafficTraceIEs->eutran_cgi;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_EUTRAN_CGI, (void **)&s1apeutrancgi_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apeutrancgi failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TraceCollectionEntityIPAddress:
            {
                S1AP_TransportLayerAddress_t *s1APTransportLayerAddress_p = &s1AP_CellTrafficTraceIEs->traceCollectionEntityIPAddress;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TransportLayerAddress, (void **)&s1APTransportLayerAddress_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTransportLayerAddress failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_PrivacyIndicator:
            {
                S1AP_PrivacyIndicator_t *s1APPrivacyIndicator_p = &s1AP_CellTrafficTraceIEs->privacyIndicator;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PrivacyIndicator, (void **)&s1APPrivacyIndicator_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APPrivacyIndicator failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
                    return -1;
                }
                s1AP_CellTrafficTraceIEs->presenceMask |= S1AP_CELLTRAFFICTRACEIES_PRIVACYINDICATOR_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_celltraffictraceies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellTrafficTrace, s1AP_CellTrafficTrace_p);
    return 0;
}

int s1ap_decode_s1ap_enbstatustransferies(
    S1AP_ENBStatusTransferIEs_t *s1AP_ENBStatusTransferIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ENBStatusTransfer_t  s1AP_ENBStatusTransfer;
    S1AP_ENBStatusTransfer_t *s1AP_ENBStatusTransfer_p = &s1AP_ENBStatusTransfer;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ENBStatusTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ENBStatusTransferIEs\n");

    memset(&s1AP_ENBStatusTransfer, 0, sizeof(S1AP_ENBStatusTransfer_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBStatusTransfer, (void **)&s1AP_ENBStatusTransfer_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ENBStatusTransfer failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBStatusTransfer, s1AP_ENBStatusTransfer_p);
        return -1;
    }

    for (i = 0; i < s1AP_ENBStatusTransfer_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ENBStatusTransfer_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_ENBStatusTransferIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBStatusTransfer, s1AP_ENBStatusTransfer_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_ENBStatusTransferIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBStatusTransfer, s1AP_ENBStatusTransfer_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_StatusTransfer_TransparentContainer:
            {
                S1AP_ENB_StatusTransfer_TransparentContainer_t *s1APENBStatusTransferTransparentContainer_p = &s1AP_ENBStatusTransferIEs->eNB_StatusTransfer_TransparentContainer;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer, (void **)&s1APENBStatusTransferTransparentContainer_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APENBStatusTransferTransparentContainer failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBStatusTransfer, s1AP_ENBStatusTransfer_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_enbstatustransferies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBStatusTransfer, s1AP_ENBStatusTransfer_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBStatusTransfer, s1AP_ENBStatusTransfer_p);
    return 0;
}

int s1ap_decode_s1ap_uecontextmodificationfailureies(
    S1AP_UEContextModificationFailureIEs_t *s1AP_UEContextModificationFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UEContextModificationFailure_t  s1AP_UEContextModificationFailure;
    S1AP_UEContextModificationFailure_t *s1AP_UEContextModificationFailure_p = &s1AP_UEContextModificationFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UEContextModificationFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UEContextModificationFailureIEs\n");

    memset(&s1AP_UEContextModificationFailure, 0, sizeof(S1AP_UEContextModificationFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEContextModificationFailure, (void **)&s1AP_UEContextModificationFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UEContextModificationFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationFailure, s1AP_UEContextModificationFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_UEContextModificationFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UEContextModificationFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UEContextModificationFailureIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationFailure, s1AP_UEContextModificationFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UEContextModificationFailureIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationFailure, s1AP_UEContextModificationFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_UEContextModificationFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationFailure, s1AP_UEContextModificationFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_UEContextModificationFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationFailure, s1AP_UEContextModificationFailure_p);
                    return -1;
                }
                s1AP_UEContextModificationFailureIEs->presenceMask |= S1AP_UECONTEXTMODIFICATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uecontextmodificationfailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationFailure, s1AP_UEContextModificationFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEContextModificationFailure, s1AP_UEContextModificationFailure_p);
    return 0;
}

int s1ap_decode_s1ap_mmedirectinformationtransferies(
    S1AP_MMEDirectInformationTransferIEs_t *s1AP_MMEDirectInformationTransferIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_MMEDirectInformationTransfer_t  s1AP_MMEDirectInformationTransfer;
    S1AP_MMEDirectInformationTransfer_t *s1AP_MMEDirectInformationTransfer_p = &s1AP_MMEDirectInformationTransfer;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_MMEDirectInformationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_MMEDirectInformationTransferIEs\n");

    memset(&s1AP_MMEDirectInformationTransfer, 0, sizeof(S1AP_MMEDirectInformationTransfer_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MMEDirectInformationTransfer, (void **)&s1AP_MMEDirectInformationTransfer_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_MMEDirectInformationTransfer failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEDirectInformationTransfer, s1AP_MMEDirectInformationTransfer_p);
        return -1;
    }

    for (i = 0; i < s1AP_MMEDirectInformationTransfer_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_MMEDirectInformationTransfer_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeMDT:
            {
                S1AP_Inter_SystemInformationTransferType_t *s1APInterSystemInformationTransferType_p = &s1AP_MMEDirectInformationTransferIEs->inter_SystemInformationTransferTypeMDT;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Inter_SystemInformationTransferType, (void **)&s1APInterSystemInformationTransferType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APInterSystemInformationTransferType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEDirectInformationTransfer, s1AP_MMEDirectInformationTransfer_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_mmedirectinformationtransferies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEDirectInformationTransfer, s1AP_MMEDirectInformationTransfer_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEDirectInformationTransfer, s1AP_MMEDirectInformationTransfer_p);
    return 0;
}

int s1ap_decode_s1ap_s1setupfailureies(
    S1AP_S1SetupFailureIEs_t *s1AP_S1SetupFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_S1SetupFailure_t  s1AP_S1SetupFailure;
    S1AP_S1SetupFailure_t *s1AP_S1SetupFailure_p = &s1AP_S1SetupFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_S1SetupFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_S1SetupFailureIEs\n");

    memset(&s1AP_S1SetupFailure, 0, sizeof(S1AP_S1SetupFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_S1SetupFailure, (void **)&s1AP_S1SetupFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_S1SetupFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupFailure, s1AP_S1SetupFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_S1SetupFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_S1SetupFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_S1SetupFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupFailure, s1AP_S1SetupFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_TimeToWait:
            {
                S1AP_TimeToWait_t *s1APTimeToWait_p = &s1AP_S1SetupFailureIEs->timeToWait;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TimeToWait, (void **)&s1APTimeToWait_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTimeToWait failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupFailure, s1AP_S1SetupFailure_p);
                    return -1;
                }
                s1AP_S1SetupFailureIEs->presenceMask |= S1AP_S1SETUPFAILUREIES_TIMETOWAIT_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_S1SetupFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupFailure, s1AP_S1SetupFailure_p);
                    return -1;
                }
                s1AP_S1SetupFailureIEs->presenceMask |= S1AP_S1SETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_s1setupfailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupFailure, s1AP_S1SetupFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S1SetupFailure, s1AP_S1SetupFailure_p);
    return 0;
}

int s1ap_decode_s1ap_downlinks1cdma2000tunnelingies(
    S1AP_DownlinkS1cdma2000tunnelingIEs_t *s1AP_DownlinkS1cdma2000tunnelingIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_DownlinkS1cdma2000tunneling_t  s1AP_DownlinkS1cdma2000tunneling;
    S1AP_DownlinkS1cdma2000tunneling_t *s1AP_DownlinkS1cdma2000tunneling_p = &s1AP_DownlinkS1cdma2000tunneling;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_DownlinkS1cdma2000tunnelingIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_DownlinkS1cdma2000tunnelingIEs\n");

    memset(&s1AP_DownlinkS1cdma2000tunneling, 0, sizeof(S1AP_DownlinkS1cdma2000tunneling_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_DownlinkS1cdma2000tunneling, (void **)&s1AP_DownlinkS1cdma2000tunneling_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_DownlinkS1cdma2000tunneling failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
        return -1;
    }

    for (i = 0; i < s1AP_DownlinkS1cdma2000tunneling_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_DownlinkS1cdma2000tunneling_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_DownlinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_DownlinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_E_RABSubjecttoDataForwardingList:
            {
                S1AP_E_RABSubjecttoDataForwardingList_t *s1APERABSubjecttoDataForwardingList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, (void**)&s1APERABSubjecttoDataForwardingList_p);
                if (s1ap_decode_s1ap_e_rabsubjecttodataforwardinglist(&s1AP_DownlinkS1cdma2000tunnelingIEs->e_RABSubjecttoDataForwardingList, s1APERABSubjecttoDataForwardingList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABSubjecttoDataForwardingList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, s1APERABSubjecttoDataForwardingList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, s1APERABSubjecttoDataForwardingList_p);
                s1AP_DownlinkS1cdma2000tunnelingIEs->presenceMask |= S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_cdma2000HOStatus:
            {
                S1AP_Cdma2000HOStatus_t *s1APCdma2000HOStatus_p = &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000HOStatus;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000HOStatus, (void **)&s1APCdma2000HOStatus_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000HOStatus failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
                    return -1;
                }
                s1AP_DownlinkS1cdma2000tunnelingIEs->presenceMask |= S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_CDMA2000HOSTATUS_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_cdma2000RATType:
            {
                S1AP_Cdma2000RATType_t *s1APCdma2000RATType_p = &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000RATType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000RATType, (void **)&s1APCdma2000RATType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000RATType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_cdma2000PDU:
            {
                S1AP_Cdma2000PDU_t *s1APCdma2000PDU_p = &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000PDU;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000PDU, (void **)&s1APCdma2000PDU_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000PDU failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_downlinks1cdma2000tunnelingies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DownlinkS1cdma2000tunneling, s1AP_DownlinkS1cdma2000tunneling_p);
    return 0;
}

int s1ap_decode_s1ap_e_rabreleasecommandies(
    S1AP_E_RABReleaseCommandIEs_t *s1AP_E_RABReleaseCommandIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_E_RABReleaseCommand_t  s1AP_E_RABReleaseCommand;
    S1AP_E_RABReleaseCommand_t *s1AP_E_RABReleaseCommand_p = &s1AP_E_RABReleaseCommand;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseCommandIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_E_RABReleaseCommandIEs\n");

    memset(&s1AP_E_RABReleaseCommand, 0, sizeof(S1AP_E_RABReleaseCommand_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_RABReleaseCommand, (void **)&s1AP_E_RABReleaseCommand_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_E_RABReleaseCommand failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
        return -1;
    }

    for (i = 0; i < s1AP_E_RABReleaseCommand_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_E_RABReleaseCommand_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_E_RABReleaseCommandIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_E_RABReleaseCommandIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate:
            {
                S1AP_UEAggregateMaximumBitrate_t *s1APUEAggregateMaximumBitrate_p = &s1AP_E_RABReleaseCommandIEs->uEaggregateMaximumBitrate;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UEAggregateMaximumBitrate, (void **)&s1APUEAggregateMaximumBitrate_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APUEAggregateMaximumBitrate failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
                    return -1;
                }
                s1AP_E_RABReleaseCommandIEs->presenceMask |= S1AP_E_RABRELEASECOMMANDIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_E_RABToBeReleasedList:
            {
                S1AP_E_RABList_t *s1APERABList_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABList, (void**)&s1APERABList_p);
                if (s1ap_decode_s1ap_e_rablist(&s1AP_E_RABReleaseCommandIEs->e_RABToBeReleasedList, s1APERABList_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APERABList failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABList, s1APERABList_p);
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_NAS_PDU:
            {
                S1AP_NAS_PDU_t *s1apnaspdu_p = &s1AP_E_RABReleaseCommandIEs->nas_pdu;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_NAS_PDU, (void **)&s1apnaspdu_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apnaspdu failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
                    return -1;
                }
                s1AP_E_RABReleaseCommandIEs->presenceMask |= S1AP_E_RABRELEASECOMMANDIES_NAS_PDU_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_e_rabreleasecommandies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseCommand, s1AP_E_RABReleaseCommand_p);
    return 0;
}

int s1ap_decode_s1ap_resetacknowledgeies(
    S1AP_ResetAcknowledgeIEs_t *s1AP_ResetAcknowledgeIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ResetAcknowledge_t  s1AP_ResetAcknowledge;
    S1AP_ResetAcknowledge_t *s1AP_ResetAcknowledge_p = &s1AP_ResetAcknowledge;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ResetAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ResetAcknowledgeIEs\n");

    memset(&s1AP_ResetAcknowledge, 0, sizeof(S1AP_ResetAcknowledge_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ResetAcknowledge, (void **)&s1AP_ResetAcknowledge_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ResetAcknowledge failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ResetAcknowledge, s1AP_ResetAcknowledge_p);
        return -1;
    }

    for (i = 0; i < s1AP_ResetAcknowledge_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ResetAcknowledge_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionListResAck:
            {
                S1AP_UE_associatedLogicalS1_ConnectionListResAck_t *s1APUEassociatedLogicalS1ConnectionListResAck_p = NULL;

                ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionListResAck, (void**)&s1APUEassociatedLogicalS1ConnectionListResAck_p);
                if (s1ap_decode_s1ap_ue_associatedlogicals1_connectionlistresack(&s1AP_ResetAcknowledgeIEs->uE_associatedLogicalS1_ConnectionListResAck, s1APUEassociatedLogicalS1ConnectionListResAck_p) < 0)
                {
                    d_error("Decoding of encapsulated IE s1APUEassociatedLogicalS1ConnectionListResAck failed");
                    ASN_STRUCT_FREE(asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionListResAck, s1APUEassociatedLogicalS1ConnectionListResAck_p);
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ResetAcknowledge, s1AP_ResetAcknowledge_p);
                    return -1;
                }
                ASN_STRUCT_FREE(asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionListResAck, s1APUEassociatedLogicalS1ConnectionListResAck_p);
                s1AP_ResetAcknowledgeIEs->presenceMask |= S1AP_RESETACKNOWLEDGEIES_UE_ASSOCIATEDLOGICALS1_CONNECTIONLISTRESACK_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_ResetAcknowledgeIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ResetAcknowledge, s1AP_ResetAcknowledge_p);
                    return -1;
                }
                s1AP_ResetAcknowledgeIEs->presenceMask |= S1AP_RESETACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_resetacknowledgeies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ResetAcknowledge, s1AP_ResetAcknowledge_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ResetAcknowledge, s1AP_ResetAcknowledge_p);
    return 0;
}

int s1ap_decode_s1ap_deactivatetraceies(
    S1AP_DeactivateTraceIEs_t *s1AP_DeactivateTraceIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_DeactivateTrace_t  s1AP_DeactivateTrace;
    S1AP_DeactivateTrace_t *s1AP_DeactivateTrace_p = &s1AP_DeactivateTrace;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_DeactivateTraceIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_DeactivateTraceIEs\n");

    memset(&s1AP_DeactivateTrace, 0, sizeof(S1AP_DeactivateTrace_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_DeactivateTrace, (void **)&s1AP_DeactivateTrace_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_DeactivateTrace failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DeactivateTrace, s1AP_DeactivateTrace_p);
        return -1;
    }

    for (i = 0; i < s1AP_DeactivateTrace_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_DeactivateTrace_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_DeactivateTraceIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DeactivateTrace, s1AP_DeactivateTrace_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_DeactivateTraceIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DeactivateTrace, s1AP_DeactivateTrace_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_E_UTRAN_Trace_ID:
            {
                S1AP_E_UTRAN_Trace_ID_t *s1APEUTRANTraceID_p = &s1AP_DeactivateTraceIEs->e_UTRAN_Trace_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_E_UTRAN_Trace_ID, (void **)&s1APEUTRANTraceID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APEUTRANTraceID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DeactivateTrace, s1AP_DeactivateTrace_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_deactivatetraceies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DeactivateTrace, s1AP_DeactivateTrace_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DeactivateTrace, s1AP_DeactivateTrace_p);
    return 0;
}

int s1ap_decode_s1ap_pathswitchrequestfailureies(
    S1AP_PathSwitchRequestFailureIEs_t *s1AP_PathSwitchRequestFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_PathSwitchRequestFailure_t  s1AP_PathSwitchRequestFailure;
    S1AP_PathSwitchRequestFailure_t *s1AP_PathSwitchRequestFailure_p = &s1AP_PathSwitchRequestFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_PathSwitchRequestFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_PathSwitchRequestFailureIEs\n");

    memset(&s1AP_PathSwitchRequestFailure, 0, sizeof(S1AP_PathSwitchRequestFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_PathSwitchRequestFailure, (void **)&s1AP_PathSwitchRequestFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_PathSwitchRequestFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestFailure, s1AP_PathSwitchRequestFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_PathSwitchRequestFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_PathSwitchRequestFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_PathSwitchRequestFailureIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestFailure, s1AP_PathSwitchRequestFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_PathSwitchRequestFailureIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestFailure, s1AP_PathSwitchRequestFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_PathSwitchRequestFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestFailure, s1AP_PathSwitchRequestFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_PathSwitchRequestFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestFailure, s1AP_PathSwitchRequestFailure_p);
                    return -1;
                }
                s1AP_PathSwitchRequestFailureIEs->presenceMask |= S1AP_PATHSWITCHREQUESTFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_pathswitchrequestfailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestFailure, s1AP_PathSwitchRequestFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PathSwitchRequestFailure, s1AP_PathSwitchRequestFailure_p);
    return 0;
}

int s1ap_decode_s1ap_enbdirectinformationtransferies(
    S1AP_ENBDirectInformationTransferIEs_t *s1AP_ENBDirectInformationTransferIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ENBDirectInformationTransfer_t  s1AP_ENBDirectInformationTransfer;
    S1AP_ENBDirectInformationTransfer_t *s1AP_ENBDirectInformationTransfer_p = &s1AP_ENBDirectInformationTransfer;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ENBDirectInformationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ENBDirectInformationTransferIEs\n");

    memset(&s1AP_ENBDirectInformationTransfer, 0, sizeof(S1AP_ENBDirectInformationTransfer_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENBDirectInformationTransfer, (void **)&s1AP_ENBDirectInformationTransfer_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ENBDirectInformationTransfer failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBDirectInformationTransfer, s1AP_ENBDirectInformationTransfer_p);
        return -1;
    }

    for (i = 0; i < s1AP_ENBDirectInformationTransfer_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ENBDirectInformationTransfer_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeEDT:
            {
                S1AP_Inter_SystemInformationTransferType_t *s1APInterSystemInformationTransferType_p = &s1AP_ENBDirectInformationTransferIEs->inter_SystemInformationTransferTypeEDT;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Inter_SystemInformationTransferType, (void **)&s1APInterSystemInformationTransferType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APInterSystemInformationTransferType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBDirectInformationTransfer, s1AP_ENBDirectInformationTransfer_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_enbdirectinformationtransferies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBDirectInformationTransfer, s1AP_ENBDirectInformationTransfer_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBDirectInformationTransfer, s1AP_ENBDirectInformationTransfer_p);
    return 0;
}

int s1ap_decode_s1ap_initialcontextsetupfailureies(
    S1AP_InitialContextSetupFailureIEs_t *s1AP_InitialContextSetupFailureIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_InitialContextSetupFailure_t  s1AP_InitialContextSetupFailure;
    S1AP_InitialContextSetupFailure_t *s1AP_InitialContextSetupFailure_p = &s1AP_InitialContextSetupFailure;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_InitialContextSetupFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_InitialContextSetupFailureIEs\n");

    memset(&s1AP_InitialContextSetupFailure, 0, sizeof(S1AP_InitialContextSetupFailure_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_InitialContextSetupFailure, (void **)&s1AP_InitialContextSetupFailure_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_InitialContextSetupFailure failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupFailure, s1AP_InitialContextSetupFailure_p);
        return -1;
    }

    for (i = 0; i < s1AP_InitialContextSetupFailure_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_InitialContextSetupFailure_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_InitialContextSetupFailureIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupFailure, s1AP_InitialContextSetupFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_InitialContextSetupFailureIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupFailure, s1AP_InitialContextSetupFailure_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_InitialContextSetupFailureIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupFailure, s1AP_InitialContextSetupFailure_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_InitialContextSetupFailureIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupFailure, s1AP_InitialContextSetupFailure_p);
                    return -1;
                }
                s1AP_InitialContextSetupFailureIEs->presenceMask |= S1AP_INITIALCONTEXTSETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_initialcontextsetupfailureies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupFailure, s1AP_InitialContextSetupFailure_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_InitialContextSetupFailure, s1AP_InitialContextSetupFailure_p);
    return 0;
}

int s1ap_decode_s1ap_uplinks1cdma2000tunnelingies(
    S1AP_UplinkS1cdma2000tunnelingIEs_t *s1AP_UplinkS1cdma2000tunnelingIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UplinkS1cdma2000tunneling_t  s1AP_UplinkS1cdma2000tunneling;
    S1AP_UplinkS1cdma2000tunneling_t *s1AP_UplinkS1cdma2000tunneling_p = &s1AP_UplinkS1cdma2000tunneling;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UplinkS1cdma2000tunnelingIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UplinkS1cdma2000tunnelingIEs\n");

    memset(&s1AP_UplinkS1cdma2000tunneling, 0, sizeof(S1AP_UplinkS1cdma2000tunneling_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UplinkS1cdma2000tunneling, (void **)&s1AP_UplinkS1cdma2000tunneling_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UplinkS1cdma2000tunneling failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
        return -1;
    }

    for (i = 0; i < s1AP_UplinkS1cdma2000tunneling_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UplinkS1cdma2000tunneling_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_UplinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_UplinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_cdma2000RATType:
            {
                S1AP_Cdma2000RATType_t *s1APCdma2000RATType_p = &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000RATType;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000RATType, (void **)&s1APCdma2000RATType_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000RATType failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_cdma2000SectorID:
            {
                S1AP_Cdma2000SectorID_t *s1APCdma2000SectorID_p = &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000SectorID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000SectorID, (void **)&s1APCdma2000SectorID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000SectorID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_cdma2000HORequiredIndication:
            {
                S1AP_Cdma2000HORequiredIndication_t *s1APCdma2000HORequiredIndication_p = &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000HORequiredIndication;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000HORequiredIndication, (void **)&s1APCdma2000HORequiredIndication_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000HORequiredIndication failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
                s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask |= S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000HOREQUIREDINDICATION_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_cdma2000OneXSRVCCInfo:
            {
                S1AP_Cdma2000OneXSRVCCInfo_t *s1APCdma2000OneXSRVCCInfo_p = &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXSRVCCInfo;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000OneXSRVCCInfo, (void **)&s1APCdma2000OneXSRVCCInfo_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000OneXSRVCCInfo failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
                s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask |= S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXSRVCCINFO_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_cdma2000OneXRAND:
            {
                S1AP_Cdma2000OneXRAND_t *s1APCdma2000OneXRAND_p = &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXRAND;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000OneXRAND, (void **)&s1APCdma2000OneXRAND_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000OneXRAND failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
                s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask |= S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXRAND_PRESENT;
            } break;
            case S1AP_ProtocolIE_ID_id_cdma2000PDU:
            {
                S1AP_Cdma2000PDU_t *s1APCdma2000PDU_p = &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000PDU;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cdma2000PDU, (void **)&s1APCdma2000PDU_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCdma2000PDU failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_EUTRANRoundTripDelayEstimationInfo:
            {
                S1AP_EUTRANRoundTripDelayEstimationInfo_t *s1APEUTRANRoundTripDelayEstimationInfo_p = &s1AP_UplinkS1cdma2000tunnelingIEs->eutranRoundTripDelayEstimationInfo;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_EUTRANRoundTripDelayEstimationInfo, (void **)&s1APEUTRANRoundTripDelayEstimationInfo_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APEUTRANRoundTripDelayEstimationInfo failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                    return -1;
                }
                s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask |= S1AP_UPLINKS1CDMA2000TUNNELINGIES_EUTRANROUNDTRIPDELAYESTIMATIONINFO_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinks1cdma2000tunnelingies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkS1cdma2000tunneling, s1AP_UplinkS1cdma2000tunneling_p);
    return 0;
}

int s1ap_decode_s1ap_errorindicationies(
    S1AP_ErrorIndicationIEs_t *s1AP_ErrorIndicationIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_ErrorIndication_t  s1AP_ErrorIndication;
    S1AP_ErrorIndication_t *s1AP_ErrorIndication_p = &s1AP_ErrorIndication;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_ErrorIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_ErrorIndicationIEs\n");

    memset(&s1AP_ErrorIndication, 0, sizeof(S1AP_ErrorIndication_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ErrorIndication, (void **)&s1AP_ErrorIndication_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_ErrorIndication failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ErrorIndication, s1AP_ErrorIndication_p);
        return -1;
    }

    for (i = 0; i < s1AP_ErrorIndication_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_ErrorIndication_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_ErrorIndicationIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ErrorIndication, s1AP_ErrorIndication_p);
                    return -1;
                }
                s1AP_ErrorIndicationIEs->presenceMask |= S1AP_ERRORINDICATIONIES_MME_UE_S1AP_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_ErrorIndicationIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ErrorIndication, s1AP_ErrorIndication_p);
                    return -1;
                }
                s1AP_ErrorIndicationIEs->presenceMask |= S1AP_ERRORINDICATIONIES_ENB_UE_S1AP_ID_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_Cause:
            {
                S1AP_Cause_t *s1APCause_p = &s1AP_ErrorIndicationIEs->cause;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Cause, (void **)&s1APCause_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCause failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ErrorIndication, s1AP_ErrorIndication_p);
                    return -1;
                }
                s1AP_ErrorIndicationIEs->presenceMask |= S1AP_ERRORINDICATIONIES_CAUSE_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_CriticalityDiagnostics:
            {
                S1AP_CriticalityDiagnostics_t *s1APCriticalityDiagnostics_p = &s1AP_ErrorIndicationIEs->criticalityDiagnostics;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_CriticalityDiagnostics, (void **)&s1APCriticalityDiagnostics_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APCriticalityDiagnostics failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ErrorIndication, s1AP_ErrorIndication_p);
                    return -1;
                }
                s1AP_ErrorIndicationIEs->presenceMask |= S1AP_ERRORINDICATIONIES_CRITICALITYDIAGNOSTICS_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_errorindicationies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ErrorIndication, s1AP_ErrorIndication_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ErrorIndication, s1AP_ErrorIndication_p);
    return 0;
}

int s1ap_decode_s1ap_killrequesties(
    S1AP_KillRequestIEs_t *s1AP_KillRequestIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_KillRequest_t  s1AP_KillRequest;
    S1AP_KillRequest_t *s1AP_KillRequest_p = &s1AP_KillRequest;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_KillRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_KillRequestIEs\n");

    memset(&s1AP_KillRequest, 0, sizeof(S1AP_KillRequest_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_KillRequest, (void **)&s1AP_KillRequest_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_KillRequest failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillRequest, s1AP_KillRequest_p);
        return -1;
    }

    for (i = 0; i < s1AP_KillRequest_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_KillRequest_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MessageIdentifier:
            {
                S1AP_MessageIdentifier_t *s1APMessageIdentifier_p = &s1AP_KillRequestIEs->messageIdentifier;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MessageIdentifier, (void **)&s1APMessageIdentifier_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APMessageIdentifier failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillRequest, s1AP_KillRequest_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_SerialNumber:
            {
                S1AP_SerialNumber_t *s1APSerialNumber_p = &s1AP_KillRequestIEs->serialNumber;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_SerialNumber, (void **)&s1APSerialNumber_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APSerialNumber failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillRequest, s1AP_KillRequest_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_WarningAreaList:
            {
                S1AP_WarningAreaList_t *s1APWarningAreaList_p = &s1AP_KillRequestIEs->warningAreaList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_WarningAreaList, (void **)&s1APWarningAreaList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APWarningAreaList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillRequest, s1AP_KillRequest_p);
                    return -1;
                }
                s1AP_KillRequestIEs->presenceMask |= S1AP_KILLREQUESTIES_WARNINGAREALIST_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_killrequesties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillRequest, s1AP_KillRequest_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_KillRequest, s1AP_KillRequest_p);
    return 0;
}

int s1ap_decode_s1ap_tracestarties(
    S1AP_TraceStartIEs_t *s1AP_TraceStartIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_TraceStart_t  s1AP_TraceStart;
    S1AP_TraceStart_t *s1AP_TraceStart_p = &s1AP_TraceStart;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_TraceStartIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_TraceStartIEs\n");

    memset(&s1AP_TraceStart, 0, sizeof(S1AP_TraceStart_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TraceStart, (void **)&s1AP_TraceStart_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_TraceStart failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceStart, s1AP_TraceStart_p);
        return -1;
    }

    for (i = 0; i < s1AP_TraceStart_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_TraceStart_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID:
            {
                S1AP_MME_UE_S1AP_ID_t *s1apmmeues1apid_p = &s1AP_TraceStartIEs->mme_ue_s1ap_id;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_MME_UE_S1AP_ID, (void **)&s1apmmeues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apmmeues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceStart, s1AP_TraceStart_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID:
            {
                S1AP_ENB_UE_S1AP_ID_t *s1apenbues1apid_p = &s1AP_TraceStartIEs->eNB_UE_S1AP_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_ENB_UE_S1AP_ID, (void **)&s1apenbues1apid_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1apenbues1apid failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceStart, s1AP_TraceStart_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_TraceActivation:
            {
                S1AP_TraceActivation_t *s1APTraceActivation_p = &s1AP_TraceStartIEs->traceActivation;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TraceActivation, (void **)&s1APTraceActivation_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTraceActivation failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceStart, s1AP_TraceStart_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_tracestarties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceStart, s1AP_TraceStart_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceStart, s1AP_TraceStart_p);
    return 0;
}

int s1ap_decode_s1ap_overloadstarties(
    S1AP_OverloadStartIEs_t *s1AP_OverloadStartIEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_OverloadStart_t  s1AP_OverloadStart;
    S1AP_OverloadStart_t *s1AP_OverloadStart_p = &s1AP_OverloadStart;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_OverloadStartIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_OverloadStartIEs\n");

    memset(&s1AP_OverloadStart, 0, sizeof(S1AP_OverloadStart_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_OverloadStart, (void **)&s1AP_OverloadStart_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_OverloadStart failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStart, s1AP_OverloadStart_p);
        return -1;
    }

    for (i = 0; i < s1AP_OverloadStart_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_OverloadStart_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_OverloadResponse:
            {
                S1AP_OverloadResponse_t *s1APOverloadResponse_p = &s1AP_OverloadStartIEs->overloadResponse;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_OverloadResponse, (void **)&s1APOverloadResponse_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APOverloadResponse failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStart, s1AP_OverloadStart_p);
                    return -1;
                }
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_GUMMEIList:
            {
                S1AP_GUMMEIList_t *s1APGUMMEIList_p = &s1AP_OverloadStartIEs->gummeiList;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_GUMMEIList, (void **)&s1APGUMMEIList_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APGUMMEIList failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStart, s1AP_OverloadStart_p);
                    return -1;
                }
                s1AP_OverloadStartIEs->presenceMask |= S1AP_OVERLOADSTARTIES_GUMMEILIST_PRESENT;
            } break;
            /* Optional field */
            case S1AP_ProtocolIE_ID_id_TrafficLoadReductionIndication:
            {
                S1AP_TrafficLoadReductionIndication_t *s1APTrafficLoadReductionIndication_p = &s1AP_OverloadStartIEs->trafficLoadReductionIndication;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_TrafficLoadReductionIndication, (void **)&s1APTrafficLoadReductionIndication_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APTrafficLoadReductionIndication failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStart, s1AP_OverloadStart_p);
                    return -1;
                }
                s1AP_OverloadStartIEs->presenceMask |= S1AP_OVERLOADSTARTIES_TRAFFICLOADREDUCTIONINDICATION_PRESENT;
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_overloadstarties", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStart, s1AP_OverloadStart_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadStart, s1AP_OverloadStart_p);
    return 0;
}

int s1ap_decode_s1ap_uplinknonueassociatedlppatransport_ies(
    S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkNonUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p) {

    asn_dec_rval_t dec_ret = {0};
    S1AP_UplinkNonUEAssociatedLPPaTransport_t  s1AP_UplinkNonUEAssociatedLPPaTransport;
    S1AP_UplinkNonUEAssociatedLPPaTransport_t *s1AP_UplinkNonUEAssociatedLPPaTransport_p = &s1AP_UplinkNonUEAssociatedLPPaTransport;
    int i;
    d_assert(any_p, return -1, "Null param");
    d_assert(s1AP_UplinkNonUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Decode S1AP_UplinkNonUEAssociatedLPPaTransport_IEs\n");

    memset(&s1AP_UplinkNonUEAssociatedLPPaTransport, 0, sizeof(S1AP_UplinkNonUEAssociatedLPPaTransport_t));
    dec_ret = aper_decode(NULL, &asn_DEF_S1AP_UplinkNonUEAssociatedLPPaTransport, (void **)&s1AP_UplinkNonUEAssociatedLPPaTransport_p, any_p->buf, any_p->size, 0, 0);
    if (dec_ret.code != RC_OK)
    {
        d_error("Decoding of IE s1AP_UplinkNonUEAssociatedLPPaTransport failed");
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNonUEAssociatedLPPaTransport, s1AP_UplinkNonUEAssociatedLPPaTransport_p);
        return -1;
    }

    for (i = 0; i < s1AP_UplinkNonUEAssociatedLPPaTransport_p->protocolIEs.list.count; i++) {
        S1AP_IE_t *ie_p;
        ANY_t *st;

        ie_p = (S1AP_IE_t *)s1AP_UplinkNonUEAssociatedLPPaTransport_p->protocolIEs.list.array[i];
        d_assert(ie_p, return -1, "Null param");
        st = &ie_p->value;
        d_assert(st, return -1, "Null param");
        switch(ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Routing_ID:
            {
                S1AP_Routing_ID_t *s1APRoutingID_p = &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->routing_ID;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_Routing_ID, (void **)&s1APRoutingID_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APRoutingID failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNonUEAssociatedLPPaTransport, s1AP_UplinkNonUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            case S1AP_ProtocolIE_ID_id_LPPa_PDU:
            {
                S1AP_LPPa_PDU_t *s1APLPPaPDU_p = &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU;

                dec_ret = aper_decode(NULL, &asn_DEF_S1AP_LPPa_PDU, (void **)&s1APLPPaPDU_p, st->buf, st->size, 0, 0);
                if (dec_ret.code != RC_OK)
                {
                    d_error("Decoding of IE s1APLPPaPDU failed");
                    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNonUEAssociatedLPPaTransport, s1AP_UplinkNonUEAssociatedLPPaTransport_p);
                    return -1;
                }
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNonUEAssociatedLPPaTransport, s1AP_UplinkNonUEAssociatedLPPaTransport_p);
                break;
        }
    }

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UplinkNonUEAssociatedLPPaTransport, s1AP_UplinkNonUEAssociatedLPPaTransport_p);
    return 0;
}

int s1ap_decode_s1ap_e_rabmodifylistbearermodres(
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModResIEs,
    S1AP_E_RABModifyListBearerModRes_t *s1AP_E_RABModifyListBearerModRes) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABModifyListBearerModRes, return -1, "Null param");
    d_assert(s1AP_E_RABModifyListBearerModResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABModifyListBearerModRes->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABModifyListBearerModRes->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABModifyItemBearerModRes:
            {
                S1AP_E_RABModifyItemBearerModRes_t *s1APERABModifyItemBearerModRes_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABModifyItemBearerModRes, (void**)&s1APERABModifyItemBearerModRes_p);
                if (tempDecoded < 0 || s1APERABModifyItemBearerModRes_p == NULL) {
                    d_error("Decoding of IE e_RABModifyItemBearerModRes for message S1AP_E_RABModifyListBearerModRes failed");
                    if (s1APERABModifyItemBearerModRes_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABModifyItemBearerModRes, s1APERABModifyItemBearerModRes_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABModifyListBearerModResIEs->s1AP_E_RABModifyItemBearerModRes, s1APERABModifyItemBearerModRes_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabreleaselistbearerrelcomp(
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelCompIEs,
    S1AP_E_RABReleaseListBearerRelComp_t *s1AP_E_RABReleaseListBearerRelComp) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABReleaseListBearerRelComp, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseListBearerRelCompIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABReleaseListBearerRelComp->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABReleaseListBearerRelComp->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABReleaseItemBearerRelComp:
            {
                S1AP_E_RABReleaseItemBearerRelComp_t *s1APERABReleaseItemBearerRelComp_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABReleaseItemBearerRelComp, (void**)&s1APERABReleaseItemBearerRelComp_p);
                if (tempDecoded < 0 || s1APERABReleaseItemBearerRelComp_p == NULL) {
                    d_error("Decoding of IE e_RABReleaseItemBearerRelComp for message S1AP_E_RABReleaseListBearerRelComp failed");
                    if (s1APERABReleaseItemBearerRelComp_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABReleaseItemBearerRelComp, s1APERABReleaseItemBearerRelComp_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseListBearerRelCompIEs->s1AP_E_RABReleaseItemBearerRelComp, s1APERABReleaseItemBearerRelComp_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabtobemodifiedlistbearermodreq(
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReqIEs,
    S1AP_E_RABToBeModifiedListBearerModReq_t *s1AP_E_RABToBeModifiedListBearerModReq) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABToBeModifiedListBearerModReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeModifiedListBearerModReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeModifiedListBearerModReq->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABToBeModifiedListBearerModReq->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABToBeModifiedItemBearerModReq:
            {
                S1AP_E_RABToBeModifiedItemBearerModReq_t *s1APERABToBeModifiedItemBearerModReq_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeModifiedItemBearerModReq, (void**)&s1APERABToBeModifiedItemBearerModReq_p);
                if (tempDecoded < 0 || s1APERABToBeModifiedItemBearerModReq_p == NULL) {
                    d_error("Decoding of IE e_RABToBeModifiedItemBearerModReq for message S1AP_E_RABToBeModifiedListBearerModReq failed");
                    if (s1APERABToBeModifiedItemBearerModReq_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeModifiedItemBearerModReq, s1APERABToBeModifiedItemBearerModReq_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABToBeModifiedListBearerModReqIEs->s1AP_E_RABToBeModifiedItemBearerModReq, s1APERABToBeModifiedItemBearerModReq_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabtobesetuplistbearersureq(
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReqIEs,
    S1AP_E_RABToBeSetupListBearerSUReq_t *s1AP_E_RABToBeSetupListBearerSUReq) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABToBeSetupListBearerSUReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSetupListBearerSUReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSetupListBearerSUReq->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABToBeSetupListBearerSUReq->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemBearerSUReq:
            {
                S1AP_E_RABToBeSetupItemBearerSUReq_t *s1APERABToBeSetupItemBearerSUReq_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSetupItemBearerSUReq, (void**)&s1APERABToBeSetupItemBearerSUReq_p);
                if (tempDecoded < 0 || s1APERABToBeSetupItemBearerSUReq_p == NULL) {
                    d_error("Decoding of IE e_RABToBeSetupItemBearerSUReq for message S1AP_E_RABToBeSetupListBearerSUReq failed");
                    if (s1APERABToBeSetupItemBearerSUReq_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupItemBearerSUReq, s1APERABToBeSetupItemBearerSUReq_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSetupListBearerSUReqIEs->s1AP_E_RABToBeSetupItemBearerSUReq, s1APERABToBeSetupItemBearerSUReq_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabsubjecttodataforwardinglist(
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingListIEs,
    S1AP_E_RABSubjecttoDataForwardingList_t *s1AP_E_RABSubjecttoDataForwardingList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABSubjecttoDataForwardingList, return -1, "Null param");
    d_assert(s1AP_E_RABSubjecttoDataForwardingListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABSubjecttoDataForwardingList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABSubjecttoDataForwardingList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABDataForwardingItem:
            {
                S1AP_E_RABDataForwardingItem_t *s1APERABDataForwardingItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABDataForwardingItem, (void**)&s1APERABDataForwardingItem_p);
                if (tempDecoded < 0 || s1APERABDataForwardingItem_p == NULL) {
                    d_error("Decoding of IE e_RABDataForwardingItem for message S1AP_E_RABSubjecttoDataForwardingList failed");
                    if (s1APERABDataForwardingItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABDataForwardingItem, s1APERABDataForwardingItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABSubjecttoDataForwardingListIEs->s1AP_E_RABDataForwardingItem, s1APERABDataForwardingItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_ue_associatedlogicals1_connectionlistres(
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResIEs,
    S1AP_UE_associatedLogicalS1_ConnectionListRes_t *s1AP_UE_associatedLogicalS1_ConnectionListRes) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListRes, return -1, "Null param");
    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListRes->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_UE_associatedLogicalS1_ConnectionListRes->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionItem:
            {
                S1AP_UE_associatedLogicalS1_ConnectionItem_t *s1APUEassociatedLogicalS1ConnectionItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, (void**)&s1APUEassociatedLogicalS1ConnectionItem_p);
                if (tempDecoded < 0 || s1APUEassociatedLogicalS1ConnectionItem_p == NULL) {
                    d_error("Decoding of IE uE_associatedLogicalS1_ConnectionItem for message S1AP_UE_associatedLogicalS1_ConnectionListRes failed");
                    if (s1APUEassociatedLogicalS1ConnectionItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, s1APUEassociatedLogicalS1ConnectionItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_UE_associatedLogicalS1_ConnectionListResIEs->s1AP_UE_associatedLogicalS1_ConnectionItemRes, s1APUEassociatedLogicalS1ConnectionItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabsetuplistbearersures(
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSUResIEs,
    S1AP_E_RABSetupListBearerSURes_t *s1AP_E_RABSetupListBearerSURes) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABSetupListBearerSURes, return -1, "Null param");
    d_assert(s1AP_E_RABSetupListBearerSUResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABSetupListBearerSURes->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABSetupListBearerSURes->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABSetupItemBearerSURes:
            {
                S1AP_E_RABSetupItemBearerSURes_t *s1APERABSetupItemBearerSURes_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABSetupItemBearerSURes, (void**)&s1APERABSetupItemBearerSURes_p);
                if (tempDecoded < 0 || s1APERABSetupItemBearerSURes_p == NULL) {
                    d_error("Decoding of IE e_RABSetupItemBearerSURes for message S1AP_E_RABSetupListBearerSURes failed");
                    if (s1APERABSetupItemBearerSURes_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupItemBearerSURes, s1APERABSetupItemBearerSURes_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABSetupListBearerSUResIEs->s1AP_E_RABSetupItemBearerSURes, s1APERABSetupItemBearerSURes_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_bearers_subjecttostatustransferlist(
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferListIEs,
    S1AP_Bearers_SubjectToStatusTransferList_t *s1AP_Bearers_SubjectToStatusTransferList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_Bearers_SubjectToStatusTransferList, return -1, "Null param");
    d_assert(s1AP_Bearers_SubjectToStatusTransferListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_Bearers_SubjectToStatusTransferList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_Bearers_SubjectToStatusTransferList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_Bearers_SubjectToStatusTransfer_Item:
            {
                S1AP_Bearers_SubjectToStatusTransfer_Item_t *s1APBearersSubjectToStatusTransferItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_Bearers_SubjectToStatusTransfer_Item, (void**)&s1APBearersSubjectToStatusTransferItem_p);
                if (tempDecoded < 0 || s1APBearersSubjectToStatusTransferItem_p == NULL) {
                    d_error("Decoding of IE bearers_SubjectToStatusTransfer_Item for message S1AP_Bearers_SubjectToStatusTransferList failed");
                    if (s1APBearersSubjectToStatusTransferItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_Bearers_SubjectToStatusTransfer_Item, s1APBearersSubjectToStatusTransferItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_Bearers_SubjectToStatusTransferListIEs->s1AP_Bearers_SubjectToStatusTransfer_Item, s1APBearersSubjectToStatusTransferItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_tailist(
    S1AP_TAIList_IEs_t *s1AP_TAIListIEs,
    S1AP_TAIList_t *s1AP_TAIList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_TAIList, return -1, "Null param");
    d_assert(s1AP_TAIListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_TAIList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_TAIList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_TAIItem:
            {
                S1AP_TAIItem_t *s1APTAIItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_TAIItem, (void**)&s1APTAIItem_p);
                if (tempDecoded < 0 || s1APTAIItem_p == NULL) {
                    d_error("Decoding of IE taiItem for message S1AP_TAIList failed");
                    if (s1APTAIItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_TAIItem, s1APTAIItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_TAIListIEs->s1AP_TAIItem, s1APTAIItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabtobesetuplisthoreq(
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReqIEs,
    S1AP_E_RABToBeSetupListHOReq_t *s1AP_E_RABToBeSetupListHOReq) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABToBeSetupListHOReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSetupListHOReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSetupListHOReq->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABToBeSetupListHOReq->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemHOReq:
            {
                S1AP_E_RABToBeSetupItemHOReq_t *s1APERABToBeSetupItemHOReq_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSetupItemHOReq, (void**)&s1APERABToBeSetupItemHOReq_p);
                if (tempDecoded < 0 || s1APERABToBeSetupItemHOReq_p == NULL) {
                    d_error("Decoding of IE e_RABToBeSetupItemHOReq for message S1AP_E_RABToBeSetupListHOReq failed");
                    if (s1APERABToBeSetupItemHOReq_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupItemHOReq, s1APERABToBeSetupItemHOReq_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSetupListHOReqIEs->s1AP_E_RABToBeSetupItemHOReq, s1APERABToBeSetupItemHOReq_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabtobeswitchedullist(
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULListIEs,
    S1AP_E_RABToBeSwitchedULList_t *s1AP_E_RABToBeSwitchedULList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABToBeSwitchedULList, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSwitchedULListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSwitchedULList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABToBeSwitchedULList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedULItem:
            {
                S1AP_E_RABToBeSwitchedULItem_t *s1APERABToBeSwitchedULItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSwitchedULItem, (void**)&s1APERABToBeSwitchedULItem_p);
                if (tempDecoded < 0 || s1APERABToBeSwitchedULItem_p == NULL) {
                    d_error("Decoding of IE e_RABToBeSwitchedULItem for message S1AP_E_RABToBeSwitchedULList failed");
                    if (s1APERABToBeSwitchedULItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedULItem, s1APERABToBeSwitchedULItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSwitchedULListIEs->s1AP_E_RABToBeSwitchedULItem, s1APERABToBeSwitchedULItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rablist(
    S1AP_E_RABList_IEs_t *s1AP_E_RABListIEs,
    S1AP_E_RABList_t *s1AP_E_RABList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABList, return -1, "Null param");
    d_assert(s1AP_E_RABListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABItem:
            {
                S1AP_E_RABItem_t *s1APERABItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABItem, (void**)&s1APERABItem_p);
                if (tempDecoded < 0 || s1APERABItem_p == NULL) {
                    d_error("Decoding of IE e_RABItem for message S1AP_E_RABList failed");
                    if (s1APERABItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABItem, s1APERABItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABListIEs->s1AP_E_RABItem, s1APERABItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabfailedtosetuplisthoreqack(
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAckIEs,
    S1AP_E_RABFailedtoSetupListHOReqAck_t *s1AP_E_RABFailedtoSetupListHOReqAck) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABFailedtoSetupListHOReqAck, return -1, "Null param");
    d_assert(s1AP_E_RABFailedtoSetupListHOReqAckIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABFailedtoSetupListHOReqAck->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABFailedtoSetupListHOReqAck->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABFailedtoSetupItemHOReqAck:
            {
                S1AP_E_RABFailedToSetupItemHOReqAck_t *s1APERABFailedToSetupItemHOReqAck_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck, (void**)&s1APERABFailedToSetupItemHOReqAck_p);
                if (tempDecoded < 0 || s1APERABFailedToSetupItemHOReqAck_p == NULL) {
                    d_error("Decoding of IE e_RABFailedtoSetupItemHOReqAck for message S1AP_E_RABFailedtoSetupListHOReqAck failed");
                    if (s1APERABFailedToSetupItemHOReqAck_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck, s1APERABFailedToSetupItemHOReqAck_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABFailedtoSetupListHOReqAckIEs->s1AP_E_RABFailedtoSetupItemHOReqAck, s1APERABFailedToSetupItemHOReqAck_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabtobeswitcheddllist(
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLListIEs,
    S1AP_E_RABToBeSwitchedDLList_t *s1AP_E_RABToBeSwitchedDLList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABToBeSwitchedDLList, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSwitchedDLListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSwitchedDLList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABToBeSwitchedDLList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedDLItem:
            {
                S1AP_E_RABToBeSwitchedDLItem_t *s1APERABToBeSwitchedDLItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSwitchedDLItem, (void**)&s1APERABToBeSwitchedDLItem_p);
                if (tempDecoded < 0 || s1APERABToBeSwitchedDLItem_p == NULL) {
                    d_error("Decoding of IE e_RABToBeSwitchedDLItem for message S1AP_E_RABToBeSwitchedDLList failed");
                    if (s1APERABToBeSwitchedDLItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedDLItem, s1APERABToBeSwitchedDLItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSwitchedDLListIEs->s1AP_E_RABToBeSwitchedDLItem, s1APERABToBeSwitchedDLItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabadmittedlist(
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedListIEs,
    S1AP_E_RABAdmittedList_t *s1AP_E_RABAdmittedList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABAdmittedList, return -1, "Null param");
    d_assert(s1AP_E_RABAdmittedListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABAdmittedList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABAdmittedList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABAdmittedItem:
            {
                S1AP_E_RABAdmittedItem_t *s1APERABAdmittedItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABAdmittedItem, (void**)&s1APERABAdmittedItem_p);
                if (tempDecoded < 0 || s1APERABAdmittedItem_p == NULL) {
                    d_error("Decoding of IE e_RABAdmittedItem for message S1AP_E_RABAdmittedList failed");
                    if (s1APERABAdmittedItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABAdmittedItem, s1APERABAdmittedItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABAdmittedListIEs->s1AP_E_RABAdmittedItem, s1APERABAdmittedItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabtobesetuplistctxtsureq(
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReqIEs,
    S1AP_E_RABToBeSetupListCtxtSUReq_t *s1AP_E_RABToBeSetupListCtxtSUReq) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABToBeSetupListCtxtSUReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSetupListCtxtSUReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSetupListCtxtSUReq->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABToBeSetupListCtxtSUReq->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemCtxtSUReq:
            {
                S1AP_E_RABToBeSetupItemCtxtSUReq_t *s1APERABToBeSetupItemCtxtSUReq_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABToBeSetupItemCtxtSUReq, (void**)&s1APERABToBeSetupItemCtxtSUReq_p);
                if (tempDecoded < 0 || s1APERABToBeSetupItemCtxtSUReq_p == NULL) {
                    d_error("Decoding of IE e_RABToBeSetupItemCtxtSUReq for message S1AP_E_RABToBeSetupListCtxtSUReq failed");
                    if (s1APERABToBeSetupItemCtxtSUReq_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupItemCtxtSUReq, s1APERABToBeSetupItemCtxtSUReq_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSetupListCtxtSUReqIEs->s1AP_E_RABToBeSetupItemCtxtSUReq, s1APERABToBeSetupItemCtxtSUReq_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabinformationlist(
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationListIEs,
    S1AP_E_RABInformationList_t *s1AP_E_RABInformationList) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABInformationList, return -1, "Null param");
    d_assert(s1AP_E_RABInformationListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABInformationList->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABInformationList->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABInformationListItem:
            {
                S1AP_E_RABInformationListItem_t *s1APERABInformationListItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABInformationListItem, (void**)&s1APERABInformationListItem_p);
                if (tempDecoded < 0 || s1APERABInformationListItem_p == NULL) {
                    d_error("Decoding of IE e_RABInformationListItem for message S1AP_E_RABInformationList failed");
                    if (s1APERABInformationListItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABInformationListItem, s1APERABInformationListItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABInformationListIEs->s1AP_E_RABInformationList, s1APERABInformationListItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_e_rabsetuplistctxtsures(
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSUResIEs,
    S1AP_E_RABSetupListCtxtSURes_t *s1AP_E_RABSetupListCtxtSURes) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_E_RABSetupListCtxtSURes, return -1, "Null param");
    d_assert(s1AP_E_RABSetupListCtxtSUResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABSetupListCtxtSURes->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_E_RABSetupListCtxtSURes->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_E_RABSetupItemCtxtSURes:
            {
                S1AP_E_RABSetupItemCtxtSURes_t *s1APERABSetupItemCtxtSURes_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_E_RABSetupItemCtxtSURes, (void**)&s1APERABSetupItemCtxtSURes_p);
                if (tempDecoded < 0 || s1APERABSetupItemCtxtSURes_p == NULL) {
                    d_error("Decoding of IE e_RABSetupItemCtxtSURes for message S1AP_E_RABSetupListCtxtSURes failed");
                    if (s1APERABSetupItemCtxtSURes_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupItemCtxtSURes, s1APERABSetupItemCtxtSURes_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_E_RABSetupListCtxtSUResIEs->s1AP_E_RABSetupItemCtxtSURes, s1APERABSetupItemCtxtSURes_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

int s1ap_decode_s1ap_ue_associatedlogicals1_connectionlistresack(
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs,
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_t *s1AP_UE_associatedLogicalS1_ConnectionListResAck) {

    int i, decoded = 0;
    int tempDecoded = 0;

    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListResAck, return -1, "Null param");
    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs, return -1, "Null param");

    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListResAck->list.count; i++) {
        S1AP_IE_t *ie_p = (S1AP_IE_t *)s1AP_UE_associatedLogicalS1_ConnectionListResAck->list.array[i];
        switch (ie_p->id) {
            case S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionItem:
            {
                S1AP_UE_associatedLogicalS1_ConnectionItem_t *s1APUEassociatedLogicalS1ConnectionItem_p = NULL;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, (void**)&s1APUEassociatedLogicalS1ConnectionItem_p);
                if (tempDecoded < 0 || s1APUEassociatedLogicalS1ConnectionItem_p == NULL) {
                    d_error("Decoding of IE uE_associatedLogicalS1_ConnectionItem for message S1AP_UE_associatedLogicalS1_ConnectionListResAck failed");
                    if (s1APUEassociatedLogicalS1ConnectionItem_p)
                        ASN_STRUCT_FREE(asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, s1APUEassociatedLogicalS1ConnectionItem_p);
                    return -1;
                }
                decoded += tempDecoded;
                ASN_SEQUENCE_ADD(&s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs->s1AP_UE_associatedLogicalS1_ConnectionItemResAck, s1APUEassociatedLogicalS1ConnectionItem_p);
            } break;
            default:
                d_warn("Unknown protocol IE id (%d) for message s1ap_uplinknonueassociatedlppatransport_ies", (int)ie_p->id);
                break;
        }
    }
    return decoded;
}

