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
 * Created on: 2018-02-26 19:44:10.842458 by acetcom
 * from ['S1AP-PDU.asn']
 ******************************************************************************/
#define TRACE_MODULE _s1ap_ies_encoder
#include "core_debug.h"
#include "s1ap_ies_defs.h"

int s1ap_encode_s1ap_e_rabsetupresponseies(
    S1AP_E_RABSetupResponse_t *s1AP_E_RABSetupResponse,
    S1AP_E_RABSetupResponseIEs_t *s1AP_E_RABSetupResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABSetupResponse, return -1, "Null param");
    d_assert(s1AP_E_RABSetupResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_E_RABSetupResponseIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_E_RABSetupResponseIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABSetupResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_E_RABSetupResponseIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABSetupResponse->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_E_RABSetupResponseIEs->presenceMask & S1AP_E_RABSETUPRESPONSEIES_E_RABSETUPLISTBEARERSURES_PRESENT) {
        S1AP_E_RABSetupListBearerSURes_t e_RABSetupListBearerSURes;

        memset(&e_RABSetupListBearerSURes, 0, sizeof(S1AP_E_RABSetupListBearerSURes_t));

        if (s1ap_encode_s1ap_e_rabsetuplistbearersures(&e_RABSetupListBearerSURes, &s1AP_E_RABSetupResponseIEs->e_RABSetupListBearerSURes) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABSetupListBearerSURes,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABSetupListBearerSURes,
                            &e_RABSetupListBearerSURes)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABSetupResponse->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupListBearerSURes, &e_RABSetupListBearerSURes);

    }

    /* Optional field */
    if (s1AP_E_RABSetupResponseIEs->presenceMask & S1AP_E_RABSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTBEARERSURES_PRESENT) {
        S1AP_E_RABList_t e_RABFailedToSetupListBearerSURes;

        memset(&e_RABFailedToSetupListBearerSURes, 0, sizeof(S1AP_E_RABList_t));

        if (s1ap_encode_s1ap_e_rablist(&e_RABFailedToSetupListBearerSURes, &s1AP_E_RABSetupResponseIEs->e_RABFailedToSetupListBearerSURes) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListBearerSURes,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABList,
                            &e_RABFailedToSetupListBearerSURes)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABSetupResponse->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABFailedToSetupListBearerSURes);

    }

    /* Optional field */
    if (s1AP_E_RABSetupResponseIEs->presenceMask & S1AP_E_RABSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_E_RABSetupResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABSetupResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_uecontextreleasecommand_ies(
    S1AP_UEContextReleaseCommand_t *s1AP_UEContextReleaseCommand,
    S1AP_UEContextReleaseCommand_IEs_t *s1AP_UEContextReleaseCommand_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UEContextReleaseCommand, return -1, "Null param");
    d_assert(s1AP_UEContextReleaseCommand_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UEContextReleaseCommand_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UE_S1AP_IDs,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_UE_S1AP_IDs,
                        &s1AP_UEContextReleaseCommand_IEs->uE_S1AP_IDs)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseCommand->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_UEContextReleaseCommand_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseCommand->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_mmeconfigurationtransferies(
    S1AP_MMEConfigurationTransfer_t *s1AP_MMEConfigurationTransfer,
    S1AP_MMEConfigurationTransferIEs_t *s1AP_MMEConfigurationTransferIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_MMEConfigurationTransfer, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_MMEConfigurationTransferIEs\n");

    /* Optional field */
    if (s1AP_MMEConfigurationTransferIEs->presenceMask & S1AP_MMECONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERMCT_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SONConfigurationTransferMCT,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_SONConfigurationTransfer,
                            &s1AP_MMEConfigurationTransferIEs->sonConfigurationTransferMCT)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationTransfer->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_uecapabilityinfoindicationies(
    S1AP_UECapabilityInfoIndication_t *s1AP_UECapabilityInfoIndication,
    S1AP_UECapabilityInfoIndicationIEs_t *s1AP_UECapabilityInfoIndicationIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UECapabilityInfoIndication, return -1, "Null param");
    d_assert(s1AP_UECapabilityInfoIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UECapabilityInfoIndicationIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UECapabilityInfoIndicationIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UECapabilityInfoIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UECapabilityInfoIndicationIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UECapabilityInfoIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UERadioCapability,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_UERadioCapability,
                        &s1AP_UECapabilityInfoIndicationIEs->ueRadioCapability)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UECapabilityInfoIndication->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_writereplacewarningrequesties(
    S1AP_WriteReplaceWarningRequest_t *s1AP_WriteReplaceWarningRequest,
    S1AP_WriteReplaceWarningRequestIEs_t *s1AP_WriteReplaceWarningRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_WriteReplaceWarningRequest, return -1, "Null param");
    d_assert(s1AP_WriteReplaceWarningRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_WriteReplaceWarningRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MessageIdentifier,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MessageIdentifier,
                        &s1AP_WriteReplaceWarningRequestIEs->messageIdentifier)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SerialNumber,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SerialNumber,
                        &s1AP_WriteReplaceWarningRequestIEs->serialNumber)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGAREALIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_WarningAreaList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_WarningAreaList,
                            &s1AP_WriteReplaceWarningRequestIEs->warningAreaList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RepetitionPeriod,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_RepetitionPeriod,
                        &s1AP_WriteReplaceWarningRequestIEs->repetitionPeriod)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_EXTENDEDREPETITIONPERIOD_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_ExtendedRepetitionPeriod,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_ExtendedRepetitionPeriod,
                            &s1AP_WriteReplaceWarningRequestIEs->extendedRepetitionPeriod)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_NumberofBroadcastRequest,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_NumberofBroadcastRequest,
                        &s1AP_WriteReplaceWarningRequestIEs->numberofBroadcastRequest)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGTYPE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_WarningType,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_WarningType,
                            &s1AP_WriteReplaceWarningRequestIEs->warningType)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGSECURITYINFO_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_WarningSecurityInfo,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_WarningSecurityInfo,
                            &s1AP_WriteReplaceWarningRequestIEs->warningSecurityInfo)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_DATACODINGSCHEME_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_DataCodingScheme,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_DataCodingScheme,
                            &s1AP_WriteReplaceWarningRequestIEs->dataCodingScheme)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGMESSAGECONTENTS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_WarningMessageContents,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_WarningMessageContents,
                            &s1AP_WriteReplaceWarningRequestIEs->warningMessageContents)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_WriteReplaceWarningRequestIEs->presenceMask & S1AP_WRITEREPLACEWARNINGREQUESTIES_CONCURRENTWARNINGMESSAGEINDICATOR_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_ConcurrentWarningMessageIndicator,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_ConcurrentWarningMessageIndicator,
                            &s1AP_WriteReplaceWarningRequestIEs->concurrentWarningMessageIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_e_rabsetuprequesties(
    S1AP_E_RABSetupRequest_t *s1AP_E_RABSetupRequest,
    S1AP_E_RABSetupRequestIEs_t *s1AP_E_RABSetupRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABSetupRequest, return -1, "Null param");
    d_assert(s1AP_E_RABSetupRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_E_RABSetupRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_E_RABSetupRequestIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABSetupRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_E_RABSetupRequestIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABSetupRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_E_RABSetupRequestIEs->presenceMask & S1AP_E_RABSETUPREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_UEAggregateMaximumBitrate,
                            &s1AP_E_RABSetupRequestIEs->uEaggregateMaximumBitrate)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABSetupRequest->protocolIEs.list, ie);
    }

    S1AP_E_RABToBeSetupListBearerSUReq_t e_RABToBeSetupListBearerSUReq;

    memset(&e_RABToBeSetupListBearerSUReq, 0, sizeof(S1AP_E_RABToBeSetupListBearerSUReq_t));

    if (s1ap_encode_s1ap_e_rabtobesetuplistbearersureq(&e_RABToBeSetupListBearerSUReq, &s1AP_E_RABSetupRequestIEs->e_RABToBeSetupListBearerSUReq) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSetupListBearerSUReq,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_E_RABToBeSetupListBearerSUReq,
                        &e_RABToBeSetupListBearerSUReq)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABSetupRequest->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABToBeSetupListBearerSUReq, &e_RABToBeSetupListBearerSUReq);

    return 0;
}

