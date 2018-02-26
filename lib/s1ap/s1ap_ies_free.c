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
 * Created on: 2018-02-26 19:44:10.859559 by acetcom
 * from ['S1AP-PDU.asn']
 ******************************************************************************/
#define TRACE_MODULE _s1ap_ies_free
#include "core_debug.h"
#include "s1ap_ies_defs.h"

void s1ap_free_s1ap_e_rabsetupresponseies(
    S1AP_E_RABSetupResponseIEs_t *s1AP_E_RABSetupResponseIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABSetupResponseIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABSetupResponseIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    s1ap_free_s1ap_e_rabsetuplistbearersures(&s1AP_E_RABSetupResponseIEs->e_RABSetupListBearerSURes);
            /* Optional field */
    s1ap_free_s1ap_e_rablist(&s1AP_E_RABSetupResponseIEs->e_RABFailedToSetupListBearerSURes);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_E_RABSetupResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_uecontextreleasecommand_ies(
    S1AP_UEContextReleaseCommand_IEs_t *s1AP_UEContextReleaseCommand_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UE_S1AP_IDs, &s1AP_UEContextReleaseCommand_IEs->uE_S1AP_IDs);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_UEContextReleaseCommand_IEs->cause);
}

void s1ap_free_s1ap_mmeconfigurationtransferies(
    S1AP_MMEConfigurationTransferIEs_t *s1AP_MMEConfigurationTransferIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SONConfigurationTransfer, &s1AP_MMEConfigurationTransferIEs->sonConfigurationTransferMCT);
}

void s1ap_free_s1ap_uecapabilityinfoindicationies(
    S1AP_UECapabilityInfoIndicationIEs_t *s1AP_UECapabilityInfoIndicationIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UECapabilityInfoIndicationIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UECapabilityInfoIndicationIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UERadioCapability, &s1AP_UECapabilityInfoIndicationIEs->ueRadioCapability);
}

void s1ap_free_s1ap_writereplacewarningrequesties(
    S1AP_WriteReplaceWarningRequestIEs_t *s1AP_WriteReplaceWarningRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MessageIdentifier, &s1AP_WriteReplaceWarningRequestIEs->messageIdentifier);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SerialNumber, &s1AP_WriteReplaceWarningRequestIEs->serialNumber);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WarningAreaList, &s1AP_WriteReplaceWarningRequestIEs->warningAreaList);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RepetitionPeriod, &s1AP_WriteReplaceWarningRequestIEs->repetitionPeriod);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ExtendedRepetitionPeriod, &s1AP_WriteReplaceWarningRequestIEs->extendedRepetitionPeriod);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NumberofBroadcastRequest, &s1AP_WriteReplaceWarningRequestIEs->numberofBroadcastRequest);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WarningType, &s1AP_WriteReplaceWarningRequestIEs->warningType);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WarningSecurityInfo, &s1AP_WriteReplaceWarningRequestIEs->warningSecurityInfo);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_DataCodingScheme, &s1AP_WriteReplaceWarningRequestIEs->dataCodingScheme);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WarningMessageContents, &s1AP_WriteReplaceWarningRequestIEs->warningMessageContents);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ConcurrentWarningMessageIndicator, &s1AP_WriteReplaceWarningRequestIEs->concurrentWarningMessageIndicator);
}

void s1ap_free_s1ap_e_rabsetuprequesties(
    S1AP_E_RABSetupRequestIEs_t *s1AP_E_RABSetupRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABSetupRequestIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABSetupRequestIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_E_RABSetupRequestIEs->uEaggregateMaximumBitrate);
    s1ap_free_s1ap_e_rabtobesetuplistbearersureq(&s1AP_E_RABSetupRequestIEs->e_RABToBeSetupListBearerSUReq);
}

void s1ap_free_s1ap_locationreportingfailureindicationies(
    S1AP_LocationReportingFailureIndicationIEs_t *s1AP_LocationReportingFailureIndicationIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_LocationReportingFailureIndicationIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_LocationReportingFailureIndicationIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_LocationReportingFailureIndicationIEs->cause);
}

void s1ap_free_s1ap_uecontextreleasecomplete_ies(
    S1AP_UEContextReleaseComplete_IEs_t *s1AP_UEContextReleaseComplete_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextReleaseComplete_IEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextReleaseComplete_IEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_UEContextReleaseComplete_IEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_overloadstopies(
    S1AP_OverloadStopIEs_t *s1AP_OverloadStopIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GUMMEIList, &s1AP_OverloadStopIEs->gummeiList);
}

void s1ap_free_s1ap_uecontextmodificationrequesties(
    S1AP_UEContextModificationRequestIEs_t *s1AP_UEContextModificationRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextModificationRequestIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextModificationRequestIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SecurityKey, &s1AP_UEContextModificationRequestIEs->securityKey);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SubscriberProfileIDforRFP, &s1AP_UEContextModificationRequestIEs->subscriberProfileIDforRFP);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_UEContextModificationRequestIEs->uEaggregateMaximumBitrate);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSFallbackIndicator, &s1AP_UEContextModificationRequestIEs->csFallbackIndicator);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UESecurityCapabilities, &s1AP_UEContextModificationRequestIEs->ueSecurityCapabilities);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSGMembershipStatus, &s1AP_UEContextModificationRequestIEs->csgMembershipStatus);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LAI, &s1AP_UEContextModificationRequestIEs->registeredLAI);
}

