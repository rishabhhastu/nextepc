#define TRACE_MODULE _s1free

#include "core_debug.h"
#include "s1ap_message.h"

static inline int s1ap_free_initiating_message(s1ap_message_t *message);
static inline int s1ap_free_successfull_outcome(s1ap_message_t *message);
static inline int s1ap_free_unsuccessfull_outcome(s1ap_message_t *message);

int s1ap_free_pdu(s1ap_message_t *message)
{
    d_assert (message, return -1, "Null param");

    switch (message->direction) 
    {
        case S1AP_PDU_PR_initiatingMessage:
            return s1ap_free_initiating_message(message);

        case S1AP_PDU_PR_successfulOutcome:
            return s1ap_free_successfull_outcome(message);

        case S1AP_PDU_PR_unsuccessfulOutcome:
            return s1ap_free_unsuccessfull_outcome(message);

        default:
            d_warn("Unknown message outcome (%d) or not implemented", 
                    (int)message->direction);
            break;
    }

    return -1;
}

static inline int s1ap_free_initiating_message(s1ap_message_t *message)
{
    switch (message->procedureCode) 
    {
        case S1AP_ProcedureCode_id_S1Setup:
            s1ap_free_s1ap_s1setuprequesties(
                    &message->s1AP_S1SetupRequestIEs);
            break;

        case S1AP_ProcedureCode_id_initialUEMessage: 
            s1ap_free_s1ap_initialuemessage_ies(
                    &message->s1AP_InitialUEMessage_IEs);
            break;

        case S1AP_ProcedureCode_id_downlinkNASTransport:
            s1ap_free_s1ap_downlinknastransport_ies(
                    &message->s1AP_DownlinkNASTransport_IEs);
            break;

        case S1AP_ProcedureCode_id_uplinkNASTransport: 
            s1ap_free_s1ap_uplinknastransport_ies(
                    &message->s1AP_UplinkNASTransport_IEs);
            break;

        case S1AP_ProcedureCode_id_InitialContextSetup:
            s1ap_free_s1ap_initialcontextsetuprequesties(
                    &message->s1AP_InitialContextSetupRequestIEs);
            break;

        case S1AP_ProcedureCode_id_UECapabilityInfoIndication: 
            s1ap_free_s1ap_uecapabilityinfoindicationies(
                    &message->s1AP_UECapabilityInfoIndicationIEs);
            break;

        case S1AP_ProcedureCode_id_E_RABSetup:
            s1ap_free_s1ap_e_rabsetuprequesties(
                    &message->s1AP_E_RABSetupRequestIEs);
            break;

        case S1AP_ProcedureCode_id_E_RABModify: 
            s1ap_free_s1ap_e_rabmodifyrequesties(
                &message->s1AP_E_RABModifyRequestIEs);
            break;

        case S1AP_ProcedureCode_id_E_RABRelease:
            s1ap_free_s1ap_e_rabreleasecommandies(
                    &message->s1AP_E_RABReleaseCommandIEs);
            break;

        case S1AP_ProcedureCode_id_UEContextRelease:
            s1ap_free_s1ap_uecontextreleasecommand_ies(
                    &message->s1AP_UEContextReleaseCommand_IEs);
            break;

        case S1AP_ProcedureCode_id_UEContextReleaseRequest: 
            s1ap_free_s1ap_uecontextreleaserequest_ies(
                    &message->s1AP_UEContextReleaseRequest_IEs);
            break;

        case S1AP_ProcedureCode_id_Paging:
            s1ap_free_s1ap_pagingies(
                    &message->s1AP_PagingIEs);
            break;

        case S1AP_ProcedureCode_id_PathSwitchRequest:
            s1ap_free_s1ap_pathswitchrequesties(
                    &message->s1AP_PathSwitchRequestIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverPreparation:
            s1ap_free_s1ap_handoverrequiredies(
                    &message->s1AP_HandoverRequiredIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverResourceAllocation:
            s1ap_free_s1ap_handoverrequesties(
                    &message->s1AP_HandoverRequestIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverCancel:
            s1ap_free_s1ap_handovercancelies(
                    &message->s1AP_HandoverCancelIEs);
            break;

        case S1AP_ProcedureCode_id_eNBStatusTransfer:
            s1ap_free_s1ap_enbstatustransferies(
                    &message->s1AP_ENBStatusTransferIEs);
            break;

        case S1AP_ProcedureCode_id_MMEStatusTransfer:
            s1ap_free_s1ap_mmestatustransferies(
                    &message->s1AP_MMEStatusTransferIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverNotification:
            s1ap_free_s1ap_handovernotifyies(
                    &message->s1AP_HandoverNotifyIEs);
            break;

        case S1AP_ProcedureCode_id_NASNonDeliveryIndication: 
            s1ap_free_s1ap_nasnondeliveryindication_ies(
                    &message->s1AP_NASNonDeliveryIndication_IEs);
            break;

        case S1AP_ProcedureCode_id_ErrorIndication: 
            s1ap_free_s1ap_errorindicationies(
                    &message->s1AP_ErrorIndicationIEs);
            break;

        case S1AP_ProcedureCode_id_Reset: 
            s1ap_free_s1ap_reseties(
                    &message->s1AP_ResetIEs);
            break;

        default:
            d_warn("Unknown procedure ID (%d) for initiating message\n", 
                    (int)message->procedureCode);
            return -1;
    }

    return 0;
}

static inline int s1ap_free_successfull_outcome(s1ap_message_t *message)
{
    switch (message->procedureCode) 
    {
        case S1AP_ProcedureCode_id_S1Setup:
            s1ap_free_s1ap_s1setupresponseies(
                    &message->s1AP_S1SetupResponseIEs);
            break;

        case S1AP_ProcedureCode_id_InitialContextSetup: 
            s1ap_free_s1ap_initialcontextsetupresponseies(
                &message->s1AP_InitialContextSetupResponseIEs);
            break;

        case S1AP_ProcedureCode_id_E_RABSetup: 
            s1ap_free_s1ap_e_rabsetupresponseies(
                &message->s1AP_E_RABSetupResponseIEs);
            break;

        case S1AP_ProcedureCode_id_E_RABModify: 
            s1ap_free_s1ap_e_rabmodifyresponseies(
                &message->s1AP_E_RABModifyResponseIEs);
            break;

        case S1AP_ProcedureCode_id_E_RABRelease:
            s1ap_free_s1ap_e_rabmodifyresponseies(
                    &message->s1AP_E_RABModifyResponseIEs);
            break;

        case S1AP_ProcedureCode_id_UEContextRelease: 
            s1ap_free_s1ap_uecontextreleasecomplete_ies(
                    &message->s1AP_UEContextReleaseComplete_IEs);
            break;

        case S1AP_ProcedureCode_id_PathSwitchRequest:
            s1ap_free_s1ap_pathswitchrequestacknowledgeies(
                    &message->s1AP_PathSwitchRequestAcknowledgeIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverResourceAllocation: 
            s1ap_free_s1ap_handoverrequestacknowledgeies(
                    &message->s1AP_HandoverRequestAcknowledgeIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverCancel:
            s1ap_free_s1ap_handovercancelacknowledgeies(
                    &message->s1AP_HandoverCancelAcknowledgeIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverPreparation: 
            s1ap_free_s1ap_handovercommandies(
                    &message->s1AP_HandoverCommandIEs);
            break;

        case S1AP_ProcedureCode_id_Reset: 
            s1ap_free_s1ap_resetacknowledgeies(
                    &message->s1AP_ResetAcknowledgeIEs);
            break;

        default:
            d_warn("Unknown procedure ID (%d) for successfull "
                    "outcome message\n", (int)message->procedureCode);
            return -1;
    }

    return 0;
}

static inline int s1ap_free_unsuccessfull_outcome(s1ap_message_t *message)
{
    switch (message->procedureCode) 
    {
        case S1AP_ProcedureCode_id_S1Setup:
            s1ap_free_s1ap_s1setupfailureies(
                    &message->s1AP_S1SetupFailureIEs);
            break;

        case S1AP_ProcedureCode_id_InitialContextSetup: 
            s1ap_free_s1ap_initialcontextsetupfailureies(
                &message->s1AP_InitialContextSetupFailureIEs);
            break;

        case S1AP_ProcedureCode_id_PathSwitchRequest:
            s1ap_free_s1ap_pathswitchrequestfailureies(
                    &message->s1AP_PathSwitchRequestFailureIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverPreparation: 
            s1ap_free_s1ap_handoverpreparationfailureies(
                    &message->s1AP_HandoverPreparationFailureIEs);
            break;

        case S1AP_ProcedureCode_id_HandoverResourceAllocation: 
            s1ap_free_s1ap_handoverfailureies(
                    &message->s1AP_HandoverFailureIEs);
            break;

        default:
            d_warn("Unknown procedure ID (%d) for unsuccessfull "
                    "outcome message\n", (int)message->procedureCode);
            return -1;
    }

    return 0;
}