int s1ap_encode_s1ap_locationreportingfailureindicationies(
    S1AP_LocationReportingFailureIndication_t *s1AP_LocationReportingFailureIndication,
    S1AP_LocationReportingFailureIndicationIEs_t *s1AP_LocationReportingFailureIndicationIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_LocationReportingFailureIndication, return -1, "Null param");
    d_assert(s1AP_LocationReportingFailureIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_LocationReportingFailureIndicationIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_LocationReportingFailureIndicationIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReportingFailureIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_LocationReportingFailureIndicationIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReportingFailureIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_LocationReportingFailureIndicationIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReportingFailureIndication->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_uecontextreleasecomplete_ies(
    S1AP_UEContextReleaseComplete_t *s1AP_UEContextReleaseComplete,
    S1AP_UEContextReleaseComplete_IEs_t *s1AP_UEContextReleaseComplete_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UEContextReleaseComplete, return -1, "Null param");
    d_assert(s1AP_UEContextReleaseComplete_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UEContextReleaseComplete_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UEContextReleaseComplete_IEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseComplete->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UEContextReleaseComplete_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseComplete->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UEContextReleaseComplete_IEs->presenceMask & S1AP_UECONTEXTRELEASECOMPLETE_IES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_UEContextReleaseComplete_IEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseComplete->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_overloadstopies(
    S1AP_OverloadStop_t *s1AP_OverloadStop,
    S1AP_OverloadStopIEs_t *s1AP_OverloadStopIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_OverloadStop, return -1, "Null param");
    d_assert(s1AP_OverloadStopIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_OverloadStopIEs\n");

    /* Optional field */
    if (s1AP_OverloadStopIEs->presenceMask & S1AP_OVERLOADSTOPIES_GUMMEILIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GUMMEIList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_GUMMEIList,
                            &s1AP_OverloadStopIEs->gummeiList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_OverloadStop->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_uecontextmodificationrequesties(
    S1AP_UEContextModificationRequest_t *s1AP_UEContextModificationRequest,
    S1AP_UEContextModificationRequestIEs_t *s1AP_UEContextModificationRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UEContextModificationRequest, return -1, "Null param");
    d_assert(s1AP_UEContextModificationRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UEContextModificationRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UEContextModificationRequestIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UEContextModificationRequestIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_SECURITYKEY_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SecurityKey,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_SecurityKey,
                            &s1AP_UEContextModificationRequestIEs->securityKey)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SubscriberProfileIDforRFP,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_SubscriberProfileIDforRFP,
                            &s1AP_UEContextModificationRequestIEs->subscriberProfileIDforRFP)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_UEAggregateMaximumBitrate,
                            &s1AP_UEContextModificationRequestIEs->uEaggregateMaximumBitrate)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSFALLBACKINDICATOR_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSFallbackIndicator,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CSFallbackIndicator,
                            &s1AP_UEContextModificationRequestIEs->csFallbackIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_UESECURITYCAPABILITIES_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UESecurityCapabilities,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_UESecurityCapabilities,
                            &s1AP_UEContextModificationRequestIEs->ueSecurityCapabilities)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSGMembershipStatus,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CSGMembershipStatus,
                            &s1AP_UEContextModificationRequestIEs->csgMembershipStatus)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UEContextModificationRequestIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONREQUESTIES_REGISTEREDLAI_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RegisteredLAI,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_LAI,
                            &s1AP_UEContextModificationRequestIEs->registeredLAI)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_e_rabmodifyresponseies(
    S1AP_E_RABModifyResponse_t *s1AP_E_RABModifyResponse,
    S1AP_E_RABModifyResponseIEs_t *s1AP_E_RABModifyResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABModifyResponse, return -1, "Null param");
    d_assert(s1AP_E_RABModifyResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_E_RABModifyResponseIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_E_RABModifyResponseIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABModifyResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_E_RABModifyResponseIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABModifyResponse->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_E_RABModifyResponseIEs->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_E_RABMODIFYLISTBEARERMODRES_PRESENT) {
        S1AP_E_RABModifyListBearerModRes_t e_RABModifyListBearerModRes;

        memset(&e_RABModifyListBearerModRes, 0, sizeof(S1AP_E_RABModifyListBearerModRes_t));

        if (s1ap_encode_s1ap_e_rabmodifylistbearermodres(&e_RABModifyListBearerModRes, &s1AP_E_RABModifyResponseIEs->e_RABModifyListBearerModRes) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABModifyListBearerModRes,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABModifyListBearerModRes,
                            &e_RABModifyListBearerModRes)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABModifyResponse->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABModifyListBearerModRes, &e_RABModifyListBearerModRes);

    }

    /* Optional field */
    if (s1AP_E_RABModifyResponseIEs->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_E_RABFAILEDTOMODIFYLIST_PRESENT) {
        S1AP_E_RABList_t e_RABFailedToModifyList;

        memset(&e_RABFailedToModifyList, 0, sizeof(S1AP_E_RABList_t));

        if (s1ap_encode_s1ap_e_rablist(&e_RABFailedToModifyList, &s1AP_E_RABModifyResponseIEs->e_RABFailedToModifyList) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABFailedToModifyList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABList,
                            &e_RABFailedToModifyList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABModifyResponse->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABFailedToModifyList);

    }

    /* Optional field */
    if (s1AP_E_RABModifyResponseIEs->presenceMask & S1AP_E_RABMODIFYRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_E_RABModifyResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABModifyResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_locationreportingcontrolies(
    S1AP_LocationReportingControl_t *s1AP_LocationReportingControl,
    S1AP_LocationReportingControlIEs_t *s1AP_LocationReportingControlIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_LocationReportingControl, return -1, "Null param");
    d_assert(s1AP_LocationReportingControlIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_LocationReportingControlIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_LocationReportingControlIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReportingControl->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_LocationReportingControlIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReportingControl->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RequestType,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_RequestType,
                        &s1AP_LocationReportingControlIEs->requestType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReportingControl->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_killresponseies(
    S1AP_KillResponse_t *s1AP_KillResponse,
    S1AP_KillResponseIEs_t *s1AP_KillResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_KillResponse, return -1, "Null param");
    d_assert(s1AP_KillResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_KillResponseIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MessageIdentifier,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MessageIdentifier,
                        &s1AP_KillResponseIEs->messageIdentifier)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_KillResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SerialNumber,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SerialNumber,
                        &s1AP_KillResponseIEs->serialNumber)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_KillResponse->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_KillResponseIEs->presenceMask & S1AP_KILLRESPONSEIES_BROADCASTCANCELLEDAREALIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_BroadcastCancelledAreaList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_BroadcastCancelledAreaList,
                            &s1AP_KillResponseIEs->broadcastCancelledAreaList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_KillResponse->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_KillResponseIEs->presenceMask & S1AP_KILLRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_KillResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_KillResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_mmestatustransferies(
    S1AP_MMEStatusTransfer_t *s1AP_MMEStatusTransfer,
    S1AP_MMEStatusTransferIEs_t *s1AP_MMEStatusTransferIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_MMEStatusTransfer, return -1, "Null param");
    d_assert(s1AP_MMEStatusTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_MMEStatusTransferIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_MMEStatusTransferIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_MMEStatusTransfer->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_MMEStatusTransferIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_MMEStatusTransfer->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_StatusTransfer_TransparentContainer,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer,
                        &s1AP_MMEStatusTransferIEs->eNB_StatusTransfer_TransparentContainer)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_MMEStatusTransfer->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_mmeconfigurationupdateies(
    S1AP_MMEConfigurationUpdate_t *s1AP_MMEConfigurationUpdate,
    S1AP_MMEConfigurationUpdateIEs_t *s1AP_MMEConfigurationUpdateIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_MMEConfigurationUpdate, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationUpdateIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_MMEConfigurationUpdateIEs\n");

    /* Optional field */
    if (s1AP_MMEConfigurationUpdateIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_MMENAME_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MMEname,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MMEname,
                            &s1AP_MMEConfigurationUpdateIEs->mmEname)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationUpdate->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_MMEConfigurationUpdateIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_SERVEDGUMMEIS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_ServedGUMMEIs,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_ServedGUMMEIs,
                            &s1AP_MMEConfigurationUpdateIEs->servedGUMMEIs)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationUpdate->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_MMEConfigurationUpdateIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEIES_RELATIVEMMECAPACITY_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RelativeMMECapacity,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_RelativeMMECapacity,
                            &s1AP_MMEConfigurationUpdateIEs->relativeMMECapacity)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationUpdate->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_tracefailureindicationies(
    S1AP_TraceFailureIndication_t *s1AP_TraceFailureIndication,
    S1AP_TraceFailureIndicationIEs_t *s1AP_TraceFailureIndicationIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_TraceFailureIndication, return -1, "Null param");
    d_assert(s1AP_TraceFailureIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_TraceFailureIndicationIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_TraceFailureIndicationIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_TraceFailureIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_TraceFailureIndicationIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_TraceFailureIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_UTRAN_Trace_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_E_UTRAN_Trace_ID,
                        &s1AP_TraceFailureIndicationIEs->e_UTRAN_Trace_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_TraceFailureIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_TraceFailureIndicationIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_TraceFailureIndication->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_enbconfigurationtransferies(
    S1AP_ENBConfigurationTransfer_t *s1AP_ENBConfigurationTransfer,
    S1AP_ENBConfigurationTransferIEs_t *s1AP_ENBConfigurationTransferIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ENBConfigurationTransfer, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ENBConfigurationTransferIEs\n");

    /* Optional field */
    if (s1AP_ENBConfigurationTransferIEs->presenceMask & S1AP_ENBCONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERECT_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SONConfigurationTransferECT,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_SONConfigurationTransfer,
                            &s1AP_ENBConfigurationTransferIEs->sonConfigurationTransferECT)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationTransfer->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_downlinkueassociatedlppatransport_ies(
    S1AP_DownlinkUEAssociatedLPPaTransport_t *s1AP_DownlinkUEAssociatedLPPaTransport,
    S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkUEAssociatedLPPaTransport_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_DownlinkUEAssociatedLPPaTransport, return -1, "Null param");
    d_assert(s1AP_DownlinkUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_DownlinkUEAssociatedLPPaTransport_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Routing_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Routing_ID,
                        &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->routing_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_LPPa_PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_LPPa_PDU,
                        &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->lpPa_PDU)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_handoverfailureies(
    S1AP_HandoverFailure_t *s1AP_HandoverFailure,
    S1AP_HandoverFailureIEs_t *s1AP_HandoverFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverFailure, return -1, "Null param");
    d_assert(s1AP_HandoverFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverFailureIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_HandoverFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverFailureIEs->presenceMask & S1AP_HANDOVERFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_HandoverFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_uplinknastransport_ies(
    S1AP_UplinkNASTransport_t *s1AP_UplinkNASTransport,
    S1AP_UplinkNASTransport_IEs_t *s1AP_UplinkNASTransport_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UplinkNASTransport, return -1, "Null param");
    d_assert(s1AP_UplinkNASTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UplinkNASTransport_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UplinkNASTransport_IEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkNASTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UplinkNASTransport_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkNASTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_NAS_PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_NAS_PDU,
                        &s1AP_UplinkNASTransport_IEs->nas_pdu)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkNASTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_EUTRAN_CGI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_EUTRAN_CGI,
                        &s1AP_UplinkNASTransport_IEs->eutran_cgi)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkNASTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TAI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_TAI,
                        &s1AP_UplinkNASTransport_IEs->tai)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkNASTransport->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UplinkNASTransport_IEs->presenceMask & S1AP_UPLINKNASTRANSPORT_IES_GW_TRANSPORTLAYERADDRESS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GW_TransportLayerAddress,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TransportLayerAddress,
                            &s1AP_UplinkNASTransport_IEs->gW_TransportLayerAddress)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UplinkNASTransport->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_s1setuprequesties(
    S1AP_S1SetupRequest_t *s1AP_S1SetupRequest,
    S1AP_S1SetupRequestIEs_t *s1AP_S1SetupRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_S1SetupRequest, return -1, "Null param");
    d_assert(s1AP_S1SetupRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_S1SetupRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Global_ENB_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Global_ENB_ID,
                        &s1AP_S1SetupRequestIEs->global_ENB_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_S1SetupRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_S1SetupRequestIEs->presenceMask & S1AP_S1SETUPREQUESTIES_ENBNAME_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNBname,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_ENBname,
                            &s1AP_S1SetupRequestIEs->eNBname)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_S1SetupRequest->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SupportedTAs,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SupportedTAs,
                        &s1AP_S1SetupRequestIEs->supportedTAs)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_S1SetupRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_DefaultPagingDRX,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_PagingDRX,
                        &s1AP_S1SetupRequestIEs->defaultPagingDRX)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_S1SetupRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_S1SetupRequestIEs->presenceMask & S1AP_S1SETUPREQUESTIES_CSG_IDLIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_IdList,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CSG_IdList,
                            &s1AP_S1SetupRequestIEs->csG_IdList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_S1SetupRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_enbconfigurationupdatefailureies(
    S1AP_ENBConfigurationUpdateFailure_t *s1AP_ENBConfigurationUpdateFailure,
    S1AP_ENBConfigurationUpdateFailureIEs_t *s1AP_ENBConfigurationUpdateFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ENBConfigurationUpdateFailure, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationUpdateFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ENBConfigurationUpdateFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_ENBConfigurationUpdateFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdateFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_ENBConfigurationUpdateFailureIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TimeToWait,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TimeToWait,
                            &s1AP_ENBConfigurationUpdateFailureIEs->timeToWait)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdateFailure->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_ENBConfigurationUpdateFailureIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_ENBConfigurationUpdateFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdateFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_pathswitchrequesties(
    S1AP_PathSwitchRequest_t *s1AP_PathSwitchRequest,
    S1AP_PathSwitchRequestIEs_t *s1AP_PathSwitchRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_PathSwitchRequest, return -1, "Null param");
    d_assert(s1AP_PathSwitchRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_PathSwitchRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_PathSwitchRequestIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);

    S1AP_E_RABToBeSwitchedDLList_t e_RABToBeSwitchedDLList;

    memset(&e_RABToBeSwitchedDLList, 0, sizeof(S1AP_E_RABToBeSwitchedDLList_t));

    if (s1ap_encode_s1ap_e_rabtobeswitcheddllist(&e_RABToBeSwitchedDLList, &s1AP_PathSwitchRequestIEs->e_RABToBeSwitchedDLList) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedDLList,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_E_RABToBeSwitchedDLList,
                        &e_RABToBeSwitchedDLList)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABToBeSwitchedDLList, &e_RABToBeSwitchedDLList);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SourceMME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_PathSwitchRequestIEs->sourceMME_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_EUTRAN_CGI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_EUTRAN_CGI,
                        &s1AP_PathSwitchRequestIEs->eutran_cgi)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TAI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_TAI,
                        &s1AP_PathSwitchRequestIEs->tai)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UESecurityCapabilities,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_UESecurityCapabilities,
                        &s1AP_PathSwitchRequestIEs->ueSecurityCapabilities)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_PathSwitchRequestIEs->presenceMask & S1AP_PATHSWITCHREQUESTIES_CSG_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_Id,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CSG_Id,
                            &s1AP_PathSwitchRequestIEs->csG_Id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_PathSwitchRequestIEs->presenceMask & S1AP_PATHSWITCHREQUESTIES_CELLACCESSMODE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CellAccessMode,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CellAccessMode,
                            &s1AP_PathSwitchRequestIEs->cellAccessMode)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_PathSwitchRequestIEs->presenceMask & S1AP_PATHSWITCHREQUESTIES_SOURCEMME_GUMMEI_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SourceMME_GUMMEI,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_GUMMEI,
                            &s1AP_PathSwitchRequestIEs->sourceMME_GUMMEI)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_reseties(
    S1AP_Reset_t *s1AP_Reset,
    S1AP_ResetIEs_t *s1AP_ResetIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_Reset, return -1, "Null param");
    d_assert(s1AP_ResetIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ResetIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_ResetIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_Reset->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_ResetType,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ResetType,
                        &s1AP_ResetIEs->resetType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_Reset->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_uecontextreleaserequest_ies(
    S1AP_UEContextReleaseRequest_t *s1AP_UEContextReleaseRequest,
    S1AP_UEContextReleaseRequest_IEs_t *s1AP_UEContextReleaseRequest_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UEContextReleaseRequest, return -1, "Null param");
    d_assert(s1AP_UEContextReleaseRequest_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UEContextReleaseRequest_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UEContextReleaseRequest_IEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UEContextReleaseRequest_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_UEContextReleaseRequest_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UEContextReleaseRequest_IEs->presenceMask & S1AP_UECONTEXTRELEASEREQUEST_IES_GWCONTEXTRELEASEINDICATION_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GWContextReleaseIndication,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_GWContextReleaseIndication,
                            &s1AP_UEContextReleaseRequest_IEs->gwContextReleaseIndication)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextReleaseRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_downlinknonueassociatedlppatransport_ies(
    S1AP_DownlinkNonUEAssociatedLPPaTransport_t *s1AP_DownlinkNonUEAssociatedLPPaTransport,
    S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_DownlinkNonUEAssociatedLPPaTransport, return -1, "Null param");
    d_assert(s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Routing_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Routing_ID,
                        &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->routing_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkNonUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_LPPa_PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_LPPa_PDU,
                        &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkNonUEAssociatedLPPaTransport->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_pagingies(
    S1AP_Paging_t *s1AP_Paging,
    S1AP_PagingIEs_t *s1AP_PagingIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_Paging, return -1, "Null param");
    d_assert(s1AP_PagingIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_PagingIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UEIdentityIndexValue,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_UEIdentityIndexValue,
                        &s1AP_PagingIEs->ueIdentityIndexValue)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_Paging->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UEPagingID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_UEPagingID,
                        &s1AP_PagingIEs->uePagingID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_Paging->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_PagingIEs->presenceMask & S1AP_PAGINGIES_PAGINGDRX_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_pagingDRX,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_PagingDRX,
                            &s1AP_PagingIEs->pagingDRX)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_Paging->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CNDomain,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_CNDomain,
                        &s1AP_PagingIEs->cnDomain)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_Paging->protocolIEs.list, ie);

    S1AP_TAIList_t taiList;

    memset(&taiList, 0, sizeof(S1AP_TAIList_t));

    if (s1ap_encode_s1ap_tailist(&taiList, &s1AP_PagingIEs->taiList) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TAIList,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_TAIList,
                        &taiList)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_Paging->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TAIList, &taiList);

    /* Optional field */
    if (s1AP_PagingIEs->presenceMask & S1AP_PAGINGIES_CSG_IDLIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_IdList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CSG_IdList,
                            &s1AP_PagingIEs->csG_IdList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_Paging->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_PagingIEs->presenceMask & S1AP_PAGINGIES_PAGINGPRIORITY_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_PagingPriority,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_PagingPriority,
                            &s1AP_PagingIEs->pagingPriority)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_Paging->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_enbconfigurationupdateacknowledgeies(
    S1AP_ENBConfigurationUpdateAcknowledge_t *s1AP_ENBConfigurationUpdateAcknowledge,
    S1AP_ENBConfigurationUpdateAcknowledgeIEs_t *s1AP_ENBConfigurationUpdateAcknowledgeIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ENBConfigurationUpdateAcknowledge, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationUpdateAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ENBConfigurationUpdateAcknowledgeIEs\n");

    /* Optional field */
    if (s1AP_ENBConfigurationUpdateAcknowledgeIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_ENBConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdateAcknowledge->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_handovernotifyies(
    S1AP_HandoverNotify_t *s1AP_HandoverNotify,
    S1AP_HandoverNotifyIEs_t *s1AP_HandoverNotifyIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverNotify, return -1, "Null param");
    d_assert(s1AP_HandoverNotifyIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverNotifyIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverNotifyIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverNotify->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_HandoverNotifyIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverNotify->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_EUTRAN_CGI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_EUTRAN_CGI,
                        &s1AP_HandoverNotifyIEs->eutran_cgi)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverNotify->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TAI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_TAI,
                        &s1AP_HandoverNotifyIEs->tai)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverNotify->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_handovercancelacknowledgeies(
    S1AP_HandoverCancelAcknowledge_t *s1AP_HandoverCancelAcknowledge,
    S1AP_HandoverCancelAcknowledgeIEs_t *s1AP_HandoverCancelAcknowledgeIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverCancelAcknowledge, return -1, "Null param");
    d_assert(s1AP_HandoverCancelAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverCancelAcknowledgeIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverCancelAcknowledgeIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCancelAcknowledge->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_HandoverCancelAcknowledgeIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCancelAcknowledge->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverCancelAcknowledgeIEs->presenceMask & S1AP_HANDOVERCANCELACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_HandoverCancelAcknowledgeIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverCancelAcknowledge->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_handovercommandies(
    S1AP_HandoverCommand_t *s1AP_HandoverCommand,
    S1AP_HandoverCommandIEs_t *s1AP_HandoverCommandIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverCommand, return -1, "Null param");
    d_assert(s1AP_HandoverCommandIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverCommandIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverCommandIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_HandoverCommandIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_HandoverType,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_HandoverType,
                        &s1AP_HandoverCommandIEs->handoverType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT) {
        S1AP_E_RABSubjecttoDataForwardingList_t e_RABSubjecttoDataForwardingList;

        memset(&e_RABSubjecttoDataForwardingList, 0, sizeof(S1AP_E_RABSubjecttoDataForwardingList_t));

        if (s1ap_encode_s1ap_e_rabsubjecttodataforwardinglist(&e_RABSubjecttoDataForwardingList, &s1AP_HandoverCommandIEs->e_RABSubjecttoDataForwardingList) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABSubjecttoDataForwardingList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABSubjecttoDataForwardingList,
                            &e_RABSubjecttoDataForwardingList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, &e_RABSubjecttoDataForwardingList);

    }

    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_E_RABTORELEASELISTHOCMD_PRESENT) {
        S1AP_E_RABList_t e_RABtoReleaseListHOCmd;

        memset(&e_RABtoReleaseListHOCmd, 0, sizeof(S1AP_E_RABList_t));

        if (s1ap_encode_s1ap_e_rablist(&e_RABtoReleaseListHOCmd, &s1AP_HandoverCommandIEs->e_RABtoReleaseListHOCmd) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABtoReleaseListHOCmd,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABList,
                            &e_RABtoReleaseListHOCmd)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABtoReleaseListHOCmd);

    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Target_ToSource_TransparentContainer,
                        &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_TARGET_TOSOURCE_TRANSPARENTCONTAINER_SECONDARY_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer_Secondary,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_Target_ToSource_TransparentContainer,
                            &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer_Secondary)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverCommandIEs->presenceMask & S1AP_HANDOVERCOMMANDIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_HandoverCommandIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverCommand->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_writereplacewarningresponseies(
    S1AP_WriteReplaceWarningResponse_t *s1AP_WriteReplaceWarningResponse,
    S1AP_WriteReplaceWarningResponseIEs_t *s1AP_WriteReplaceWarningResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_WriteReplaceWarningResponse, return -1, "Null param");
    d_assert(s1AP_WriteReplaceWarningResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_WriteReplaceWarningResponseIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MessageIdentifier,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MessageIdentifier,
                        &s1AP_WriteReplaceWarningResponseIEs->messageIdentifier)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SerialNumber,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SerialNumber,
                        &s1AP_WriteReplaceWarningResponseIEs->serialNumber)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningResponse->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_WriteReplaceWarningResponseIEs->presenceMask & S1AP_WRITEREPLACEWARNINGRESPONSEIES_BROADCASTCOMPLETEDAREALIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_BroadcastCompletedAreaList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_BroadcastCompletedAreaList,
                            &s1AP_WriteReplaceWarningResponseIEs->broadcastCompletedAreaList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningResponse->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_WriteReplaceWarningResponseIEs->presenceMask & S1AP_WRITEREPLACEWARNINGRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_WriteReplaceWarningResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_WriteReplaceWarningResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_handovercancelies(
    S1AP_HandoverCancel_t *s1AP_HandoverCancel,
    S1AP_HandoverCancelIEs_t *s1AP_HandoverCancelIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverCancel, return -1, "Null param");
    d_assert(s1AP_HandoverCancelIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverCancelIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverCancelIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCancel->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_HandoverCancelIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCancel->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_HandoverCancelIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverCancel->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_handoverpreparationfailureies(
    S1AP_HandoverPreparationFailure_t *s1AP_HandoverPreparationFailure,
    S1AP_HandoverPreparationFailureIEs_t *s1AP_HandoverPreparationFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverPreparationFailure, return -1, "Null param");
    d_assert(s1AP_HandoverPreparationFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverPreparationFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverPreparationFailureIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverPreparationFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_HandoverPreparationFailureIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverPreparationFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_HandoverPreparationFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverPreparationFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverPreparationFailureIEs->presenceMask & S1AP_HANDOVERPREPARATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_HandoverPreparationFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverPreparationFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_e_rabmodifyrequesties(
    S1AP_E_RABModifyRequest_t *s1AP_E_RABModifyRequest,
    S1AP_E_RABModifyRequestIEs_t *s1AP_E_RABModifyRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABModifyRequest, return -1, "Null param");
    d_assert(s1AP_E_RABModifyRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_E_RABModifyRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_E_RABModifyRequestIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABModifyRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_E_RABModifyRequestIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABModifyRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_E_RABModifyRequestIEs->presenceMask & S1AP_E_RABMODIFYREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_UEAggregateMaximumBitrate,
                            &s1AP_E_RABModifyRequestIEs->uEaggregateMaximumBitrate)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABModifyRequest->protocolIEs.list, ie);
    }

    S1AP_E_RABToBeModifiedListBearerModReq_t e_RABToBeModifiedListBearerModReq;

    memset(&e_RABToBeModifiedListBearerModReq, 0, sizeof(S1AP_E_RABToBeModifiedListBearerModReq_t));

    if (s1ap_encode_s1ap_e_rabtobemodifiedlistbearermodreq(&e_RABToBeModifiedListBearerModReq, &s1AP_E_RABModifyRequestIEs->e_RABToBeModifiedListBearerModReq) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeModifiedListBearerModReq,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_E_RABToBeModifiedListBearerModReq,
                        &e_RABToBeModifiedListBearerModReq)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABModifyRequest->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABToBeModifiedListBearerModReq, &e_RABToBeModifiedListBearerModReq);

    return 0;
}