void s1ap_free_s1ap_e_rabmodifyresponseies(
    S1AP_E_RABModifyResponseIEs_t *s1AP_E_RABModifyResponseIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABModifyResponseIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABModifyResponseIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    s1ap_free_s1ap_e_rabmodifylistbearermodres(&s1AP_E_RABModifyResponseIEs->e_RABModifyListBearerModRes);
            /* Optional field */
    s1ap_free_s1ap_e_rablist(&s1AP_E_RABModifyResponseIEs->e_RABFailedToModifyList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_E_RABModifyResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_locationreportingcontrolies(
    S1AP_LocationReportingControlIEs_t *s1AP_LocationReportingControlIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_LocationReportingControlIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_LocationReportingControlIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RequestType, &s1AP_LocationReportingControlIEs->requestType);
}

void s1ap_free_s1ap_killresponseies(
    S1AP_KillResponseIEs_t *s1AP_KillResponseIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MessageIdentifier, &s1AP_KillResponseIEs->messageIdentifier);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SerialNumber, &s1AP_KillResponseIEs->serialNumber);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_BroadcastCancelledAreaList, &s1AP_KillResponseIEs->broadcastCancelledAreaList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_KillResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_mmestatustransferies(
    S1AP_MMEStatusTransferIEs_t *s1AP_MMEStatusTransferIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_MMEStatusTransferIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_MMEStatusTransferIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer, &s1AP_MMEStatusTransferIEs->eNB_StatusTransfer_TransparentContainer);
}

void s1ap_free_s1ap_mmeconfigurationupdateies(
    S1AP_MMEConfigurationUpdateIEs_t *s1AP_MMEConfigurationUpdateIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEname, &s1AP_MMEConfigurationUpdateIEs->mmEname);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ServedGUMMEIs, &s1AP_MMEConfigurationUpdateIEs->servedGUMMEIs);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RelativeMMECapacity, &s1AP_MMEConfigurationUpdateIEs->relativeMMECapacity);
}

void s1ap_free_s1ap_tracefailureindicationies(
    S1AP_TraceFailureIndicationIEs_t *s1AP_TraceFailureIndicationIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_TraceFailureIndicationIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_TraceFailureIndicationIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_UTRAN_Trace_ID, &s1AP_TraceFailureIndicationIEs->e_UTRAN_Trace_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_TraceFailureIndicationIEs->cause);
}

void s1ap_free_s1ap_enbconfigurationtransferies(
    S1AP_ENBConfigurationTransferIEs_t *s1AP_ENBConfigurationTransferIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SONConfigurationTransfer, &s1AP_ENBConfigurationTransferIEs->sonConfigurationTransferECT);
}

void s1ap_free_s1ap_downlinkueassociatedlppatransport_ies(
    S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkUEAssociatedLPPaTransport_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Routing_ID, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->routing_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LPPa_PDU, &s1AP_DownlinkUEAssociatedLPPaTransport_IEs->lpPa_PDU);
}

void s1ap_free_s1ap_handoverfailureies(
    S1AP_HandoverFailureIEs_t *s1AP_HandoverFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverFailureIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_HandoverFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_uplinknastransport_ies(
    S1AP_UplinkNASTransport_IEs_t *s1AP_UplinkNASTransport_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UplinkNASTransport_IEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UplinkNASTransport_IEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NAS_PDU, &s1AP_UplinkNASTransport_IEs->nas_pdu);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_EUTRAN_CGI, &s1AP_UplinkNASTransport_IEs->eutran_cgi);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TAI, &s1AP_UplinkNASTransport_IEs->tai);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TransportLayerAddress, &s1AP_UplinkNASTransport_IEs->gW_TransportLayerAddress);
}

void s1ap_free_s1ap_s1setuprequesties(
    S1AP_S1SetupRequestIEs_t *s1AP_S1SetupRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Global_ENB_ID, &s1AP_S1SetupRequestIEs->global_ENB_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBname, &s1AP_S1SetupRequestIEs->eNBname);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SupportedTAs, &s1AP_S1SetupRequestIEs->supportedTAs);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PagingDRX, &s1AP_S1SetupRequestIEs->defaultPagingDRX);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_IdList, &s1AP_S1SetupRequestIEs->csG_IdList);
}

void s1ap_free_s1ap_enbconfigurationupdatefailureies(
    S1AP_ENBConfigurationUpdateFailureIEs_t *s1AP_ENBConfigurationUpdateFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_ENBConfigurationUpdateFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TimeToWait, &s1AP_ENBConfigurationUpdateFailureIEs->timeToWait);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ENBConfigurationUpdateFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_pathswitchrequesties(
    S1AP_PathSwitchRequestIEs_t *s1AP_PathSwitchRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_PathSwitchRequestIEs->eNB_UE_S1AP_ID);
    s1ap_free_s1ap_e_rabtobeswitcheddllist(&s1AP_PathSwitchRequestIEs->e_RABToBeSwitchedDLList);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestIEs->sourceMME_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_EUTRAN_CGI, &s1AP_PathSwitchRequestIEs->eutran_cgi);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TAI, &s1AP_PathSwitchRequestIEs->tai);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UESecurityCapabilities, &s1AP_PathSwitchRequestIEs->ueSecurityCapabilities);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_Id, &s1AP_PathSwitchRequestIEs->csG_Id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellAccessMode, &s1AP_PathSwitchRequestIEs->cellAccessMode);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GUMMEI, &s1AP_PathSwitchRequestIEs->sourceMME_GUMMEI);
}

void s1ap_free_s1ap_reseties(
    S1AP_ResetIEs_t *s1AP_ResetIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_ResetIEs->cause);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ResetType, &s1AP_ResetIEs->resetType);
}

void s1ap_free_s1ap_uecontextreleaserequest_ies(
    S1AP_UEContextReleaseRequest_IEs_t *s1AP_UEContextReleaseRequest_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextReleaseRequest_IEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextReleaseRequest_IEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_UEContextReleaseRequest_IEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GWContextReleaseIndication, &s1AP_UEContextReleaseRequest_IEs->gwContextReleaseIndication);
}

void s1ap_free_s1ap_downlinknonueassociatedlppatransport_ies(
    S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Routing_ID, &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->routing_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LPPa_PDU, &s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU);
}