int s1ap_encode_s1ap_handoverrequestacknowledgeies(
    S1AP_HandoverRequestAcknowledge_t *s1AP_HandoverRequestAcknowledge,
    S1AP_HandoverRequestAcknowledgeIEs_t *s1AP_HandoverRequestAcknowledgeIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverRequestAcknowledge, return -1, "Null param");
    d_assert(s1AP_HandoverRequestAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverRequestAcknowledgeIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverRequestAcknowledgeIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequestAcknowledge->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_HandoverRequestAcknowledgeIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequestAcknowledge->protocolIEs.list, ie);

    S1AP_E_RABAdmittedList_t e_RABAdmittedList;

    memset(&e_RABAdmittedList, 0, sizeof(S1AP_E_RABAdmittedList_t));

    if (s1ap_encode_s1ap_e_rabadmittedlist(&e_RABAdmittedList, &s1AP_HandoverRequestAcknowledgeIEs->e_RABAdmittedList) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABAdmittedList,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_E_RABAdmittedList,
                        &e_RABAdmittedList)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequestAcknowledge->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABAdmittedList, &e_RABAdmittedList);

    /* Optional field */
    if (s1AP_HandoverRequestAcknowledgeIEs->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_E_RABFAILEDTOSETUPLISTHOREQACK_PRESENT) {
        S1AP_E_RABFailedtoSetupListHOReqAck_t e_RABFailedToSetupListHOReqAck;

        memset(&e_RABFailedToSetupListHOReqAck, 0, sizeof(S1AP_E_RABFailedtoSetupListHOReqAck_t));

        if (s1ap_encode_s1ap_e_rabfailedtosetuplisthoreqack(&e_RABFailedToSetupListHOReqAck, &s1AP_HandoverRequestAcknowledgeIEs->e_RABFailedToSetupListHOReqAck) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListHOReqAck,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABFailedtoSetupListHOReqAck,
                            &e_RABFailedToSetupListHOReqAck)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequestAcknowledge->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABFailedtoSetupListHOReqAck, &e_RABFailedToSetupListHOReqAck);

    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Target_ToSource_TransparentContainer,
                        &s1AP_HandoverRequestAcknowledgeIEs->target_ToSource_TransparentContainer)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequestAcknowledge->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverRequestAcknowledgeIEs->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CSG_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_Id,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CSG_Id,
                            &s1AP_HandoverRequestAcknowledgeIEs->csG_Id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequestAcknowledge->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestAcknowledgeIEs->presenceMask & S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_HandoverRequestAcknowledgeIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequestAcknowledge->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_downlinknastransport_ies(
    S1AP_DownlinkNASTransport_t *s1AP_DownlinkNASTransport,
    S1AP_DownlinkNASTransport_IEs_t *s1AP_DownlinkNASTransport_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_DownlinkNASTransport, return -1, "Null param");
    d_assert(s1AP_DownlinkNASTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_DownlinkNASTransport_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_DownlinkNASTransport_IEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkNASTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_DownlinkNASTransport_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkNASTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_NAS_PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_NAS_PDU,
                        &s1AP_DownlinkNASTransport_IEs->nas_pdu)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkNASTransport->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_DownlinkNASTransport_IEs->presenceMask & S1AP_DOWNLINKNASTRANSPORT_IES_HANDOVERRESTRICTIONLIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_HandoverRestrictionList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_HandoverRestrictionList,
                            &s1AP_DownlinkNASTransport_IEs->handoverRestrictionList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_DownlinkNASTransport->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_DownlinkNASTransport_IEs->presenceMask & S1AP_DOWNLINKNASTRANSPORT_IES_SUBSCRIBERPROFILEIDFORRFP_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SubscriberProfileIDforRFP,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_SubscriberProfileIDforRFP,
                            &s1AP_DownlinkNASTransport_IEs->subscriberProfileIDforRFP)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_DownlinkNASTransport->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_e_rabreleaseindicationies(
    S1AP_E_RABReleaseIndication_t *s1AP_E_RABReleaseIndication,
    S1AP_E_RABReleaseIndicationIEs_t *s1AP_E_RABReleaseIndicationIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABReleaseIndication, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_E_RABReleaseIndicationIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_E_RABReleaseIndicationIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_E_RABReleaseIndicationIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseIndication->protocolIEs.list, ie);

    S1AP_E_RABList_t e_RABReleasedList;

    memset(&e_RABReleasedList, 0, sizeof(S1AP_E_RABList_t));

    if (s1ap_encode_s1ap_e_rablist(&e_RABReleasedList, &s1AP_E_RABReleaseIndicationIEs->e_RABReleasedList) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABReleasedList,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_E_RABList,
                        &e_RABReleasedList)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseIndication->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABReleasedList);

    return 0;
}