void s1ap_free_s1ap_pagingies(
    S1AP_PagingIEs_t *s1AP_PagingIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEIdentityIndexValue, &s1AP_PagingIEs->ueIdentityIndexValue);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEPagingID, &s1AP_PagingIEs->uePagingID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PagingDRX, &s1AP_PagingIEs->pagingDRX);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CNDomain, &s1AP_PagingIEs->cnDomain);
    s1ap_free_s1ap_tailist(&s1AP_PagingIEs->taiList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_IdList, &s1AP_PagingIEs->csG_IdList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PagingPriority, &s1AP_PagingIEs->pagingPriority);
}

void s1ap_free_s1ap_enbconfigurationupdateacknowledgeies(
    S1AP_ENBConfigurationUpdateAcknowledgeIEs_t *s1AP_ENBConfigurationUpdateAcknowledgeIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ENBConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_handovernotifyies(
    S1AP_HandoverNotifyIEs_t *s1AP_HandoverNotifyIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverNotifyIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverNotifyIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_EUTRAN_CGI, &s1AP_HandoverNotifyIEs->eutran_cgi);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TAI, &s1AP_HandoverNotifyIEs->tai);
}

void s1ap_free_s1ap_handovercancelacknowledgeies(
    S1AP_HandoverCancelAcknowledgeIEs_t *s1AP_HandoverCancelAcknowledgeIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverCancelAcknowledgeIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverCancelAcknowledgeIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverCancelAcknowledgeIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_handovercommandies(
    S1AP_HandoverCommandIEs_t *s1AP_HandoverCommandIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverCommandIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverCommandIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverType, &s1AP_HandoverCommandIEs->handoverType);
            /* Optional field */
    s1ap_free_s1ap_e_rabsubjecttodataforwardinglist(&s1AP_HandoverCommandIEs->e_RABSubjecttoDataForwardingList);
            /* Optional field */
    s1ap_free_s1ap_e_rablist(&s1AP_HandoverCommandIEs->e_RABtoReleaseListHOCmd);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Target_ToSource_TransparentContainer, &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Target_ToSource_TransparentContainer, &s1AP_HandoverCommandIEs->target_ToSource_TransparentContainer_Secondary);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverCommandIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_writereplacewarningresponseies(
    S1AP_WriteReplaceWarningResponseIEs_t *s1AP_WriteReplaceWarningResponseIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MessageIdentifier, &s1AP_WriteReplaceWarningResponseIEs->messageIdentifier);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SerialNumber, &s1AP_WriteReplaceWarningResponseIEs->serialNumber);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_BroadcastCompletedAreaList, &s1AP_WriteReplaceWarningResponseIEs->broadcastCompletedAreaList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_WriteReplaceWarningResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_handovercancelies(
    S1AP_HandoverCancelIEs_t *s1AP_HandoverCancelIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverCancelIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverCancelIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_HandoverCancelIEs->cause);
}

void s1ap_free_s1ap_handoverpreparationfailureies(
    S1AP_HandoverPreparationFailureIEs_t *s1AP_HandoverPreparationFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverPreparationFailureIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverPreparationFailureIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_HandoverPreparationFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverPreparationFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_e_rabmodifyrequesties(
    S1AP_E_RABModifyRequestIEs_t *s1AP_E_RABModifyRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABModifyRequestIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABModifyRequestIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_E_RABModifyRequestIEs->uEaggregateMaximumBitrate);
    s1ap_free_s1ap_e_rabtobemodifiedlistbearermodreq(&s1AP_E_RABModifyRequestIEs->e_RABToBeModifiedListBearerModReq);
}

void s1ap_free_s1ap_handoverrequestacknowledgeies(
    S1AP_HandoverRequestAcknowledgeIEs_t *s1AP_HandoverRequestAcknowledgeIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequestAcknowledgeIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverRequestAcknowledgeIEs->eNB_UE_S1AP_ID);
    s1ap_free_s1ap_e_rabadmittedlist(&s1AP_HandoverRequestAcknowledgeIEs->e_RABAdmittedList);
            /* Optional field */
    s1ap_free_s1ap_e_rabfailedtosetuplisthoreqack(&s1AP_HandoverRequestAcknowledgeIEs->e_RABFailedToSetupListHOReqAck);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Target_ToSource_TransparentContainer, &s1AP_HandoverRequestAcknowledgeIEs->target_ToSource_TransparentContainer);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_Id, &s1AP_HandoverRequestAcknowledgeIEs->csG_Id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_HandoverRequestAcknowledgeIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_downlinknastransport_ies(
    S1AP_DownlinkNASTransport_IEs_t *s1AP_DownlinkNASTransport_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DownlinkNASTransport_IEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DownlinkNASTransport_IEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NAS_PDU, &s1AP_DownlinkNASTransport_IEs->nas_pdu);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRestrictionList, &s1AP_DownlinkNASTransport_IEs->handoverRestrictionList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SubscriberProfileIDforRFP, &s1AP_DownlinkNASTransport_IEs->subscriberProfileIDforRFP);
}

void s1ap_free_s1ap_e_rabreleaseindicationies(
    S1AP_E_RABReleaseIndicationIEs_t *s1AP_E_RABReleaseIndicationIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABReleaseIndicationIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABReleaseIndicationIEs->eNB_UE_S1AP_ID);
    s1ap_free_s1ap_e_rablist(&s1AP_E_RABReleaseIndicationIEs->e_RABReleasedList);
}

void s1ap_free_s1ap_pathswitchrequestacknowledgeies(
    S1AP_PathSwitchRequestAcknowledgeIEs_t *s1AP_PathSwitchRequestAcknowledgeIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_PathSwitchRequestAcknowledgeIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_PathSwitchRequestAcknowledgeIEs->uEaggregateMaximumBitrate);
            /* Optional field */
    s1ap_free_s1ap_e_rabtobeswitchedullist(&s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeSwitchedULList);
            /* Optional field */
    s1ap_free_s1ap_e_rablist(&s1AP_PathSwitchRequestAcknowledgeIEs->e_RABToBeReleasedList);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SecurityContext, &s1AP_PathSwitchRequestAcknowledgeIEs->securityContext);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_PathSwitchRequestAcknowledgeIEs->criticalityDiagnostics);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestAcknowledgeIEs->mme_ue_s1ap_id_2);
}

void s1ap_free_s1ap_nasnondeliveryindication_ies(
    S1AP_NASNonDeliveryIndication_IEs_t *s1AP_NASNonDeliveryIndication_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_NASNonDeliveryIndication_IEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_NASNonDeliveryIndication_IEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NAS_PDU, &s1AP_NASNonDeliveryIndication_IEs->nas_pdu);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_NASNonDeliveryIndication_IEs->cause);
}

void s1ap_free_s1ap_initialcontextsetuprequesties(
    S1AP_InitialContextSetupRequestIEs_t *s1AP_InitialContextSetupRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialContextSetupRequestIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_InitialContextSetupRequestIEs->uEaggregateMaximumBitrate);
    s1ap_free_s1ap_e_rabtobesetuplistctxtsureq(&s1AP_InitialContextSetupRequestIEs->e_RABToBeSetupListCtxtSUReq);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UESecurityCapabilities, &s1AP_InitialContextSetupRequestIEs->ueSecurityCapabilities);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SecurityKey, &s1AP_InitialContextSetupRequestIEs->securityKey);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceActivation, &s1AP_InitialContextSetupRequestIEs->traceActivation);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRestrictionList, &s1AP_InitialContextSetupRequestIEs->handoverRestrictionList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UERadioCapability, &s1AP_InitialContextSetupRequestIEs->ueRadioCapability);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SubscriberProfileIDforRFP, &s1AP_InitialContextSetupRequestIEs->subscriberProfileIDforRFP);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSFallbackIndicator, &s1AP_InitialContextSetupRequestIEs->csFallbackIndicator);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SRVCCOperationPossible, &s1AP_InitialContextSetupRequestIEs->srvccOperationPossible);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSGMembershipStatus, &s1AP_InitialContextSetupRequestIEs->csgMembershipStatus);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LAI, &s1AP_InitialContextSetupRequestIEs->registeredLAI);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GUMMEI, &s1AP_InitialContextSetupRequestIEs->gummei_id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupRequestIEs->mme_ue_s1ap_id_2);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ManagementBasedMDTAllowed, &s1AP_InitialContextSetupRequestIEs->managementBasedMDTAllowed);
}

void s1ap_free_s1ap_s1setupresponseies(
    S1AP_S1SetupResponseIEs_t *s1AP_S1SetupResponseIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMEname, &s1AP_S1SetupResponseIEs->mmEname);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ServedGUMMEIs, &s1AP_S1SetupResponseIEs->servedGUMMEIs);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RelativeMMECapacity, &s1AP_S1SetupResponseIEs->relativeMMECapacity);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MMERelaySupportIndicator, &s1AP_S1SetupResponseIEs->mmeRelaySupportIndicator);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_S1SetupResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_mmeconfigurationupdatefailureies(
    S1AP_MMEConfigurationUpdateFailureIEs_t *s1AP_MMEConfigurationUpdateFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_MMEConfigurationUpdateFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TimeToWait, &s1AP_MMEConfigurationUpdateFailureIEs->timeToWait);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_MMEConfigurationUpdateFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_initialcontextsetupresponseies(
    S1AP_InitialContextSetupResponseIEs_t *s1AP_InitialContextSetupResponseIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupResponseIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialContextSetupResponseIEs->eNB_UE_S1AP_ID);
    s1ap_free_s1ap_e_rabsetuplistctxtsures(&s1AP_InitialContextSetupResponseIEs->e_RABSetupListCtxtSURes);
            /* Optional field */
    s1ap_free_s1ap_e_rablist(&s1AP_InitialContextSetupResponseIEs->e_RABFailedToSetupListCtxtSURes);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_InitialContextSetupResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_enbconfigurationupdateies(
    S1AP_ENBConfigurationUpdateIEs_t *s1AP_ENBConfigurationUpdateIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENBname, &s1AP_ENBConfigurationUpdateIEs->eNBname);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SupportedTAs, &s1AP_ENBConfigurationUpdateIEs->supportedTAs);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_IdList, &s1AP_ENBConfigurationUpdateIEs->csG_IdList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PagingDRX, &s1AP_ENBConfigurationUpdateIEs->defaultPagingDRX);
}

void s1ap_free_s1ap_locationreporties(
    S1AP_LocationReportIEs_t *s1AP_LocationReportIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_LocationReportIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_LocationReportIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_EUTRAN_CGI, &s1AP_LocationReportIEs->eutran_cgi);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TAI, &s1AP_LocationReportIEs->tai);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RequestType, &s1AP_LocationReportIEs->requestType);
}

void s1ap_free_s1ap_uplinkueassociatedlppatransport_ies(
    S1AP_UplinkUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkUEAssociatedLPPaTransport_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Routing_ID, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->routing_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LPPa_PDU, &s1AP_UplinkUEAssociatedLPPaTransport_IEs->lpPa_PDU);
}