int s1ap_encode_s1ap_pathswitchrequestacknowledgeies(
    S1AP_PathSwitchRequestAcknowledge_t *s1AP_PathSwitchRequestAcknowledge,
    S1AP_PathSwitchRequestAcknowledgeIEs_t *s1AP_PathSwitchRequestAcknowledgeIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_PathSwitchRequestAcknowledge, return -1, "Null param");
    d_assert(s1AP_PathSwitchRequestAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_PathSwitchRequestAcknowledgeIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_PathSwitchRequestAcknowledgeIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_UEAggregateMaximumBitrate,
                            &s1AP_PathSwitchRequestAcknowledgeIEs->uEaggregateMaximumBitrate)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBESWITCHEDULLIST_PRESENT) {
        S1AP_E_RABToBeSwitchedULList_t e_RABToBeSwitchedULList;

        memset(&e_RABToBeSwitchedULList, 0, sizeof(S1AP_E_RABToBeSwitchedULList_t));

        if (s1ap_encode_s1ap_e_rabtobeswitchedullist(&e_RABToBeSwitchedULList, &s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeSwitchedULList) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedULList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABToBeSwitchedULList,
                            &e_RABToBeSwitchedULList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABToBeSwitchedULList, &e_RABToBeSwitchedULList);

    }

    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBERELEASEDLIST_PRESENT) {
        S1AP_E_RABList_t e_RABToBeReleasedList;

        memset(&e_RABToBeReleasedList, 0, sizeof(S1AP_E_RABList_t));

        if (s1ap_encode_s1ap_e_rablist(&e_RABToBeReleasedList, &s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeReleasedList) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeReleasedList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABList,
                            &e_RABToBeReleasedList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABToBeReleasedList);

    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SecurityContext,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SecurityContext,
                        &s1AP_PathSwitchRequestAcknowledgeIEs->securityContext)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_PathSwitchRequestAcknowledgeIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_PathSwitchRequestAcknowledgeIEs->presenceMask & S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_MME_UE_S1AP_ID_2_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID_2,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MME_UE_S1AP_ID,
                            &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id_2)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestAcknowledge->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_nasnondeliveryindication_ies(
    S1AP_NASNonDeliveryIndication_t *s1AP_NASNonDeliveryIndication,
    S1AP_NASNonDeliveryIndication_IEs_t *s1AP_NASNonDeliveryIndication_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_NASNonDeliveryIndication, return -1, "Null param");
    d_assert(s1AP_NASNonDeliveryIndication_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_NASNonDeliveryIndication_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_NASNonDeliveryIndication_IEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_NASNonDeliveryIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_NASNonDeliveryIndication_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_NASNonDeliveryIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_NAS_PDU,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_NAS_PDU,
                        &s1AP_NASNonDeliveryIndication_IEs->nas_pdu)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_NASNonDeliveryIndication->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_NASNonDeliveryIndication_IEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_NASNonDeliveryIndication->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_initialcontextsetuprequesties(
    S1AP_InitialContextSetupRequest_t *s1AP_InitialContextSetupRequest,
    S1AP_InitialContextSetupRequestIEs_t *s1AP_InitialContextSetupRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_InitialContextSetupRequest, return -1, "Null param");
    d_assert(s1AP_InitialContextSetupRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_InitialContextSetupRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_InitialContextSetupRequestIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_UEAggregateMaximumBitrate,
                        &s1AP_InitialContextSetupRequestIEs->uEaggregateMaximumBitrate)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);

    S1AP_E_RABToBeSetupListCtxtSUReq_t e_RABToBeSetupListCtxtSUReq;

    memset(&e_RABToBeSetupListCtxtSUReq, 0, sizeof(S1AP_E_RABToBeSetupListCtxtSUReq_t));

    if (s1ap_encode_s1ap_e_rabtobesetuplistctxtsureq(&e_RABToBeSetupListCtxtSUReq, &s1AP_InitialContextSetupRequestIEs->e_RABToBeSetupListCtxtSUReq) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSetupListCtxtSUReq,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_E_RABToBeSetupListCtxtSUReq,
                        &e_RABToBeSetupListCtxtSUReq)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABToBeSetupListCtxtSUReq, &e_RABToBeSetupListCtxtSUReq);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UESecurityCapabilities,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_UESecurityCapabilities,
                        &s1AP_InitialContextSetupRequestIEs->ueSecurityCapabilities)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SecurityKey,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SecurityKey,
                        &s1AP_InitialContextSetupRequestIEs->securityKey)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_TRACEACTIVATION_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TraceActivation,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TraceActivation,
                            &s1AP_InitialContextSetupRequestIEs->traceActivation)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_HandoverRestrictionList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_HandoverRestrictionList,
                            &s1AP_InitialContextSetupRequestIEs->handoverRestrictionList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_UERADIOCAPABILITY_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UERadioCapability,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_UERadioCapability,
                            &s1AP_InitialContextSetupRequestIEs->ueRadioCapability)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SubscriberProfileIDforRFP,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_SubscriberProfileIDforRFP,
                            &s1AP_InitialContextSetupRequestIEs->subscriberProfileIDforRFP)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_CSFALLBACKINDICATOR_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSFallbackIndicator,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CSFallbackIndicator,
                            &s1AP_InitialContextSetupRequestIEs->csFallbackIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SRVCCOperationPossible,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_SRVCCOperationPossible,
                            &s1AP_InitialContextSetupRequestIEs->srvccOperationPossible)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSGMembershipStatus,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CSGMembershipStatus,
                            &s1AP_InitialContextSetupRequestIEs->csgMembershipStatus)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_REGISTEREDLAI_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RegisteredLAI,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_LAI,
                            &s1AP_InitialContextSetupRequestIEs->registeredLAI)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_GUMMEI_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GUMMEI_ID,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_GUMMEI,
                            &s1AP_InitialContextSetupRequestIEs->gummei_id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_MME_UE_S1AP_ID_2_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID_2,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MME_UE_S1AP_ID,
                            &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id_2)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialContextSetupRequestIEs->presenceMask & S1AP_INITIALCONTEXTSETUPREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_ManagementBasedMDTAllowed,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_ManagementBasedMDTAllowed,
                            &s1AP_InitialContextSetupRequestIEs->managementBasedMDTAllowed)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_s1setupresponseies(
    S1AP_S1SetupResponse_t *s1AP_S1SetupResponse,
    S1AP_S1SetupResponseIEs_t *s1AP_S1SetupResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_S1SetupResponse, return -1, "Null param");
    d_assert(s1AP_S1SetupResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_S1SetupResponseIEs\n");

    /* Optional field */
    if (s1AP_S1SetupResponseIEs->presenceMask & S1AP_S1SETUPRESPONSEIES_MMENAME_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MMEname,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MMEname,
                            &s1AP_S1SetupResponseIEs->mmEname)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_S1SetupResponse->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_ServedGUMMEIs,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ServedGUMMEIs,
                        &s1AP_S1SetupResponseIEs->servedGUMMEIs)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_S1SetupResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RelativeMMECapacity,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_RelativeMMECapacity,
                        &s1AP_S1SetupResponseIEs->relativeMMECapacity)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_S1SetupResponse->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_S1SetupResponseIEs->presenceMask & S1AP_S1SETUPRESPONSEIES_MMERELAYSUPPORTINDICATOR_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MMERelaySupportIndicator,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MMERelaySupportIndicator,
                            &s1AP_S1SetupResponseIEs->mmeRelaySupportIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_S1SetupResponse->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_S1SetupResponseIEs->presenceMask & S1AP_S1SETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_S1SetupResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_S1SetupResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_mmeconfigurationupdatefailureies(
    S1AP_MMEConfigurationUpdateFailure_t *s1AP_MMEConfigurationUpdateFailure,
    S1AP_MMEConfigurationUpdateFailureIEs_t *s1AP_MMEConfigurationUpdateFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_MMEConfigurationUpdateFailure, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationUpdateFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_MMEConfigurationUpdateFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_MMEConfigurationUpdateFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationUpdateFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_MMEConfigurationUpdateFailureIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TimeToWait,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TimeToWait,
                            &s1AP_MMEConfigurationUpdateFailureIEs->timeToWait)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationUpdateFailure->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_MMEConfigurationUpdateFailureIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_MMEConfigurationUpdateFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationUpdateFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_initialcontextsetupresponseies(
    S1AP_InitialContextSetupResponse_t *s1AP_InitialContextSetupResponse,
    S1AP_InitialContextSetupResponseIEs_t *s1AP_InitialContextSetupResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_InitialContextSetupResponse, return -1, "Null param");
    d_assert(s1AP_InitialContextSetupResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_InitialContextSetupResponseIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_InitialContextSetupResponseIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_InitialContextSetupResponseIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupResponse->protocolIEs.list, ie);

    S1AP_E_RABSetupListCtxtSURes_t e_RABSetupListCtxtSURes;

    memset(&e_RABSetupListCtxtSURes, 0, sizeof(S1AP_E_RABSetupListCtxtSURes_t));

    if (s1ap_encode_s1ap_e_rabsetuplistctxtsures(&e_RABSetupListCtxtSURes, &s1AP_InitialContextSetupResponseIEs->e_RABSetupListCtxtSURes) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABSetupListCtxtSURes,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_E_RABSetupListCtxtSURes,
                        &e_RABSetupListCtxtSURes)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupResponse->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSetupListCtxtSURes, &e_RABSetupListCtxtSURes);

    /* Optional field */
    if (s1AP_InitialContextSetupResponseIEs->presenceMask & S1AP_INITIALCONTEXTSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTCTXTSURES_PRESENT) {
        S1AP_E_RABList_t e_RABFailedToSetupListCtxtSURes;

        memset(&e_RABFailedToSetupListCtxtSURes, 0, sizeof(S1AP_E_RABList_t));

        if (s1ap_encode_s1ap_e_rablist(&e_RABFailedToSetupListCtxtSURes, &s1AP_InitialContextSetupResponseIEs->e_RABFailedToSetupListCtxtSURes) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListCtxtSURes,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABList,
                            &e_RABFailedToSetupListCtxtSURes)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupResponse->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABFailedToSetupListCtxtSURes);

    }

    /* Optional field */
    if (s1AP_InitialContextSetupResponseIEs->presenceMask & S1AP_INITIALCONTEXTSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_InitialContextSetupResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_enbconfigurationupdateies(
    S1AP_ENBConfigurationUpdate_t *s1AP_ENBConfigurationUpdate,
    S1AP_ENBConfigurationUpdateIEs_t *s1AP_ENBConfigurationUpdateIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ENBConfigurationUpdate, return -1, "Null param");
    d_assert(s1AP_ENBConfigurationUpdateIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ENBConfigurationUpdateIEs\n");

    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_ENBNAME_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNBname,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_ENBname,
                            &s1AP_ENBConfigurationUpdateIEs->eNBname)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdate->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_SUPPORTEDTAS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SupportedTAs,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_SupportedTAs,
                            &s1AP_ENBConfigurationUpdateIEs->supportedTAs)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdate->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_CSG_IDLIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_IdList,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CSG_IdList,
                            &s1AP_ENBConfigurationUpdateIEs->csG_IdList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdate->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_ENBConfigurationUpdateIEs->presenceMask & S1AP_ENBCONFIGURATIONUPDATEIES_DEFAULTPAGINGDRX_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_DefaultPagingDRX,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_PagingDRX,
                            &s1AP_ENBConfigurationUpdateIEs->defaultPagingDRX)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ENBConfigurationUpdate->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_locationreporties(
    S1AP_LocationReport_t *s1AP_LocationReport,
    S1AP_LocationReportIEs_t *s1AP_LocationReportIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_LocationReport, return -1, "Null param");
    d_assert(s1AP_LocationReportIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_LocationReportIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_LocationReportIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_LocationReportIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_EUTRAN_CGI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_EUTRAN_CGI,
                        &s1AP_LocationReportIEs->eutran_cgi)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TAI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_TAI,
                        &s1AP_LocationReportIEs->tai)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RequestType,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_RequestType,
                        &s1AP_LocationReportIEs->requestType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_LocationReport->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_uplinkueassociatedlppatransport_ies(
    S1AP_UplinkUEAssociatedLPPaTransport_t *s1AP_UplinkUEAssociatedLPPaTransport,
    S1AP_UplinkUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkUEAssociatedLPPaTransport_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UplinkUEAssociatedLPPaTransport, return -1, "Null param");
    d_assert(s1AP_UplinkUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UplinkUEAssociatedLPPaTransport_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UplinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UplinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Routing_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Routing_ID,
                        &s1AP_UplinkUEAssociatedLPPaTransport_IEs->routing_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_LPPa_PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_LPPa_PDU,
                        &s1AP_UplinkUEAssociatedLPPaTransport_IEs->lpPa_PDU)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkUEAssociatedLPPaTransport->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_uecontextmodificationresponseies(
    S1AP_UEContextModificationResponse_t *s1AP_UEContextModificationResponse,
    S1AP_UEContextModificationResponseIEs_t *s1AP_UEContextModificationResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UEContextModificationResponse, return -1, "Null param");
    d_assert(s1AP_UEContextModificationResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UEContextModificationResponseIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UEContextModificationResponseIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextModificationResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UEContextModificationResponseIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextModificationResponse->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UEContextModificationResponseIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_UEContextModificationResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_e_rabreleaseresponseies(
    S1AP_E_RABReleaseResponse_t *s1AP_E_RABReleaseResponse,
    S1AP_E_RABReleaseResponseIEs_t *s1AP_E_RABReleaseResponseIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABReleaseResponse, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseResponseIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_E_RABReleaseResponseIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_E_RABReleaseResponseIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseResponse->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_E_RABReleaseResponseIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseResponse->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_E_RABReleaseResponseIEs->presenceMask & S1AP_E_RABRELEASERESPONSEIES_E_RABRELEASELISTBEARERRELCOMP_PRESENT) {
        S1AP_E_RABReleaseListBearerRelComp_t e_RABReleaseListBearerRelComp;

        memset(&e_RABReleaseListBearerRelComp, 0, sizeof(S1AP_E_RABReleaseListBearerRelComp_t));

        if (s1ap_encode_s1ap_e_rabreleaselistbearerrelcomp(&e_RABReleaseListBearerRelComp, &s1AP_E_RABReleaseResponseIEs->e_RABReleaseListBearerRelComp) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABReleaseListBearerRelComp,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABReleaseListBearerRelComp,
                            &e_RABReleaseListBearerRelComp)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseResponse->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABReleaseListBearerRelComp, &e_RABReleaseListBearerRelComp);

    }

    /* Optional field */
    if (s1AP_E_RABReleaseResponseIEs->presenceMask & S1AP_E_RABRELEASERESPONSEIES_E_RABFAILEDTORELEASELIST_PRESENT) {
        S1AP_E_RABList_t e_RABFailedToReleaseList;

        memset(&e_RABFailedToReleaseList, 0, sizeof(S1AP_E_RABList_t));

        if (s1ap_encode_s1ap_e_rablist(&e_RABFailedToReleaseList, &s1AP_E_RABReleaseResponseIEs->e_RABFailedToReleaseList) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABFailedToReleaseList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABList,
                            &e_RABFailedToReleaseList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseResponse->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABFailedToReleaseList);

    }

    /* Optional field */
    if (s1AP_E_RABReleaseResponseIEs->presenceMask & S1AP_E_RABRELEASERESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_E_RABReleaseResponseIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseResponse->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_handoverrequesties(
    S1AP_HandoverRequest_t *s1AP_HandoverRequest,
    S1AP_HandoverRequestIEs_t *s1AP_HandoverRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverRequest, return -1, "Null param");
    d_assert(s1AP_HandoverRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverRequestIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_HandoverType,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_HandoverType,
                        &s1AP_HandoverRequestIEs->handoverType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_HandoverRequestIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_UEAggregateMaximumBitrate,
                        &s1AP_HandoverRequestIEs->uEaggregateMaximumBitrate)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    S1AP_E_RABToBeSetupListHOReq_t e_RABToBeSetupListHOReq;

    memset(&e_RABToBeSetupListHOReq, 0, sizeof(S1AP_E_RABToBeSetupListHOReq_t));

    if (s1ap_encode_s1ap_e_rabtobesetuplisthoreq(&e_RABToBeSetupListHOReq, &s1AP_HandoverRequestIEs->e_RABToBeSetupListHOReq) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSetupListHOReq,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_E_RABToBeSetupListHOReq,
                        &e_RABToBeSetupListHOReq)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABToBeSetupListHOReq, &e_RABToBeSetupListHOReq);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Source_ToTarget_TransparentContainer,
                        &s1AP_HandoverRequestIEs->source_ToTarget_TransparentContainer)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UESecurityCapabilities,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_UESecurityCapabilities,
                        &s1AP_HandoverRequestIEs->ueSecurityCapabilities)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_HandoverRestrictionList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_HandoverRestrictionList,
                            &s1AP_HandoverRequestIEs->handoverRestrictionList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_TRACEACTIVATION_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TraceActivation,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TraceActivation,
                            &s1AP_HandoverRequestIEs->traceActivation)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_REQUESTTYPE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RequestType,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_RequestType,
                            &s1AP_HandoverRequestIEs->requestType)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SRVCCOperationPossible,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_SRVCCOperationPossible,
                            &s1AP_HandoverRequestIEs->srvccOperationPossible)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SecurityContext,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SecurityContext,
                        &s1AP_HandoverRequestIEs->securityContext)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_CSG_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_Id,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CSG_Id,
                            &s1AP_HandoverRequestIEs->csG_Id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSGMembershipStatus,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CSGMembershipStatus,
                            &s1AP_HandoverRequestIEs->csgMembershipStatus)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_GUMMEI_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GUMMEI_ID,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_GUMMEI,
                            &s1AP_HandoverRequestIEs->gummei_id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_MME_UE_S1AP_ID_2_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID_2,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MME_UE_S1AP_ID,
                            &s1AP_HandoverRequestIEs->mme_ue_s1ap_id_2)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequestIEs->presenceMask & S1AP_HANDOVERREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_ManagementBasedMDTAllowed,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_ManagementBasedMDTAllowed,
                            &s1AP_HandoverRequestIEs->managementBasedMDTAllowed)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_handoverrequiredies(
    S1AP_HandoverRequired_t *s1AP_HandoverRequired,
    S1AP_HandoverRequiredIEs_t *s1AP_HandoverRequiredIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_HandoverRequired, return -1, "Null param");
    d_assert(s1AP_HandoverRequiredIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_HandoverRequiredIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_HandoverRequiredIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_HandoverRequiredIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_HandoverType,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_HandoverType,
                        &s1AP_HandoverRequiredIEs->handoverType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_HandoverRequiredIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TargetID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_TargetID,
                        &s1AP_HandoverRequiredIEs->targetID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_DIRECT_FORWARDING_PATH_AVAILABILITY_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Direct_Forwarding_Path_Availability,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_Direct_Forwarding_Path_Availability,
                            &s1AP_HandoverRequiredIEs->direct_Forwarding_Path_Availability)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_SRVCCHOINDICATION_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SRVCCHOIndication,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_SRVCCHOIndication,
                            &s1AP_HandoverRequiredIEs->srvcchoIndication)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Source_ToTarget_TransparentContainer,
                        &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_SOURCE_TOTARGET_TRANSPARENTCONTAINER_SECONDARY_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer_Secondary,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_Source_ToTarget_TransparentContainer,
                            &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer_Secondary)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    /* Conditional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_MSCLASSMARK2_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MSClassmark2,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_MSClassmark2,
                            &s1AP_HandoverRequiredIEs->msClassmark2)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    /* Conditional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_MSCLASSMARK3_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MSClassmark3,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MSClassmark3,
                            &s1AP_HandoverRequiredIEs->msClassmark3)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_CSG_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_Id,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CSG_Id,
                            &s1AP_HandoverRequiredIEs->csG_Id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_CELLACCESSMODE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CellAccessMode,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CellAccessMode,
                            &s1AP_HandoverRequiredIEs->cellAccessMode)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_HandoverRequiredIEs->presenceMask & S1AP_HANDOVERREQUIREDIES_PS_SERVICENOTAVAILABLE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_PS_ServiceNotAvailable,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_PS_ServiceNotAvailable,
                            &s1AP_HandoverRequiredIEs->pS_ServiceNotAvailable)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_HandoverRequired->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_mmeconfigurationupdateacknowledgeies(
    S1AP_MMEConfigurationUpdateAcknowledge_t *s1AP_MMEConfigurationUpdateAcknowledge,
    S1AP_MMEConfigurationUpdateAcknowledgeIEs_t *s1AP_MMEConfigurationUpdateAcknowledgeIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_MMEConfigurationUpdateAcknowledge, return -1, "Null param");
    d_assert(s1AP_MMEConfigurationUpdateAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_MMEConfigurationUpdateAcknowledgeIEs\n");

    /* Optional field */
    if (s1AP_MMEConfigurationUpdateAcknowledgeIEs->presenceMask & S1AP_MMECONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_MMEConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_MMEConfigurationUpdateAcknowledge->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_initialuemessage_ies(
    S1AP_InitialUEMessage_t *s1AP_InitialUEMessage,
    S1AP_InitialUEMessage_IEs_t *s1AP_InitialUEMessage_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_InitialUEMessage, return -1, "Null param");
    d_assert(s1AP_InitialUEMessage_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_InitialUEMessage_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_InitialUEMessage_IEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_NAS_PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_NAS_PDU,
                        &s1AP_InitialUEMessage_IEs->nas_pdu)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TAI,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_TAI,
                        &s1AP_InitialUEMessage_IEs->tai)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_EUTRAN_CGI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_EUTRAN_CGI,
                        &s1AP_InitialUEMessage_IEs->eutran_cgi)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RRC_Establishment_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_RRC_Establishment_Cause,
                        &s1AP_InitialUEMessage_IEs->rrC_Establishment_Cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_S_TMSI_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_S_TMSI,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_S_TMSI,
                            &s1AP_InitialUEMessage_IEs->s_tmsi)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_CSG_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CSG_Id,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CSG_Id,
                            &s1AP_InitialUEMessage_IEs->csG_Id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_GUMMEI_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GUMMEI_ID,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_GUMMEI,
                            &s1AP_InitialUEMessage_IEs->gummei_id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_CELLACCESSMODE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CellAccessMode,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_CellAccessMode,
                            &s1AP_InitialUEMessage_IEs->cellAccessMode)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_GW_TRANSPORTLAYERADDRESS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GW_TransportLayerAddress,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TransportLayerAddress,
                            &s1AP_InitialUEMessage_IEs->gW_TransportLayerAddress)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_RELAYNODE_INDICATOR_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_RelayNode_Indicator,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_RelayNode_Indicator,
                            &s1AP_InitialUEMessage_IEs->relayNode_Indicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_InitialUEMessage_IEs->presenceMask & S1AP_INITIALUEMESSAGE_IES_GUMMEITYPE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GUMMEIType,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_GUMMEIType,
                            &s1AP_InitialUEMessage_IEs->gummeiType)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialUEMessage->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_celltraffictraceies(
    S1AP_CellTrafficTrace_t *s1AP_CellTrafficTrace,
    S1AP_CellTrafficTraceIEs_t *s1AP_CellTrafficTraceIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_CellTrafficTrace, return -1, "Null param");
    d_assert(s1AP_CellTrafficTraceIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_CellTrafficTraceIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_CellTrafficTraceIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_CellTrafficTrace->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_CellTrafficTraceIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_CellTrafficTrace->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_UTRAN_Trace_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_E_UTRAN_Trace_ID,
                        &s1AP_CellTrafficTraceIEs->e_UTRAN_Trace_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_CellTrafficTrace->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_EUTRAN_CGI,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_EUTRAN_CGI,
                        &s1AP_CellTrafficTraceIEs->eutran_cgi)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_CellTrafficTrace->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TraceCollectionEntityIPAddress,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_TransportLayerAddress,
                        &s1AP_CellTrafficTraceIEs->traceCollectionEntityIPAddress)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_CellTrafficTrace->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_CellTrafficTraceIEs->presenceMask & S1AP_CELLTRAFFICTRACEIES_PRIVACYINDICATOR_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_PrivacyIndicator,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_PrivacyIndicator,
                            &s1AP_CellTrafficTraceIEs->privacyIndicator)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_CellTrafficTrace->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_enbstatustransferies(
    S1AP_ENBStatusTransfer_t *s1AP_ENBStatusTransfer,
    S1AP_ENBStatusTransferIEs_t *s1AP_ENBStatusTransferIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ENBStatusTransfer, return -1, "Null param");
    d_assert(s1AP_ENBStatusTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ENBStatusTransferIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_ENBStatusTransferIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_ENBStatusTransfer->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_ENBStatusTransferIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_ENBStatusTransfer->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_StatusTransfer_TransparentContainer,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer,
                        &s1AP_ENBStatusTransferIEs->eNB_StatusTransfer_TransparentContainer)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_ENBStatusTransfer->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_uecontextmodificationfailureies(
    S1AP_UEContextModificationFailure_t *s1AP_UEContextModificationFailure,
    S1AP_UEContextModificationFailureIEs_t *s1AP_UEContextModificationFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UEContextModificationFailure, return -1, "Null param");
    d_assert(s1AP_UEContextModificationFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UEContextModificationFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UEContextModificationFailureIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextModificationFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UEContextModificationFailureIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextModificationFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_UEContextModificationFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UEContextModificationFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UEContextModificationFailureIEs->presenceMask & S1AP_UECONTEXTMODIFICATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_UEContextModificationFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UEContextModificationFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_mmedirectinformationtransferies(
    S1AP_MMEDirectInformationTransfer_t *s1AP_MMEDirectInformationTransfer,
    S1AP_MMEDirectInformationTransferIEs_t *s1AP_MMEDirectInformationTransferIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_MMEDirectInformationTransfer, return -1, "Null param");
    d_assert(s1AP_MMEDirectInformationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_MMEDirectInformationTransferIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeMDT,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Inter_SystemInformationTransferType,
                        &s1AP_MMEDirectInformationTransferIEs->inter_SystemInformationTransferTypeMDT)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_MMEDirectInformationTransfer->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_s1setupfailureies(
    S1AP_S1SetupFailure_t *s1AP_S1SetupFailure,
    S1AP_S1SetupFailureIEs_t *s1AP_S1SetupFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_S1SetupFailure, return -1, "Null param");
    d_assert(s1AP_S1SetupFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_S1SetupFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_S1SetupFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_S1SetupFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_S1SetupFailureIEs->presenceMask & S1AP_S1SETUPFAILUREIES_TIMETOWAIT_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TimeToWait,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TimeToWait,
                            &s1AP_S1SetupFailureIEs->timeToWait)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_S1SetupFailure->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_S1SetupFailureIEs->presenceMask & S1AP_S1SETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_S1SetupFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_S1SetupFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_downlinks1cdma2000tunnelingies(
    S1AP_DownlinkS1cdma2000tunneling_t *s1AP_DownlinkS1cdma2000tunneling,
    S1AP_DownlinkS1cdma2000tunnelingIEs_t *s1AP_DownlinkS1cdma2000tunnelingIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_DownlinkS1cdma2000tunneling, return -1, "Null param");
    d_assert(s1AP_DownlinkS1cdma2000tunnelingIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_DownlinkS1cdma2000tunnelingIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_DownlinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkS1cdma2000tunneling->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_DownlinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkS1cdma2000tunneling->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_DownlinkS1cdma2000tunnelingIEs->presenceMask & S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT) {
        S1AP_E_RABSubjecttoDataForwardingList_t e_RABSubjecttoDataForwardingList;

        memset(&e_RABSubjecttoDataForwardingList, 0, sizeof(S1AP_E_RABSubjecttoDataForwardingList_t));

        if (s1ap_encode_s1ap_e_rabsubjecttodataforwardinglist(&e_RABSubjecttoDataForwardingList, &s1AP_DownlinkS1cdma2000tunnelingIEs->e_RABSubjecttoDataForwardingList) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABSubjecttoDataForwardingList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABSubjecttoDataForwardingList,
                            &e_RABSubjecttoDataForwardingList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_DownlinkS1cdma2000tunneling->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABSubjecttoDataForwardingList, &e_RABSubjecttoDataForwardingList);

    }

    /* Optional field */
    if (s1AP_DownlinkS1cdma2000tunnelingIEs->presenceMask & S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_CDMA2000HOSTATUS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000HOStatus,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_Cdma2000HOStatus,
                            &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000HOStatus)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_DownlinkS1cdma2000tunneling->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000RATType,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Cdma2000RATType,
                        &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000RATType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkS1cdma2000tunneling->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Cdma2000PDU,
                        &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000PDU)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DownlinkS1cdma2000tunneling->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_e_rabreleasecommandies(
    S1AP_E_RABReleaseCommand_t *s1AP_E_RABReleaseCommand,
    S1AP_E_RABReleaseCommandIEs_t *s1AP_E_RABReleaseCommandIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABReleaseCommand, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseCommandIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_E_RABReleaseCommandIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_E_RABReleaseCommandIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseCommand->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_E_RABReleaseCommandIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseCommand->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_E_RABReleaseCommandIEs->presenceMask & S1AP_E_RABRELEASECOMMANDIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_UEAggregateMaximumBitrate,
                            &s1AP_E_RABReleaseCommandIEs->uEaggregateMaximumBitrate)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseCommand->protocolIEs.list, ie);
    }

    S1AP_E_RABList_t e_RABToBeReleasedList;

    memset(&e_RABToBeReleasedList, 0, sizeof(S1AP_E_RABList_t));

    if (s1ap_encode_s1ap_e_rablist(&e_RABToBeReleasedList, &s1AP_E_RABReleaseCommandIEs->e_RABToBeReleasedList) < 0) return -1;
    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeReleasedList,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_E_RABList,
                        &e_RABToBeReleasedList)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseCommand->protocolIEs.list, ie);

    /* Free any dynamic allocation that is no more used */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_RABList, &e_RABToBeReleasedList);

    /* Optional field */
    if (s1AP_E_RABReleaseCommandIEs->presenceMask & S1AP_E_RABRELEASECOMMANDIES_NAS_PDU_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_NAS_PDU,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_NAS_PDU,
                            &s1AP_E_RABReleaseCommandIEs->nas_pdu)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseCommand->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_resetacknowledgeies(
    S1AP_ResetAcknowledge_t *s1AP_ResetAcknowledge,
    S1AP_ResetAcknowledgeIEs_t *s1AP_ResetAcknowledgeIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ResetAcknowledge, return -1, "Null param");
    d_assert(s1AP_ResetAcknowledgeIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ResetAcknowledgeIEs\n");

    /* Optional field */
    if (s1AP_ResetAcknowledgeIEs->presenceMask & S1AP_RESETACKNOWLEDGEIES_UE_ASSOCIATEDLOGICALS1_CONNECTIONLISTRESACK_PRESENT) {
        S1AP_UE_associatedLogicalS1_ConnectionListResAck_t uE_associatedLogicalS1_ConnectionListResAck;

        memset(&uE_associatedLogicalS1_ConnectionListResAck, 0, sizeof(S1AP_UE_associatedLogicalS1_ConnectionListResAck_t));

        if (s1ap_encode_s1ap_ue_associatedlogicals1_connectionlistresack(&uE_associatedLogicalS1_ConnectionListResAck, &s1AP_ResetAcknowledgeIEs->uE_associatedLogicalS1_ConnectionListResAck) < 0) return -1;
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionListResAck,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionListResAck,
                            &uE_associatedLogicalS1_ConnectionListResAck)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ResetAcknowledge->protocolIEs.list, ie);
        /* Free any dynamic allocation that is no more used */
        ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionListResAck, &uE_associatedLogicalS1_ConnectionListResAck);

    }

    /* Optional field */
    if (s1AP_ResetAcknowledgeIEs->presenceMask & S1AP_RESETACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_ResetAcknowledgeIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ResetAcknowledge->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_deactivatetraceies(
    S1AP_DeactivateTrace_t *s1AP_DeactivateTrace,
    S1AP_DeactivateTraceIEs_t *s1AP_DeactivateTraceIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_DeactivateTrace, return -1, "Null param");
    d_assert(s1AP_DeactivateTraceIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_DeactivateTraceIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_DeactivateTraceIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DeactivateTrace->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_DeactivateTraceIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DeactivateTrace->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_UTRAN_Trace_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_E_UTRAN_Trace_ID,
                        &s1AP_DeactivateTraceIEs->e_UTRAN_Trace_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_DeactivateTrace->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_pathswitchrequestfailureies(
    S1AP_PathSwitchRequestFailure_t *s1AP_PathSwitchRequestFailure,
    S1AP_PathSwitchRequestFailureIEs_t *s1AP_PathSwitchRequestFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_PathSwitchRequestFailure, return -1, "Null param");
    d_assert(s1AP_PathSwitchRequestFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_PathSwitchRequestFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_PathSwitchRequestFailureIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_PathSwitchRequestFailureIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_PathSwitchRequestFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_PathSwitchRequestFailureIEs->presenceMask & S1AP_PATHSWITCHREQUESTFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_PathSwitchRequestFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_PathSwitchRequestFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_enbdirectinformationtransferies(
    S1AP_ENBDirectInformationTransfer_t *s1AP_ENBDirectInformationTransfer,
    S1AP_ENBDirectInformationTransferIEs_t *s1AP_ENBDirectInformationTransferIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ENBDirectInformationTransfer, return -1, "Null param");
    d_assert(s1AP_ENBDirectInformationTransferIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ENBDirectInformationTransferIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeEDT,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Inter_SystemInformationTransferType,
                        &s1AP_ENBDirectInformationTransferIEs->inter_SystemInformationTransferTypeEDT)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_ENBDirectInformationTransfer->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_initialcontextsetupfailureies(
    S1AP_InitialContextSetupFailure_t *s1AP_InitialContextSetupFailure,
    S1AP_InitialContextSetupFailureIEs_t *s1AP_InitialContextSetupFailureIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_InitialContextSetupFailure, return -1, "Null param");
    d_assert(s1AP_InitialContextSetupFailureIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_InitialContextSetupFailureIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_InitialContextSetupFailureIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_InitialContextSetupFailureIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupFailure->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_Cause,
                        &s1AP_InitialContextSetupFailureIEs->cause)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupFailure->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_InitialContextSetupFailureIEs->presenceMask & S1AP_INITIALCONTEXTSETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_InitialContextSetupFailureIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_InitialContextSetupFailure->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_uplinks1cdma2000tunnelingies(
    S1AP_UplinkS1cdma2000tunneling_t *s1AP_UplinkS1cdma2000tunneling,
    S1AP_UplinkS1cdma2000tunnelingIEs_t *s1AP_UplinkS1cdma2000tunnelingIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UplinkS1cdma2000tunneling, return -1, "Null param");
    d_assert(s1AP_UplinkS1cdma2000tunnelingIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UplinkS1cdma2000tunnelingIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_UplinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_UplinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000RATType,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Cdma2000RATType,
                        &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000RATType)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000SectorID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Cdma2000SectorID,
                        &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000SectorID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000HOREQUIREDINDICATION_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000HORequiredIndication,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_Cdma2000HORequiredIndication,
                            &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000HORequiredIndication)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXSRVCCINFO_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000OneXSRVCCInfo,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_Cdma2000OneXSRVCCInfo,
                            &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXSRVCCInfo)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXRAND_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000OneXRAND,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_Cdma2000OneXRAND,
                            &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXRAND)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);
    }

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_cdma2000PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Cdma2000PDU,
                        &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000PDU)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_UplinkS1cdma2000tunnelingIEs->presenceMask & S1AP_UPLINKS1CDMA2000TUNNELINGIES_EUTRANROUNDTRIPDELAYESTIMATIONINFO_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_EUTRANRoundTripDelayEstimationInfo,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_EUTRANRoundTripDelayEstimationInfo,
                            &s1AP_UplinkS1cdma2000tunnelingIEs->eutranRoundTripDelayEstimationInfo)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UplinkS1cdma2000tunneling->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_errorindicationies(
    S1AP_ErrorIndication_t *s1AP_ErrorIndication,
    S1AP_ErrorIndicationIEs_t *s1AP_ErrorIndicationIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_ErrorIndication, return -1, "Null param");
    d_assert(s1AP_ErrorIndicationIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_ErrorIndicationIEs\n");

    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_MME_UE_S1AP_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_MME_UE_S1AP_ID,
                            &s1AP_ErrorIndicationIEs->mme_ue_s1ap_id)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ErrorIndication->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_ENB_UE_S1AP_ID_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                            &s1AP_ErrorIndicationIEs->eNB_UE_S1AP_ID)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ErrorIndication->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_CAUSE_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Cause,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_Cause,
                            &s1AP_ErrorIndicationIEs->cause)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ErrorIndication->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_ErrorIndicationIEs->presenceMask & S1AP_ERRORINDICATIONIES_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_CriticalityDiagnostics,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_CriticalityDiagnostics,
                            &s1AP_ErrorIndicationIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_ErrorIndication->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_killrequesties(
    S1AP_KillRequest_t *s1AP_KillRequest,
    S1AP_KillRequestIEs_t *s1AP_KillRequestIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_KillRequest, return -1, "Null param");
    d_assert(s1AP_KillRequestIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_KillRequestIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MessageIdentifier,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MessageIdentifier,
                        &s1AP_KillRequestIEs->messageIdentifier)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_KillRequest->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_SerialNumber,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_SerialNumber,
                        &s1AP_KillRequestIEs->serialNumber)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_KillRequest->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_KillRequestIEs->presenceMask & S1AP_KILLREQUESTIES_WARNINGAREALIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_WarningAreaList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_WarningAreaList,
                            &s1AP_KillRequestIEs->warningAreaList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_KillRequest->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_tracestarties(
    S1AP_TraceStart_t *s1AP_TraceStart,
    S1AP_TraceStartIEs_t *s1AP_TraceStartIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_TraceStart, return -1, "Null param");
    d_assert(s1AP_TraceStartIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_TraceStartIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_MME_UE_S1AP_ID,
                        &s1AP_TraceStartIEs->mme_ue_s1ap_id)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_TraceStart->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_ENB_UE_S1AP_ID,
                        &s1AP_TraceStartIEs->eNB_UE_S1AP_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_TraceStart->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TraceActivation,
                        S1AP_Criticality_ignore,
                        &asn_DEF_S1AP_TraceActivation,
                        &s1AP_TraceStartIEs->traceActivation)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_TraceStart->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_overloadstarties(
    S1AP_OverloadStart_t *s1AP_OverloadStart,
    S1AP_OverloadStartIEs_t *s1AP_OverloadStartIEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_OverloadStart, return -1, "Null param");
    d_assert(s1AP_OverloadStartIEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_OverloadStartIEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_OverloadResponse,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_OverloadResponse,
                        &s1AP_OverloadStartIEs->overloadResponse)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_OverloadStart->protocolIEs.list, ie);

    /* Optional field */
    if (s1AP_OverloadStartIEs->presenceMask & S1AP_OVERLOADSTARTIES_GUMMEILIST_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_GUMMEIList,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_GUMMEIList,
                            &s1AP_OverloadStartIEs->gummeiList)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_OverloadStart->protocolIEs.list, ie);
    }

    /* Optional field */
    if (s1AP_OverloadStartIEs->presenceMask & S1AP_OVERLOADSTARTIES_TRAFFICLOADREDUCTIONINDICATION_PRESENT) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TrafficLoadReductionIndication,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TrafficLoadReductionIndication,
                            &s1AP_OverloadStartIEs->trafficLoadReductionIndication)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_OverloadStart->protocolIEs.list, ie);
    }

    return 0;
}