void s1ap_free_s1ap_uecontextmodificationresponseies(
    S1AP_UEContextModificationResponseIEs_t *s1AP_UEContextModificationResponseIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextModificationResponseIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextModificationResponseIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_UEContextModificationResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_e_rabreleaseresponseies(
    S1AP_E_RABReleaseResponseIEs_t *s1AP_E_RABReleaseResponseIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABReleaseResponseIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABReleaseResponseIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    s1ap_free_s1ap_e_rabreleaselistbearerrelcomp(&s1AP_E_RABReleaseResponseIEs->e_RABReleaseListBearerRelComp);
            /* Optional field */
    s1ap_free_s1ap_e_rablist(&s1AP_E_RABReleaseResponseIEs->e_RABFailedToReleaseList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_E_RABReleaseResponseIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_handoverrequesties(
    S1AP_HandoverRequestIEs_t *s1AP_HandoverRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequestIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverType, &s1AP_HandoverRequestIEs->handoverType);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_HandoverRequestIEs->cause);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_HandoverRequestIEs->uEaggregateMaximumBitrate);
    s1ap_free_s1ap_e_rabtobesetuplisthoreq(&s1AP_HandoverRequestIEs->e_RABToBeSetupListHOReq);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Source_ToTarget_TransparentContainer, &s1AP_HandoverRequestIEs->source_ToTarget_TransparentContainer);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UESecurityCapabilities, &s1AP_HandoverRequestIEs->ueSecurityCapabilities);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverRestrictionList, &s1AP_HandoverRequestIEs->handoverRestrictionList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceActivation, &s1AP_HandoverRequestIEs->traceActivation);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RequestType, &s1AP_HandoverRequestIEs->requestType);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SRVCCOperationPossible, &s1AP_HandoverRequestIEs->srvccOperationPossible);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SecurityContext, &s1AP_HandoverRequestIEs->securityContext);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_Id, &s1AP_HandoverRequestIEs->csG_Id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSGMembershipStatus, &s1AP_HandoverRequestIEs->csgMembershipStatus);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GUMMEI, &s1AP_HandoverRequestIEs->gummei_id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequestIEs->mme_ue_s1ap_id_2);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ManagementBasedMDTAllowed, &s1AP_HandoverRequestIEs->managementBasedMDTAllowed);
}

void s1ap_free_s1ap_handoverrequiredies(
    S1AP_HandoverRequiredIEs_t *s1AP_HandoverRequiredIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_HandoverRequiredIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_HandoverRequiredIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_HandoverType, &s1AP_HandoverRequiredIEs->handoverType);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_HandoverRequiredIEs->cause);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TargetID, &s1AP_HandoverRequiredIEs->targetID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Direct_Forwarding_Path_Availability, &s1AP_HandoverRequiredIEs->direct_Forwarding_Path_Availability);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SRVCCHOIndication, &s1AP_HandoverRequiredIEs->srvcchoIndication);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Source_ToTarget_TransparentContainer, &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Source_ToTarget_TransparentContainer, &s1AP_HandoverRequiredIEs->source_ToTarget_TransparentContainer_Secondary);
            /* Conditional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MSClassmark2, &s1AP_HandoverRequiredIEs->msClassmark2);
            /* Conditional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MSClassmark3, &s1AP_HandoverRequiredIEs->msClassmark3);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_Id, &s1AP_HandoverRequiredIEs->csG_Id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellAccessMode, &s1AP_HandoverRequiredIEs->cellAccessMode);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PS_ServiceNotAvailable, &s1AP_HandoverRequiredIEs->pS_ServiceNotAvailable);
}

void s1ap_free_s1ap_mmeconfigurationupdateacknowledgeies(
    S1AP_MMEConfigurationUpdateAcknowledgeIEs_t *s1AP_MMEConfigurationUpdateAcknowledgeIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_MMEConfigurationUpdateAcknowledgeIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_initialuemessage_ies(
    S1AP_InitialUEMessage_IEs_t *s1AP_InitialUEMessage_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialUEMessage_IEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NAS_PDU, &s1AP_InitialUEMessage_IEs->nas_pdu);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TAI, &s1AP_InitialUEMessage_IEs->tai);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_EUTRAN_CGI, &s1AP_InitialUEMessage_IEs->eutran_cgi);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RRC_Establishment_Cause, &s1AP_InitialUEMessage_IEs->rrC_Establishment_Cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_S_TMSI, &s1AP_InitialUEMessage_IEs->s_tmsi);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CSG_Id, &s1AP_InitialUEMessage_IEs->csG_Id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GUMMEI, &s1AP_InitialUEMessage_IEs->gummei_id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CellAccessMode, &s1AP_InitialUEMessage_IEs->cellAccessMode);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TransportLayerAddress, &s1AP_InitialUEMessage_IEs->gW_TransportLayerAddress);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_RelayNode_Indicator, &s1AP_InitialUEMessage_IEs->relayNode_Indicator);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GUMMEIType, &s1AP_InitialUEMessage_IEs->gummeiType);
}

void s1ap_free_s1ap_celltraffictraceies(
    S1AP_CellTrafficTraceIEs_t *s1AP_CellTrafficTraceIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_CellTrafficTraceIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_CellTrafficTraceIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_UTRAN_Trace_ID, &s1AP_CellTrafficTraceIEs->e_UTRAN_Trace_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_EUTRAN_CGI, &s1AP_CellTrafficTraceIEs->eutran_cgi);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TransportLayerAddress, &s1AP_CellTrafficTraceIEs->traceCollectionEntityIPAddress);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_PrivacyIndicator, &s1AP_CellTrafficTraceIEs->privacyIndicator);
}

void s1ap_free_s1ap_enbstatustransferies(
    S1AP_ENBStatusTransferIEs_t *s1AP_ENBStatusTransferIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_ENBStatusTransferIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_ENBStatusTransferIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_StatusTransfer_TransparentContainer, &s1AP_ENBStatusTransferIEs->eNB_StatusTransfer_TransparentContainer);
}

void s1ap_free_s1ap_uecontextmodificationfailureies(
    S1AP_UEContextModificationFailureIEs_t *s1AP_UEContextModificationFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UEContextModificationFailureIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UEContextModificationFailureIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_UEContextModificationFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_UEContextModificationFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_mmedirectinformationtransferies(
    S1AP_MMEDirectInformationTransferIEs_t *s1AP_MMEDirectInformationTransferIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Inter_SystemInformationTransferType, &s1AP_MMEDirectInformationTransferIEs->inter_SystemInformationTransferTypeMDT);
}

void s1ap_free_s1ap_s1setupfailureies(
    S1AP_S1SetupFailureIEs_t *s1AP_S1SetupFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_S1SetupFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TimeToWait, &s1AP_S1SetupFailureIEs->timeToWait);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_S1SetupFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_downlinks1cdma2000tunnelingies(
    S1AP_DownlinkS1cdma2000tunnelingIEs_t *s1AP_DownlinkS1cdma2000tunnelingIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DownlinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DownlinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    s1ap_free_s1ap_e_rabsubjecttodataforwardinglist(&s1AP_DownlinkS1cdma2000tunnelingIEs->e_RABSubjecttoDataForwardingList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000HOStatus, &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000HOStatus);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000RATType, &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000RATType);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000PDU, &s1AP_DownlinkS1cdma2000tunnelingIEs->cdma2000PDU);
}

void s1ap_free_s1ap_e_rabreleasecommandies(
    S1AP_E_RABReleaseCommandIEs_t *s1AP_E_RABReleaseCommandIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_E_RABReleaseCommandIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_E_RABReleaseCommandIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_UEAggregateMaximumBitrate, &s1AP_E_RABReleaseCommandIEs->uEaggregateMaximumBitrate);
    s1ap_free_s1ap_e_rablist(&s1AP_E_RABReleaseCommandIEs->e_RABToBeReleasedList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_NAS_PDU, &s1AP_E_RABReleaseCommandIEs->nas_pdu);
}

void s1ap_free_s1ap_resetacknowledgeies(
    S1AP_ResetAcknowledgeIEs_t *s1AP_ResetAcknowledgeIEs)
{

            /* Optional field */
    s1ap_free_s1ap_ue_associatedlogicals1_connectionlistresack(&s1AP_ResetAcknowledgeIEs->uE_associatedLogicalS1_ConnectionListResAck);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ResetAcknowledgeIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_deactivatetraceies(
    S1AP_DeactivateTraceIEs_t *s1AP_DeactivateTraceIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_DeactivateTraceIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_DeactivateTraceIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_E_UTRAN_Trace_ID, &s1AP_DeactivateTraceIEs->e_UTRAN_Trace_ID);
}

void s1ap_free_s1ap_pathswitchrequestfailureies(
    S1AP_PathSwitchRequestFailureIEs_t *s1AP_PathSwitchRequestFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_PathSwitchRequestFailureIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_PathSwitchRequestFailureIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_PathSwitchRequestFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_PathSwitchRequestFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_enbdirectinformationtransferies(
    S1AP_ENBDirectInformationTransferIEs_t *s1AP_ENBDirectInformationTransferIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Inter_SystemInformationTransferType, &s1AP_ENBDirectInformationTransferIEs->inter_SystemInformationTransferTypeEDT);
}

void s1ap_free_s1ap_initialcontextsetupfailureies(
    S1AP_InitialContextSetupFailureIEs_t *s1AP_InitialContextSetupFailureIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_InitialContextSetupFailureIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_InitialContextSetupFailureIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_InitialContextSetupFailureIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_InitialContextSetupFailureIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_uplinks1cdma2000tunnelingies(
    S1AP_UplinkS1cdma2000tunnelingIEs_t *s1AP_UplinkS1cdma2000tunnelingIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_UplinkS1cdma2000tunnelingIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_UplinkS1cdma2000tunnelingIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000RATType, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000RATType);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000SectorID, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000SectorID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000HORequiredIndication, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000HORequiredIndication);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000OneXSRVCCInfo, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXSRVCCInfo);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000OneXRAND, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000OneXRAND);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cdma2000PDU, &s1AP_UplinkS1cdma2000tunnelingIEs->cdma2000PDU);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_EUTRANRoundTripDelayEstimationInfo, &s1AP_UplinkS1cdma2000tunnelingIEs->eutranRoundTripDelayEstimationInfo);
}

void s1ap_free_s1ap_errorindicationies(
    S1AP_ErrorIndicationIEs_t *s1AP_ErrorIndicationIEs)
{

            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_ErrorIndicationIEs->mme_ue_s1ap_id);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_ErrorIndicationIEs->eNB_UE_S1AP_ID);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Cause, &s1AP_ErrorIndicationIEs->cause);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_CriticalityDiagnostics, &s1AP_ErrorIndicationIEs->criticalityDiagnostics);
}

void s1ap_free_s1ap_killrequesties(
    S1AP_KillRequestIEs_t *s1AP_KillRequestIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MessageIdentifier, &s1AP_KillRequestIEs->messageIdentifier);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_SerialNumber, &s1AP_KillRequestIEs->serialNumber);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_WarningAreaList, &s1AP_KillRequestIEs->warningAreaList);
}

void s1ap_free_s1ap_tracestarties(
    S1AP_TraceStartIEs_t *s1AP_TraceStartIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_MME_UE_S1AP_ID, &s1AP_TraceStartIEs->mme_ue_s1ap_id);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_ENB_UE_S1AP_ID, &s1AP_TraceStartIEs->eNB_UE_S1AP_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TraceActivation, &s1AP_TraceStartIEs->traceActivation);
}

void s1ap_free_s1ap_overloadstarties(
    S1AP_OverloadStartIEs_t *s1AP_OverloadStartIEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_OverloadResponse, &s1AP_OverloadStartIEs->overloadResponse);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_GUMMEIList, &s1AP_OverloadStartIEs->gummeiList);
            /* Optional field */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_TrafficLoadReductionIndication, &s1AP_OverloadStartIEs->trafficLoadReductionIndication);
}