int s1ap_encode_s1ap_uplinknonueassociatedlppatransport_ies(
    S1AP_UplinkNonUEAssociatedLPPaTransport_t *s1AP_UplinkNonUEAssociatedLPPaTransport,
    S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkNonUEAssociatedLPPaTransport_IEs) {

    S1AP_IE_t *ie;

    d_assert(s1AP_UplinkNonUEAssociatedLPPaTransport, return -1, "Null param");
    d_assert(s1AP_UplinkNonUEAssociatedLPPaTransport_IEs, return -1, "Null param");

    d_trace(25, "[S1AP] Encode S1AP_UplinkNonUEAssociatedLPPaTransport_IEs\n");

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Routing_ID,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_Routing_ID,
                        &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->routing_ID)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkNonUEAssociatedLPPaTransport->protocolIEs.list, ie);

    if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_LPPa_PDU,
                        S1AP_Criticality_reject,
                        &asn_DEF_S1AP_LPPa_PDU,
                        &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&s1AP_UplinkNonUEAssociatedLPPaTransport->protocolIEs.list, ie);

    return 0;
}

int s1ap_encode_s1ap_e_rabmodifylistbearermodres(
    S1AP_E_RABModifyListBearerModRes_t *s1AP_E_RABModifyListBearerModRes,
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModResIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABModifyListBearerModRes, return -1, "Null param");
    d_assert(s1AP_E_RABModifyListBearerModResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABModifyListBearerModResIEs->s1AP_E_RABModifyItemBearerModRes.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABModifyItemBearerModRes,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABModifyItemBearerModRes,
                            s1AP_E_RABModifyListBearerModResIEs->s1AP_E_RABModifyItemBearerModRes.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABModifyListBearerModRes->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabreleaselistbearerrelcomp(
    S1AP_E_RABReleaseListBearerRelComp_t *s1AP_E_RABReleaseListBearerRelComp,
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelCompIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABReleaseListBearerRelComp, return -1, "Null param");
    d_assert(s1AP_E_RABReleaseListBearerRelCompIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABReleaseListBearerRelCompIEs->s1AP_E_RABReleaseItemBearerRelComp.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABReleaseItemBearerRelComp,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABReleaseItemBearerRelComp,
                            s1AP_E_RABReleaseListBearerRelCompIEs->s1AP_E_RABReleaseItemBearerRelComp.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABReleaseListBearerRelComp->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabtobemodifiedlistbearermodreq(
    S1AP_E_RABToBeModifiedListBearerModReq_t *s1AP_E_RABToBeModifiedListBearerModReq,
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReqIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABToBeModifiedListBearerModReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeModifiedListBearerModReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeModifiedListBearerModReqIEs->s1AP_E_RABToBeModifiedItemBearerModReq.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeModifiedItemBearerModReq,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_E_RABToBeModifiedItemBearerModReq,
                            s1AP_E_RABToBeModifiedListBearerModReqIEs->s1AP_E_RABToBeModifiedItemBearerModReq.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABToBeModifiedListBearerModReq->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabtobesetuplistbearersureq(
    S1AP_E_RABToBeSetupListBearerSUReq_t *s1AP_E_RABToBeSetupListBearerSUReq,
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReqIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABToBeSetupListBearerSUReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSetupListBearerSUReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSetupListBearerSUReqIEs->s1AP_E_RABToBeSetupItemBearerSUReq.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemBearerSUReq,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_E_RABToBeSetupItemBearerSUReq,
                            s1AP_E_RABToBeSetupListBearerSUReqIEs->s1AP_E_RABToBeSetupItemBearerSUReq.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSetupListBearerSUReq->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabsubjecttodataforwardinglist(
    S1AP_E_RABSubjecttoDataForwardingList_t *s1AP_E_RABSubjecttoDataForwardingList,
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABSubjecttoDataForwardingList, return -1, "Null param");
    d_assert(s1AP_E_RABSubjecttoDataForwardingListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABSubjecttoDataForwardingListIEs->s1AP_E_RABDataForwardingItem.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABDataForwardingItem,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABDataForwardingItem,
                            s1AP_E_RABSubjecttoDataForwardingListIEs->s1AP_E_RABDataForwardingItem.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABSubjecttoDataForwardingList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_ue_associatedlogicals1_connectionlistres(
    S1AP_UE_associatedLogicalS1_ConnectionListRes_t *s1AP_UE_associatedLogicalS1_ConnectionListRes,
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListRes, return -1, "Null param");
    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListResIEs->s1AP_UE_associatedLogicalS1_ConnectionItemRes.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionItem,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem,
                            s1AP_UE_associatedLogicalS1_ConnectionListResIEs->s1AP_UE_associatedLogicalS1_ConnectionItemRes.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UE_associatedLogicalS1_ConnectionListRes->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabsetuplistbearersures(
    S1AP_E_RABSetupListBearerSURes_t *s1AP_E_RABSetupListBearerSURes,
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSUResIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABSetupListBearerSURes, return -1, "Null param");
    d_assert(s1AP_E_RABSetupListBearerSUResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABSetupListBearerSUResIEs->s1AP_E_RABSetupItemBearerSURes.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABSetupItemBearerSURes,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABSetupItemBearerSURes,
                            s1AP_E_RABSetupListBearerSUResIEs->s1AP_E_RABSetupItemBearerSURes.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABSetupListBearerSURes->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_bearers_subjecttostatustransferlist(
    S1AP_Bearers_SubjectToStatusTransferList_t *s1AP_Bearers_SubjectToStatusTransferList,
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_Bearers_SubjectToStatusTransferList, return -1, "Null param");
    d_assert(s1AP_Bearers_SubjectToStatusTransferListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_Bearers_SubjectToStatusTransferListIEs->s1AP_Bearers_SubjectToStatusTransfer_Item.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_Bearers_SubjectToStatusTransfer_Item,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_Bearers_SubjectToStatusTransfer_Item,
                            s1AP_Bearers_SubjectToStatusTransferListIEs->s1AP_Bearers_SubjectToStatusTransfer_Item.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_Bearers_SubjectToStatusTransferList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_tailist(
    S1AP_TAIList_t *s1AP_TAIList,
    S1AP_TAIList_IEs_t *s1AP_TAIListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_TAIList, return -1, "Null param");
    d_assert(s1AP_TAIListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_TAIListIEs->s1AP_TAIItem.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_TAIItem,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_TAIItem,
                            s1AP_TAIListIEs->s1AP_TAIItem.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_TAIList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabtobesetuplisthoreq(
    S1AP_E_RABToBeSetupListHOReq_t *s1AP_E_RABToBeSetupListHOReq,
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReqIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABToBeSetupListHOReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSetupListHOReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSetupListHOReqIEs->s1AP_E_RABToBeSetupItemHOReq.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemHOReq,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_E_RABToBeSetupItemHOReq,
                            s1AP_E_RABToBeSetupListHOReqIEs->s1AP_E_RABToBeSetupItemHOReq.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSetupListHOReq->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabtobeswitchedullist(
    S1AP_E_RABToBeSwitchedULList_t *s1AP_E_RABToBeSwitchedULList,
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABToBeSwitchedULList, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSwitchedULListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSwitchedULListIEs->s1AP_E_RABToBeSwitchedULItem.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedULItem,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABToBeSwitchedULItem,
                            s1AP_E_RABToBeSwitchedULListIEs->s1AP_E_RABToBeSwitchedULItem.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSwitchedULList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rablist(
    S1AP_E_RABList_t *s1AP_E_RABList,
    S1AP_E_RABList_IEs_t *s1AP_E_RABListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABList, return -1, "Null param");
    d_assert(s1AP_E_RABListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABListIEs->s1AP_E_RABItem.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABItem,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABItem,
                            s1AP_E_RABListIEs->s1AP_E_RABItem.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabfailedtosetuplisthoreqack(
    S1AP_E_RABFailedtoSetupListHOReqAck_t *s1AP_E_RABFailedtoSetupListHOReqAck,
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAckIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABFailedtoSetupListHOReqAck, return -1, "Null param");
    d_assert(s1AP_E_RABFailedtoSetupListHOReqAckIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABFailedtoSetupListHOReqAckIEs->s1AP_E_RABFailedtoSetupItemHOReqAck.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABFailedtoSetupItemHOReqAck,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck,
                            s1AP_E_RABFailedtoSetupListHOReqAckIEs->s1AP_E_RABFailedtoSetupItemHOReqAck.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABFailedtoSetupListHOReqAck->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabtobeswitcheddllist(
    S1AP_E_RABToBeSwitchedDLList_t *s1AP_E_RABToBeSwitchedDLList,
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABToBeSwitchedDLList, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSwitchedDLListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSwitchedDLListIEs->s1AP_E_RABToBeSwitchedDLItem.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedDLItem,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_E_RABToBeSwitchedDLItem,
                            s1AP_E_RABToBeSwitchedDLListIEs->s1AP_E_RABToBeSwitchedDLItem.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSwitchedDLList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabadmittedlist(
    S1AP_E_RABAdmittedList_t *s1AP_E_RABAdmittedList,
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABAdmittedList, return -1, "Null param");
    d_assert(s1AP_E_RABAdmittedListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABAdmittedListIEs->s1AP_E_RABAdmittedItem.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABAdmittedItem,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABAdmittedItem,
                            s1AP_E_RABAdmittedListIEs->s1AP_E_RABAdmittedItem.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABAdmittedList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabtobesetuplistctxtsureq(
    S1AP_E_RABToBeSetupListCtxtSUReq_t *s1AP_E_RABToBeSetupListCtxtSUReq,
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReqIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABToBeSetupListCtxtSUReq, return -1, "Null param");
    d_assert(s1AP_E_RABToBeSetupListCtxtSUReqIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABToBeSetupListCtxtSUReqIEs->s1AP_E_RABToBeSetupItemCtxtSUReq.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemCtxtSUReq,
                            S1AP_Criticality_reject,
                            &asn_DEF_S1AP_E_RABToBeSetupItemCtxtSUReq,
                            s1AP_E_RABToBeSetupListCtxtSUReqIEs->s1AP_E_RABToBeSetupItemCtxtSUReq.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABToBeSetupListCtxtSUReq->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabinformationlist(
    S1AP_E_RABInformationList_t *s1AP_E_RABInformationList,
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationListIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABInformationList, return -1, "Null param");
    d_assert(s1AP_E_RABInformationListIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABInformationListIEs->s1AP_E_RABInformationList.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABInformationListItem,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABInformationListItem,
                            s1AP_E_RABInformationListIEs->s1AP_E_RABInformationList.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABInformationList->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_e_rabsetuplistctxtsures(
    S1AP_E_RABSetupListCtxtSURes_t *s1AP_E_RABSetupListCtxtSURes,
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSUResIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_E_RABSetupListCtxtSURes, return -1, "Null param");
    d_assert(s1AP_E_RABSetupListCtxtSUResIEs, return -1, "Null param");

    for (i = 0; i < s1AP_E_RABSetupListCtxtSUResIEs->s1AP_E_RABSetupItemCtxtSURes.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_E_RABSetupItemCtxtSURes,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_E_RABSetupItemCtxtSURes,
                            s1AP_E_RABSetupListCtxtSUResIEs->s1AP_E_RABSetupItemCtxtSURes.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_E_RABSetupListCtxtSURes->list, ie);
    }
    return 0;
}

int s1ap_encode_s1ap_ue_associatedlogicals1_connectionlistresack(
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_t *s1AP_UE_associatedLogicalS1_ConnectionListResAck,
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs) {

    int i;
    S1AP_IE_t *ie;

    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListResAck, return -1, "Null param");
    d_assert(s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs, return -1, "Null param");

    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.count; i++) {
        if ((ie = s1ap_new_ie(S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionItem,
                            S1AP_Criticality_ignore,
                            &asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem,
                            s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.array[i])) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&s1AP_UE_associatedLogicalS1_ConnectionListResAck->list, ie);
    }
    return 0;
}

S1AP_IE_t *s1ap_new_ie(S1AP_ProtocolIE_ID_t id, S1AP_Criticality_t criticality,
    asn_TYPE_descriptor_t *type, void *sptr)
{
    S1AP_IE_t *buff;

    if ((buff = MALLOC(sizeof (S1AP_IE_t))) == NULL) 
    {
        // Possible error on malloc
        return NULL;
    }

    memset((void *)buff, 0, sizeof(S1AP_IE_t));
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