void s1ap_free_s1ap_uplinknonueassociatedlppatransport_ies(
    S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkNonUEAssociatedLPPaTransport_IEs)
{

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_Routing_ID, &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->routing_ID);
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_S1AP_LPPa_PDU, &s1AP_UplinkNonUEAssociatedLPPaTransport_IEs->lpPa_PDU);
}

void s1ap_free_s1ap_e_rabmodifylistbearermodres(
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModResIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABModifyListBearerModResIEs->s1AP_E_RABModifyItemBearerModRes.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABModifyItemBearerModRes, s1AP_E_RABModifyListBearerModResIEs->s1AP_E_RABModifyItemBearerModRes.array[i]);
    }

    if (s1AP_E_RABModifyListBearerModResIEs->s1AP_E_RABModifyItemBearerModRes.array)
       FREEMEM(s1AP_E_RABModifyListBearerModResIEs->s1AP_E_RABModifyItemBearerModRes.array);
}

void s1ap_free_s1ap_e_rabreleaselistbearerrelcomp(
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelCompIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABReleaseListBearerRelCompIEs->s1AP_E_RABReleaseItemBearerRelComp.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABReleaseItemBearerRelComp, s1AP_E_RABReleaseListBearerRelCompIEs->s1AP_E_RABReleaseItemBearerRelComp.array[i]);
    }

    if (s1AP_E_RABReleaseListBearerRelCompIEs->s1AP_E_RABReleaseItemBearerRelComp.array)
       FREEMEM(s1AP_E_RABReleaseListBearerRelCompIEs->s1AP_E_RABReleaseItemBearerRelComp.array);
}

void s1ap_free_s1ap_e_rabtobemodifiedlistbearermodreq(
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReqIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABToBeModifiedListBearerModReqIEs->s1AP_E_RABToBeModifiedItemBearerModReq.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeModifiedItemBearerModReq, s1AP_E_RABToBeModifiedListBearerModReqIEs->s1AP_E_RABToBeModifiedItemBearerModReq.array[i]);
    }

    if (s1AP_E_RABToBeModifiedListBearerModReqIEs->s1AP_E_RABToBeModifiedItemBearerModReq.array)
       FREEMEM(s1AP_E_RABToBeModifiedListBearerModReqIEs->s1AP_E_RABToBeModifiedItemBearerModReq.array);
}

void s1ap_free_s1ap_e_rabtobesetuplistbearersureq(
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReqIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABToBeSetupListBearerSUReqIEs->s1AP_E_RABToBeSetupItemBearerSUReq.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupItemBearerSUReq, s1AP_E_RABToBeSetupListBearerSUReqIEs->s1AP_E_RABToBeSetupItemBearerSUReq.array[i]);
    }

    if (s1AP_E_RABToBeSetupListBearerSUReqIEs->s1AP_E_RABToBeSetupItemBearerSUReq.array)
       FREEMEM(s1AP_E_RABToBeSetupListBearerSUReqIEs->s1AP_E_RABToBeSetupItemBearerSUReq.array);
}

void s1ap_free_s1ap_e_rabsubjecttodataforwardinglist(
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABSubjecttoDataForwardingListIEs->s1AP_E_RABDataForwardingItem.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABDataForwardingItem, s1AP_E_RABSubjecttoDataForwardingListIEs->s1AP_E_RABDataForwardingItem.array[i]);
    }

    if (s1AP_E_RABSubjecttoDataForwardingListIEs->s1AP_E_RABDataForwardingItem.array)
       FREEMEM(s1AP_E_RABSubjecttoDataForwardingListIEs->s1AP_E_RABDataForwardingItem.array);
}

void s1ap_free_s1ap_ue_associatedlogicals1_connectionlistres(
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListResIEs->s1AP_UE_associatedLogicalS1_ConnectionItemRes.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, s1AP_UE_associatedLogicalS1_ConnectionListResIEs->s1AP_UE_associatedLogicalS1_ConnectionItemRes.array[i]);
    }

    if (s1AP_UE_associatedLogicalS1_ConnectionListResIEs->s1AP_UE_associatedLogicalS1_ConnectionItemRes.array)
       FREEMEM(s1AP_UE_associatedLogicalS1_ConnectionListResIEs->s1AP_UE_associatedLogicalS1_ConnectionItemRes.array);
}

void s1ap_free_s1ap_e_rabsetuplistbearersures(
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSUResIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABSetupListBearerSUResIEs->s1AP_E_RABSetupItemBearerSURes.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupItemBearerSURes, s1AP_E_RABSetupListBearerSUResIEs->s1AP_E_RABSetupItemBearerSURes.array[i]);
    }

    if (s1AP_E_RABSetupListBearerSUResIEs->s1AP_E_RABSetupItemBearerSURes.array)
       FREEMEM(s1AP_E_RABSetupListBearerSUResIEs->s1AP_E_RABSetupItemBearerSURes.array);
}

void s1ap_free_s1ap_bearers_subjecttostatustransferlist(
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_Bearers_SubjectToStatusTransferListIEs->s1AP_Bearers_SubjectToStatusTransfer_Item.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_Bearers_SubjectToStatusTransfer_Item, s1AP_Bearers_SubjectToStatusTransferListIEs->s1AP_Bearers_SubjectToStatusTransfer_Item.array[i]);
    }

    if (s1AP_Bearers_SubjectToStatusTransferListIEs->s1AP_Bearers_SubjectToStatusTransfer_Item.array)
       FREEMEM(s1AP_Bearers_SubjectToStatusTransferListIEs->s1AP_Bearers_SubjectToStatusTransfer_Item.array);
}

void s1ap_free_s1ap_tailist(
    S1AP_TAIList_IEs_t *s1AP_TAIListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_TAIListIEs->s1AP_TAIItem.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_TAIItem, s1AP_TAIListIEs->s1AP_TAIItem.array[i]);
    }

    if (s1AP_TAIListIEs->s1AP_TAIItem.array)
       FREEMEM(s1AP_TAIListIEs->s1AP_TAIItem.array);
}

void s1ap_free_s1ap_e_rabtobesetuplisthoreq(
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReqIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABToBeSetupListHOReqIEs->s1AP_E_RABToBeSetupItemHOReq.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupItemHOReq, s1AP_E_RABToBeSetupListHOReqIEs->s1AP_E_RABToBeSetupItemHOReq.array[i]);
    }

    if (s1AP_E_RABToBeSetupListHOReqIEs->s1AP_E_RABToBeSetupItemHOReq.array)
       FREEMEM(s1AP_E_RABToBeSetupListHOReqIEs->s1AP_E_RABToBeSetupItemHOReq.array);
}

void s1ap_free_s1ap_e_rabtobeswitchedullist(
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABToBeSwitchedULListIEs->s1AP_E_RABToBeSwitchedULItem.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedULItem, s1AP_E_RABToBeSwitchedULListIEs->s1AP_E_RABToBeSwitchedULItem.array[i]);
    }

    if (s1AP_E_RABToBeSwitchedULListIEs->s1AP_E_RABToBeSwitchedULItem.array)
       FREEMEM(s1AP_E_RABToBeSwitchedULListIEs->s1AP_E_RABToBeSwitchedULItem.array);
}

void s1ap_free_s1ap_e_rablist(
    S1AP_E_RABList_IEs_t *s1AP_E_RABListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABListIEs->s1AP_E_RABItem.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABItem, s1AP_E_RABListIEs->s1AP_E_RABItem.array[i]);
    }

    if (s1AP_E_RABListIEs->s1AP_E_RABItem.array)
       FREEMEM(s1AP_E_RABListIEs->s1AP_E_RABItem.array);
}

void s1ap_free_s1ap_e_rabfailedtosetuplisthoreqack(
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAckIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABFailedtoSetupListHOReqAckIEs->s1AP_E_RABFailedtoSetupItemHOReqAck.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck, s1AP_E_RABFailedtoSetupListHOReqAckIEs->s1AP_E_RABFailedtoSetupItemHOReqAck.array[i]);
    }

    if (s1AP_E_RABFailedtoSetupListHOReqAckIEs->s1AP_E_RABFailedtoSetupItemHOReqAck.array)
       FREEMEM(s1AP_E_RABFailedtoSetupListHOReqAckIEs->s1AP_E_RABFailedtoSetupItemHOReqAck.array);
}

void s1ap_free_s1ap_e_rabtobeswitcheddllist(
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABToBeSwitchedDLListIEs->s1AP_E_RABToBeSwitchedDLItem.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSwitchedDLItem, s1AP_E_RABToBeSwitchedDLListIEs->s1AP_E_RABToBeSwitchedDLItem.array[i]);
    }

    if (s1AP_E_RABToBeSwitchedDLListIEs->s1AP_E_RABToBeSwitchedDLItem.array)
       FREEMEM(s1AP_E_RABToBeSwitchedDLListIEs->s1AP_E_RABToBeSwitchedDLItem.array);
}

void s1ap_free_s1ap_e_rabadmittedlist(
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABAdmittedListIEs->s1AP_E_RABAdmittedItem.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABAdmittedItem, s1AP_E_RABAdmittedListIEs->s1AP_E_RABAdmittedItem.array[i]);
    }

    if (s1AP_E_RABAdmittedListIEs->s1AP_E_RABAdmittedItem.array)
       FREEMEM(s1AP_E_RABAdmittedListIEs->s1AP_E_RABAdmittedItem.array);
}

void s1ap_free_s1ap_e_rabtobesetuplistctxtsureq(
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReqIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABToBeSetupListCtxtSUReqIEs->s1AP_E_RABToBeSetupItemCtxtSUReq.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABToBeSetupItemCtxtSUReq, s1AP_E_RABToBeSetupListCtxtSUReqIEs->s1AP_E_RABToBeSetupItemCtxtSUReq.array[i]);
    }

    if (s1AP_E_RABToBeSetupListCtxtSUReqIEs->s1AP_E_RABToBeSetupItemCtxtSUReq.array)
       FREEMEM(s1AP_E_RABToBeSetupListCtxtSUReqIEs->s1AP_E_RABToBeSetupItemCtxtSUReq.array);
}

void s1ap_free_s1ap_e_rabinformationlist(
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationListIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABInformationListIEs->s1AP_E_RABInformationList.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABInformationListItem, s1AP_E_RABInformationListIEs->s1AP_E_RABInformationList.array[i]);
    }

    if (s1AP_E_RABInformationListIEs->s1AP_E_RABInformationList.array)
       FREEMEM(s1AP_E_RABInformationListIEs->s1AP_E_RABInformationList.array);
}

void s1ap_free_s1ap_e_rabsetuplistctxtsures(
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSUResIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_E_RABSetupListCtxtSUResIEs->s1AP_E_RABSetupItemCtxtSURes.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_E_RABSetupItemCtxtSURes, s1AP_E_RABSetupListCtxtSUResIEs->s1AP_E_RABSetupItemCtxtSURes.array[i]);
    }

    if (s1AP_E_RABSetupListCtxtSUResIEs->s1AP_E_RABSetupItemCtxtSURes.array)
       FREEMEM(s1AP_E_RABSetupListCtxtSUResIEs->s1AP_E_RABSetupItemCtxtSURes.array);
}

void s1ap_free_s1ap_ue_associatedlogicals1_connectionlistresack(
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs)
{
    int i = 0;

    for (i = 0; i < s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.count; i++)
    {
        ASN_STRUCT_FREE(asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem, s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.array[i]);
    }

    if (s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.array)
       FREEMEM(s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs->s1AP_UE_associatedLogicalS1_ConnectionItemResAck.array);
}

