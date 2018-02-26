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
 * Created on: 2018-02-26 19:44:10.795939 by acetcom
 * from ['S1AP-PDU.asn']
 ******************************************************************************/
#include "s1ap_asn1c.h"

#ifndef S1AP_IES_DEFS_H_
#define S1AP_IES_DEFS_H_

/* Define the version of script used to generate this file */
#define S1AP_SCRIPT_VERSION (102)

typedef struct S1AP_E_RABModifyListBearerModRes_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABModifyItemBearerModRes_s) s1AP_E_RABModifyItemBearerModRes;
} S1AP_E_RABModifyListBearerModRes_IEs_t;

typedef struct S1AP_E_RABReleaseListBearerRelComp_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABReleaseItemBearerRelComp_s) s1AP_E_RABReleaseItemBearerRelComp;
} S1AP_E_RABReleaseListBearerRelComp_IEs_t;

typedef struct S1AP_E_RABToBeModifiedListBearerModReq_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABToBeModifiedItemBearerModReq_s) s1AP_E_RABToBeModifiedItemBearerModReq;
} S1AP_E_RABToBeModifiedListBearerModReq_IEs_t;

typedef struct S1AP_E_RABToBeSetupListBearerSUReq_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABToBeSetupItemBearerSUReq_s) s1AP_E_RABToBeSetupItemBearerSUReq;
} S1AP_E_RABToBeSetupListBearerSUReq_IEs_t;

typedef struct S1AP_E_RABSubjecttoDataForwardingList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABDataForwardingItem_s) s1AP_E_RABDataForwardingItem;
} S1AP_E_RABSubjecttoDataForwardingList_IEs_t;

typedef struct S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_s {
    A_SEQUENCE_OF(struct S1AP_UE_associatedLogicalS1_ConnectionItemRes_s) s1AP_UE_associatedLogicalS1_ConnectionItemRes;
} S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t;

typedef struct S1AP_E_RABSetupListBearerSURes_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABSetupItemBearerSURes_s) s1AP_E_RABSetupItemBearerSURes;
} S1AP_E_RABSetupListBearerSURes_IEs_t;

typedef struct S1AP_Bearers_SubjectToStatusTransferList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_Bearers_SubjectToStatusTransfer_Item_s) s1AP_Bearers_SubjectToStatusTransfer_Item;
} S1AP_Bearers_SubjectToStatusTransferList_IEs_t;

typedef struct S1AP_TAIList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_TAIItem_s) s1AP_TAIItem;
} S1AP_TAIList_IEs_t;

typedef struct S1AP_E_RABToBeSetupListHOReq_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABToBeSetupItemHOReq_s) s1AP_E_RABToBeSetupItemHOReq;
} S1AP_E_RABToBeSetupListHOReq_IEs_t;

typedef struct S1AP_E_RABToBeSwitchedULList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABToBeSwitchedULItem_s) s1AP_E_RABToBeSwitchedULItem;
} S1AP_E_RABToBeSwitchedULList_IEs_t;

typedef struct S1AP_E_RABList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABItem_s) s1AP_E_RABItem;
} S1AP_E_RABList_IEs_t;

typedef struct S1AP_E_RABFailedtoSetupListHOReqAck_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABFailedtoSetupItemHOReqAck_s) s1AP_E_RABFailedtoSetupItemHOReqAck;
} S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t;

typedef struct S1AP_E_RABToBeSwitchedDLList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABToBeSwitchedDLItem_s) s1AP_E_RABToBeSwitchedDLItem;
} S1AP_E_RABToBeSwitchedDLList_IEs_t;

typedef struct S1AP_E_RABAdmittedList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABAdmittedItem_s) s1AP_E_RABAdmittedItem;
} S1AP_E_RABAdmittedList_IEs_t;

typedef struct S1AP_E_RABToBeSetupListCtxtSUReq_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABToBeSetupItemCtxtSUReq_s) s1AP_E_RABToBeSetupItemCtxtSUReq;
} S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t;

typedef struct S1AP_E_RABInformationList_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABInformationList_s) s1AP_E_RABInformationList;
} S1AP_E_RABInformationList_IEs_t;

typedef struct S1AP_E_RABSetupListCtxtSURes_IEs_s {
    A_SEQUENCE_OF(struct S1AP_E_RABSetupItemCtxtSURes_s) s1AP_E_RABSetupItemCtxtSURes;
} S1AP_E_RABSetupListCtxtSURes_IEs_t;

typedef struct S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_s {
    A_SEQUENCE_OF(struct S1AP_UE_associatedLogicalS1_ConnectionItemResAck_s) s1AP_UE_associatedLogicalS1_ConnectionItemResAck;
} S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t;

#define S1AP_E_RABSETUPRESPONSEIES_E_RABSETUPLISTBEARERSURES_PRESENT      (1 << 0)
#define S1AP_E_RABSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTBEARERSURES_PRESENT (1 << 1)
#define S1AP_E_RABSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT         (1 << 2)

typedef struct S1AP_E_RABSetupResponseIEs_s {
    uint16_t                         presenceMask;
    S1AP_MME_UE_S1AP_ID_t            mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t            eNB_UE_S1AP_ID;
    S1AP_E_RABSetupListBearerSURes_IEs_t e_RABSetupListBearerSURes; ///< Optional field
    S1AP_E_RABList_IEs_t e_RABFailedToSetupListBearerSURes; ///< Optional field
    S1AP_CriticalityDiagnostics_t    criticalityDiagnostics; ///< Optional field
} S1AP_E_RABSetupResponseIEs_t;

typedef struct S1AP_UEContextReleaseCommand_IEs_s {
    S1AP_UE_S1AP_IDs_t uE_S1AP_IDs;
    S1AP_Cause_t       cause;
} S1AP_UEContextReleaseCommand_IEs_t;

#define S1AP_MMECONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERMCT_PRESENT   (1 << 0)

typedef struct S1AP_MMEConfigurationTransferIEs_s {
    uint16_t                        presenceMask;
    S1AP_SONConfigurationTransfer_t sonConfigurationTransferMCT; ///< Optional field
} S1AP_MMEConfigurationTransferIEs_t;

typedef struct S1AP_UECapabilityInfoIndicationIEs_s {
    S1AP_MME_UE_S1AP_ID_t    mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t    eNB_UE_S1AP_ID;
    S1AP_UERadioCapability_t ueRadioCapability;
} S1AP_UECapabilityInfoIndicationIEs_t;

#define S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGAREALIST_PRESENT                        (1 << 0)
#define S1AP_WRITEREPLACEWARNINGREQUESTIES_EXTENDEDREPETITIONPERIOD_PRESENT               (1 << 1)
#define S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGTYPE_PRESENT                            (1 << 2)
#define S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGSECURITYINFO_PRESENT                    (1 << 3)
#define S1AP_WRITEREPLACEWARNINGREQUESTIES_DATACODINGSCHEME_PRESENT                       (1 << 4)
#define S1AP_WRITEREPLACEWARNINGREQUESTIES_WARNINGMESSAGECONTENTS_PRESENT                 (1 << 5)
#define S1AP_WRITEREPLACEWARNINGREQUESTIES_CONCURRENTWARNINGMESSAGEINDICATOR_PRESENT      (1 << 6)

typedef struct S1AP_WriteReplaceWarningRequestIEs_s {
    uint16_t                                 presenceMask;
    S1AP_MessageIdentifier_t                 messageIdentifier;
    S1AP_SerialNumber_t                      serialNumber;
    S1AP_WarningAreaList_t                   warningAreaList; ///< Optional field
    S1AP_RepetitionPeriod_t                  repetitionPeriod;
    S1AP_ExtendedRepetitionPeriod_t          extendedRepetitionPeriod; ///< Optional field
    S1AP_NumberofBroadcastRequest_t          numberofBroadcastRequest;
    S1AP_WarningType_t                       warningType; ///< Optional field
    S1AP_WarningSecurityInfo_t               warningSecurityInfo; ///< Optional field
    S1AP_DataCodingScheme_t                  dataCodingScheme; ///< Optional field
    S1AP_WarningMessageContents_t            warningMessageContents; ///< Optional field
    S1AP_ConcurrentWarningMessageIndicator_t concurrentWarningMessageIndicator; ///< Optional field
} S1AP_WriteReplaceWarningRequestIEs_t;

#define S1AP_E_RABSETUPREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT          (1 << 0)

typedef struct S1AP_E_RABSetupRequestIEs_s {
    uint16_t                             presenceMask;
    S1AP_MME_UE_S1AP_ID_t                mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                eNB_UE_S1AP_ID;
    S1AP_UEAggregateMaximumBitrate_t     uEaggregateMaximumBitrate; ///< Optional field
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t e_RABToBeSetupListBearerSUReq;
} S1AP_E_RABSetupRequestIEs_t;

typedef struct S1AP_LocationReportingFailureIndicationIEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_Cause_t          cause;
} S1AP_LocationReportingFailureIndicationIEs_t;

#define S1AP_UECONTEXTRELEASECOMPLETE_IES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_UEContextReleaseComplete_IEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_UEContextReleaseComplete_IEs_t;

typedef struct S1AP_E_RABModifyItemBearerModResIEs_s {
    S1AP_E_RABModifyItemBearerModRes_t e_RABModifyItemBearerModRes;
} S1AP_E_RABModifyItemBearerModResIEs_t;

#define S1AP_OVERLOADSTOPIES_GUMMEILIST_PRESENT      (1 << 0)

typedef struct S1AP_OverloadStopIEs_s {
    uint16_t          presenceMask;
    S1AP_GUMMEIList_t gummeiList; ///< Optional field
} S1AP_OverloadStopIEs_t;

typedef struct S1AP_E_RABReleaseItemBearerRelCompIEs_s {
    S1AP_E_RABReleaseItemBearerRelComp_t e_RABReleaseItemBearerRelComp;
} S1AP_E_RABReleaseItemBearerRelCompIEs_t;

#define S1AP_UECONTEXTMODIFICATIONREQUESTIES_SECURITYKEY_PRESENT                    (1 << 0)
#define S1AP_UECONTEXTMODIFICATIONREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT      (1 << 1)
#define S1AP_UECONTEXTMODIFICATIONREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT      (1 << 2)
#define S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSFALLBACKINDICATOR_PRESENT            (1 << 3)
#define S1AP_UECONTEXTMODIFICATIONREQUESTIES_UESECURITYCAPABILITIES_PRESENT         (1 << 4)
#define S1AP_UECONTEXTMODIFICATIONREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT            (1 << 5)
#define S1AP_UECONTEXTMODIFICATIONREQUESTIES_REGISTEREDLAI_PRESENT                  (1 << 6)

typedef struct S1AP_UEContextModificationRequestIEs_s {
    uint16_t                         presenceMask;
    S1AP_MME_UE_S1AP_ID_t            mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t            eNB_UE_S1AP_ID;
    S1AP_SecurityKey_t               securityKey; ///< Optional field
    S1AP_SubscriberProfileIDforRFP_t subscriberProfileIDforRFP; ///< Optional field
    S1AP_UEAggregateMaximumBitrate_t uEaggregateMaximumBitrate; ///< Optional field
    S1AP_CSFallbackIndicator_t       csFallbackIndicator; ///< Optional field
    S1AP_UESecurityCapabilities_t    ueSecurityCapabilities; ///< Optional field
    S1AP_CSGMembershipStatus_t       csgMembershipStatus; ///< Optional field
    S1AP_LAI_t                       registeredLAI; ///< Optional field
} S1AP_UEContextModificationRequestIEs_t;

#define S1AP_E_RABMODIFYRESPONSEIES_E_RABMODIFYLISTBEARERMODRES_PRESENT      (1 << 0)
#define S1AP_E_RABMODIFYRESPONSEIES_E_RABFAILEDTOMODIFYLIST_PRESENT          (1 << 1)
#define S1AP_E_RABMODIFYRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT           (1 << 2)

typedef struct S1AP_E_RABModifyResponseIEs_s {
    uint16_t                           presenceMask;
    S1AP_MME_UE_S1AP_ID_t              mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t              eNB_UE_S1AP_ID;
    S1AP_E_RABModifyListBearerModRes_IEs_t e_RABModifyListBearerModRes; ///< Optional field
    S1AP_E_RABList_IEs_t e_RABFailedToModifyList; ///< Optional field
    S1AP_CriticalityDiagnostics_t      criticalityDiagnostics; ///< Optional field
} S1AP_E_RABModifyResponseIEs_t;

typedef struct S1AP_LocationReportingControlIEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_RequestType_t    requestType;
} S1AP_LocationReportingControlIEs_t;

#define S1AP_KILLRESPONSEIES_BROADCASTCANCELLEDAREALIST_PRESENT      (1 << 0)
#define S1AP_KILLRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT          (1 << 1)

typedef struct S1AP_KillResponseIEs_s {
    uint16_t                          presenceMask;
    S1AP_MessageIdentifier_t          messageIdentifier;
    S1AP_SerialNumber_t               serialNumber;
    S1AP_BroadcastCancelledAreaList_t broadcastCancelledAreaList; ///< Optional field
    S1AP_CriticalityDiagnostics_t     criticalityDiagnostics; ///< Optional field
} S1AP_KillResponseIEs_t;

typedef struct S1AP_MMEStatusTransferIEs_s {
    S1AP_MME_UE_S1AP_ID_t                          mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                          eNB_UE_S1AP_ID;
    S1AP_ENB_StatusTransfer_TransparentContainer_t eNB_StatusTransfer_TransparentContainer;
} S1AP_MMEStatusTransferIEs_t;

typedef struct S1AP_E_RABToBeModifiedItemBearerModReqIEs_s {
    S1AP_E_RABToBeModifiedItemBearerModReq_t e_RABToBeModifiedItemBearerModReq;
} S1AP_E_RABToBeModifiedItemBearerModReqIEs_t;

#define S1AP_MMECONFIGURATIONUPDATEIES_MMENAME_PRESENT                  (1 << 0)
#define S1AP_MMECONFIGURATIONUPDATEIES_SERVEDGUMMEIS_PRESENT            (1 << 1)
#define S1AP_MMECONFIGURATIONUPDATEIES_RELATIVEMMECAPACITY_PRESENT      (1 << 2)

typedef struct S1AP_MMEConfigurationUpdateIEs_s {
    uint16_t                   presenceMask;
    S1AP_MMEname_t             mmEname; ///< Optional field
    S1AP_ServedGUMMEIs_t       servedGUMMEIs; ///< Optional field
    S1AP_RelativeMMECapacity_t relativeMMECapacity; ///< Optional field
} S1AP_MMEConfigurationUpdateIEs_t;

typedef struct S1AP_TraceFailureIndicationIEs_s {
    S1AP_MME_UE_S1AP_ID_t   mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t   eNB_UE_S1AP_ID;
    S1AP_E_UTRAN_Trace_ID_t e_UTRAN_Trace_ID;
    S1AP_Cause_t            cause;
} S1AP_TraceFailureIndicationIEs_t;

#define S1AP_ENBCONFIGURATIONTRANSFERIES_SONCONFIGURATIONTRANSFERECT_PRESENT   (1 << 0)

typedef struct S1AP_ENBConfigurationTransferIEs_s {
    uint16_t                        presenceMask;
    S1AP_SONConfigurationTransfer_t sonConfigurationTransferECT; ///< Optional field
} S1AP_ENBConfigurationTransferIEs_t;

typedef struct S1AP_DownlinkUEAssociatedLPPaTransport_IEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_Routing_ID_t     routing_ID;
    S1AP_LPPa_PDU_t       lpPa_PDU;
} S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t;

#define S1AP_HANDOVERFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_HandoverFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_Cause_t                  cause;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_HandoverFailureIEs_t;

#define S1AP_UPLINKNASTRANSPORT_IES_GW_TRANSPORTLAYERADDRESS_PRESENT   (1 << 0)

typedef struct S1AP_UplinkNASTransport_IEs_s {
    uint16_t                     presenceMask;
    S1AP_MME_UE_S1AP_ID_t        mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t        eNB_UE_S1AP_ID;
    S1AP_NAS_PDU_t               nas_pdu;
    S1AP_EUTRAN_CGI_t            eutran_cgi;
    S1AP_TAI_t                   tai;
    S1AP_TransportLayerAddress_t gW_TransportLayerAddress; ///< Optional field
} S1AP_UplinkNASTransport_IEs_t;

#define S1AP_S1SETUPREQUESTIES_ENBNAME_PRESENT            (1 << 0)
#define S1AP_S1SETUPREQUESTIES_CSG_IDLIST_PRESENT         (1 << 1)

typedef struct S1AP_S1SetupRequestIEs_s {
    uint16_t             presenceMask;
    S1AP_Global_ENB_ID_t global_ENB_ID;
    S1AP_ENBname_t       eNBname; ///< Optional field
    S1AP_SupportedTAs_t  supportedTAs;
    S1AP_PagingDRX_t     defaultPagingDRX;
    S1AP_CSG_IdList_t    csG_IdList; ///< Optional field
} S1AP_S1SetupRequestIEs_t;

#define S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT                  (1 << 0)
#define S1AP_ENBCONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 1)

typedef struct S1AP_ENBConfigurationUpdateFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_Cause_t                  cause;
    S1AP_TimeToWait_t             timeToWait; ///< Optional field
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_ENBConfigurationUpdateFailureIEs_t;

#define S1AP_PATHSWITCHREQUESTIES_CSG_ID_PRESENT                       (1 << 0)
#define S1AP_PATHSWITCHREQUESTIES_CELLACCESSMODE_PRESENT               (1 << 1)
#define S1AP_PATHSWITCHREQUESTIES_SOURCEMME_GUMMEI_PRESENT             (1 << 2)

typedef struct S1AP_PathSwitchRequestIEs_s {
    uint16_t                       presenceMask;
    S1AP_ENB_UE_S1AP_ID_t          eNB_UE_S1AP_ID;
    S1AP_E_RABToBeSwitchedDLList_IEs_t e_RABToBeSwitchedDLList;
    S1AP_MME_UE_S1AP_ID_t          sourceMME_UE_S1AP_ID;
    S1AP_EUTRAN_CGI_t              eutran_cgi;
    S1AP_TAI_t                     tai;
    S1AP_UESecurityCapabilities_t  ueSecurityCapabilities;
    S1AP_CSG_Id_t                  csG_Id; ///< Optional field
    S1AP_CellAccessMode_t          cellAccessMode; ///< Optional field
    S1AP_GUMMEI_t                  sourceMME_GUMMEI; ///< Optional field
} S1AP_PathSwitchRequestIEs_t;

typedef struct S1AP_E_RABToBeSetupItemBearerSUReqIEs_s {
    S1AP_E_RABToBeSetupItemBearerSUReq_t e_RABToBeSetupItemBearerSUReq;
} S1AP_E_RABToBeSetupItemBearerSUReqIEs_t;

typedef struct S1AP_ResetIEs_s {
    S1AP_Cause_t     cause;
    S1AP_ResetType_t resetType;
} S1AP_ResetIEs_t;

typedef struct S1AP_E_RABDataForwardingItemIEs_s {
    S1AP_E_RABDataForwardingItem_t e_RABDataForwardingItem;
} S1AP_E_RABDataForwardingItemIEs_t;

#define S1AP_UECONTEXTRELEASEREQUEST_IES_GWCONTEXTRELEASEINDICATION_PRESENT      (1 << 0)

typedef struct S1AP_UEContextReleaseRequest_IEs_s {
    uint16_t                          presenceMask;
    S1AP_MME_UE_S1AP_ID_t             mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t             eNB_UE_S1AP_ID;
    S1AP_Cause_t                      cause;
    S1AP_GWContextReleaseIndication_t gwContextReleaseIndication; ///< Optional field
} S1AP_UEContextReleaseRequest_IEs_t;

typedef struct S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_s {
    S1AP_Routing_ID_t routing_ID;
    S1AP_LPPa_PDU_t   lpPa_PDU;
} S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t;

typedef struct S1AP_UE_associatedLogicalS1_ConnectionItemRes_s {
    S1AP_UE_associatedLogicalS1_ConnectionItem_t uE_associatedLogicalS1_ConnectionItem;
} S1AP_UE_associatedLogicalS1_ConnectionItemRes_t;

#define S1AP_PAGINGIES_PAGINGDRX_PRESENT                 (1 << 0)
#define S1AP_PAGINGIES_CSG_IDLIST_PRESENT                (1 << 1)
#define S1AP_PAGINGIES_PAGINGPRIORITY_PRESENT            (1 << 2)

typedef struct S1AP_PagingIEs_s {
    uint16_t                    presenceMask;
    S1AP_UEIdentityIndexValue_t ueIdentityIndexValue;
    S1AP_UEPagingID_t           uePagingID;
    S1AP_PagingDRX_t            pagingDRX; ///< Optional field
    S1AP_CNDomain_t             cnDomain;
    S1AP_TAIList_IEs_t taiList;
    S1AP_CSG_IdList_t           csG_IdList; ///< Optional field
    S1AP_PagingPriority_t       pagingPriority; ///< Optional field
} S1AP_PagingIEs_t;

#define S1AP_ENBCONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_ENBConfigurationUpdateAcknowledgeIEs_s {
    uint16_t                      presenceMask;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_ENBConfigurationUpdateAcknowledgeIEs_t;

typedef struct S1AP_E_RABSetupItemBearerSUResIEs_s {
    S1AP_E_RABSetupItemBearerSURes_t e_RABSetupItemBearerSURes;
} S1AP_E_RABSetupItemBearerSUResIEs_t;

typedef struct S1AP_HandoverNotifyIEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_EUTRAN_CGI_t     eutran_cgi;
    S1AP_TAI_t            tai;
} S1AP_HandoverNotifyIEs_t;

#define S1AP_HANDOVERCANCELACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_HandoverCancelAcknowledgeIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_HandoverCancelAcknowledgeIEs_t;

#define S1AP_HANDOVERCOMMANDIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT          (1 << 0)
#define S1AP_HANDOVERCOMMANDIES_E_RABTORELEASELISTHOCMD_PRESENT                   (1 << 1)
#define S1AP_HANDOVERCOMMANDIES_TARGET_TOSOURCE_TRANSPARENTCONTAINER_SECONDARY_PRESENT (1 << 2)
#define S1AP_HANDOVERCOMMANDIES_CRITICALITYDIAGNOSTICS_PRESENT                    (1 << 3)

typedef struct S1AP_HandoverCommandIEs_s {
    uint16_t                                    presenceMask;
    S1AP_MME_UE_S1AP_ID_t                       mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                       eNB_UE_S1AP_ID;
    S1AP_HandoverType_t                         handoverType;
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t e_RABSubjecttoDataForwardingList; ///< Optional field
    S1AP_E_RABList_IEs_t e_RABtoReleaseListHOCmd; ///< Optional field
    S1AP_Target_ToSource_TransparentContainer_t target_ToSource_TransparentContainer;
    S1AP_Target_ToSource_TransparentContainer_t target_ToSource_TransparentContainer_Secondary; ///< Optional field
    S1AP_CriticalityDiagnostics_t               criticalityDiagnostics; ///< Optional field
} S1AP_HandoverCommandIEs_t;

typedef struct S1AP_Bearers_SubjectToStatusTransfer_ItemIEs_s {
    S1AP_Bearers_SubjectToStatusTransfer_Item_t bearers_SubjectToStatusTransfer_Item;
} S1AP_Bearers_SubjectToStatusTransfer_ItemIEs_t;

#define S1AP_WRITEREPLACEWARNINGRESPONSEIES_BROADCASTCOMPLETEDAREALIST_PRESENT      (1 << 0)
#define S1AP_WRITEREPLACEWARNINGRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT          (1 << 1)

typedef struct S1AP_WriteReplaceWarningResponseIEs_s {
    uint16_t                          presenceMask;
    S1AP_MessageIdentifier_t          messageIdentifier;
    S1AP_SerialNumber_t               serialNumber;
    S1AP_BroadcastCompletedAreaList_t broadcastCompletedAreaList; ///< Optional field
    S1AP_CriticalityDiagnostics_t     criticalityDiagnostics; ///< Optional field
} S1AP_WriteReplaceWarningResponseIEs_t;

typedef struct S1AP_TAIItemIEs_s {
    S1AP_TAIItem_t taiItem;
} S1AP_TAIItemIEs_t;

typedef struct S1AP_HandoverCancelIEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_Cause_t          cause;
} S1AP_HandoverCancelIEs_t;

#define S1AP_HANDOVERPREPARATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_HandoverPreparationFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID;
    S1AP_Cause_t                  cause;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_HandoverPreparationFailureIEs_t;

typedef struct S1AP_E_RABToBeSetupItemHOReqIEs_s {
    S1AP_E_RABToBeSetupItemHOReq_t e_RABToBeSetupItemHOReq;
} S1AP_E_RABToBeSetupItemHOReqIEs_t;

#define S1AP_E_RABMODIFYREQUESTIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT              (1 << 0)

typedef struct S1AP_E_RABModifyRequestIEs_s {
    uint16_t                                 presenceMask;
    S1AP_MME_UE_S1AP_ID_t                    mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                    eNB_UE_S1AP_ID;
    S1AP_UEAggregateMaximumBitrate_t         uEaggregateMaximumBitrate; ///< Optional field
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t e_RABToBeModifiedListBearerModReq;
} S1AP_E_RABModifyRequestIEs_t;

#define S1AP_HANDOVERREQUESTACKNOWLEDGEIES_E_RABFAILEDTOSETUPLISTHOREQACK_PRESENT            (1 << 0)
#define S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CSG_ID_PRESENT                                    (1 << 1)
#define S1AP_HANDOVERREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT                    (1 << 2)

typedef struct S1AP_HandoverRequestAcknowledgeIEs_s {
    uint16_t                                    presenceMask;
    S1AP_MME_UE_S1AP_ID_t                       mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                       eNB_UE_S1AP_ID;
    S1AP_E_RABAdmittedList_IEs_t e_RABAdmittedList;
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t e_RABFailedToSetupListHOReqAck; ///< Optional field
    S1AP_Target_ToSource_TransparentContainer_t target_ToSource_TransparentContainer;
    S1AP_CSG_Id_t                               csG_Id; ///< Optional field
    S1AP_CriticalityDiagnostics_t               criticalityDiagnostics; ///< Optional field
} S1AP_HandoverRequestAcknowledgeIEs_t;

typedef struct S1AP_E_RABToBeSwitchedULItemIEs_s {
    S1AP_E_RABToBeSwitchedULItem_t e_RABToBeSwitchedULItem;
} S1AP_E_RABToBeSwitchedULItemIEs_t;

#define S1AP_DOWNLINKNASTRANSPORT_IES_HANDOVERRESTRICTIONLIST_PRESENT        (1 << 0)
#define S1AP_DOWNLINKNASTRANSPORT_IES_SUBSCRIBERPROFILEIDFORRFP_PRESENT      (1 << 1)

typedef struct S1AP_DownlinkNASTransport_IEs_s {
    uint16_t                         presenceMask;
    S1AP_MME_UE_S1AP_ID_t            mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t            eNB_UE_S1AP_ID;
    S1AP_NAS_PDU_t                   nas_pdu;
    S1AP_HandoverRestrictionList_t   handoverRestrictionList; ///< Optional field
    S1AP_SubscriberProfileIDforRFP_t subscriberProfileIDforRFP; ///< Optional field
} S1AP_DownlinkNASTransport_IEs_t;

typedef struct S1AP_E_RABReleaseIndicationIEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_E_RABList_IEs_t e_RABReleasedList;
} S1AP_E_RABReleaseIndicationIEs_t;

#define S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT      (1 << 0)
#define S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBESWITCHEDULLIST_PRESENT        (1 << 1)
#define S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_E_RABTOBERELEASEDLIST_PRESENT          (1 << 2)
#define S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT         (1 << 3)
#define S1AP_PATHSWITCHREQUESTACKNOWLEDGEIES_MME_UE_S1AP_ID_2_PRESENT               (1 << 4)

typedef struct S1AP_PathSwitchRequestAcknowledgeIEs_s {
    uint16_t                         presenceMask;
    S1AP_MME_UE_S1AP_ID_t            mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t            eNB_UE_S1AP_ID;
    S1AP_UEAggregateMaximumBitrate_t uEaggregateMaximumBitrate; ///< Optional field
    S1AP_E_RABToBeSwitchedULList_IEs_t e_RABToBeSwitchedULList; ///< Optional field
    S1AP_E_RABList_IEs_t e_RABToBeReleasedList; ///< Optional field
    S1AP_SecurityContext_t           securityContext;
    S1AP_CriticalityDiagnostics_t    criticalityDiagnostics; ///< Optional field
    S1AP_MME_UE_S1AP_ID_t            mme_ue_s1ap_id_2; ///< Optional field
} S1AP_PathSwitchRequestAcknowledgeIEs_t;

typedef struct S1AP_NASNonDeliveryIndication_IEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_NAS_PDU_t        nas_pdu;
    S1AP_Cause_t          cause;
} S1AP_NASNonDeliveryIndication_IEs_t;

typedef struct S1AP_E_RABItemIEs_s {
    S1AP_E_RABItem_t e_RABItem;
} S1AP_E_RABItemIEs_t;

#define S1AP_INITIALCONTEXTSETUPREQUESTIES_TRACEACTIVATION_PRESENT                  (1 << 0)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT          (1 << 1)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_UERADIOCAPABILITY_PRESENT                (1 << 2)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_SUBSCRIBERPROFILEIDFORRFP_PRESENT        (1 << 3)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_CSFALLBACKINDICATOR_PRESENT              (1 << 4)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT           (1 << 5)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT              (1 << 6)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_REGISTEREDLAI_PRESENT                    (1 << 7)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_GUMMEI_ID_PRESENT                        (1 << 8)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_MME_UE_S1AP_ID_2_PRESENT                 (1 << 9)
#define S1AP_INITIALCONTEXTSETUPREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT        (1 << 10)

typedef struct S1AP_InitialContextSetupRequestIEs_s {
    uint16_t                           presenceMask;
    S1AP_MME_UE_S1AP_ID_t              mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t              eNB_UE_S1AP_ID;
    S1AP_UEAggregateMaximumBitrate_t   uEaggregateMaximumBitrate;
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t e_RABToBeSetupListCtxtSUReq;
    S1AP_UESecurityCapabilities_t      ueSecurityCapabilities;
    S1AP_SecurityKey_t                 securityKey;
    S1AP_TraceActivation_t             traceActivation; ///< Optional field
    S1AP_HandoverRestrictionList_t     handoverRestrictionList; ///< Optional field
    S1AP_UERadioCapability_t           ueRadioCapability; ///< Optional field
    S1AP_SubscriberProfileIDforRFP_t   subscriberProfileIDforRFP; ///< Optional field
    S1AP_CSFallbackIndicator_t         csFallbackIndicator; ///< Optional field
    S1AP_SRVCCOperationPossible_t      srvccOperationPossible; ///< Optional field
    S1AP_CSGMembershipStatus_t         csgMembershipStatus; ///< Optional field
    S1AP_LAI_t                         registeredLAI; ///< Optional field
    S1AP_GUMMEI_t                      gummei_id; ///< Optional field
    S1AP_MME_UE_S1AP_ID_t              mme_ue_s1ap_id_2; ///< Optional field
    S1AP_ManagementBasedMDTAllowed_t   managementBasedMDTAllowed; ///< Optional field
} S1AP_InitialContextSetupRequestIEs_t;

#define S1AP_S1SETUPRESPONSEIES_MMENAME_PRESENT                       (1 << 0)
#define S1AP_S1SETUPRESPONSEIES_MMERELAYSUPPORTINDICATOR_PRESENT      (1 << 1)
#define S1AP_S1SETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT        (1 << 2)

typedef struct S1AP_S1SetupResponseIEs_s {
    uint16_t                        presenceMask;
    S1AP_MMEname_t                  mmEname; ///< Optional field
    S1AP_ServedGUMMEIs_t            servedGUMMEIs;
    S1AP_RelativeMMECapacity_t      relativeMMECapacity;
    S1AP_MMERelaySupportIndicator_t mmeRelaySupportIndicator; ///< Optional field
    S1AP_CriticalityDiagnostics_t   criticalityDiagnostics; ///< Optional field
} S1AP_S1SetupResponseIEs_t;

#define S1AP_MMECONFIGURATIONUPDATEFAILUREIES_TIMETOWAIT_PRESENT                  (1 << 0)
#define S1AP_MMECONFIGURATIONUPDATEFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 1)

typedef struct S1AP_MMEConfigurationUpdateFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_Cause_t                  cause;
    S1AP_TimeToWait_t             timeToWait; ///< Optional field
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_MMEConfigurationUpdateFailureIEs_t;

#define S1AP_INITIALCONTEXTSETUPRESPONSEIES_E_RABFAILEDTOSETUPLISTCTXTSURES_PRESENT (1 << 0)
#define S1AP_INITIALCONTEXTSETUPRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT       (1 << 1)

typedef struct S1AP_InitialContextSetupResponseIEs_s {
    uint16_t                       presenceMask;
    S1AP_MME_UE_S1AP_ID_t          mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t          eNB_UE_S1AP_ID;
    S1AP_E_RABSetupListCtxtSURes_IEs_t e_RABSetupListCtxtSURes;
    S1AP_E_RABList_IEs_t e_RABFailedToSetupListCtxtSURes; ///< Optional field
    S1AP_CriticalityDiagnostics_t  criticalityDiagnostics; ///< Optional field
} S1AP_InitialContextSetupResponseIEs_t;

#define S1AP_ENBCONFIGURATIONUPDATEIES_ENBNAME_PRESENT           (1 << 0)
#define S1AP_ENBCONFIGURATIONUPDATEIES_SUPPORTEDTAS_PRESENT      (1 << 1)
#define S1AP_ENBCONFIGURATIONUPDATEIES_CSG_IDLIST_PRESENT        (1 << 2)
#define S1AP_ENBCONFIGURATIONUPDATEIES_DEFAULTPAGINGDRX_PRESENT  (1 << 3)

typedef struct S1AP_ENBConfigurationUpdateIEs_s {
    uint16_t            presenceMask;
    S1AP_ENBname_t      eNBname; ///< Optional field
    S1AP_SupportedTAs_t supportedTAs; ///< Optional field
    S1AP_CSG_IdList_t   csG_IdList; ///< Optional field
    S1AP_PagingDRX_t    defaultPagingDRX; ///< Optional field
} S1AP_ENBConfigurationUpdateIEs_t;

typedef struct S1AP_LocationReportIEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_EUTRAN_CGI_t     eutran_cgi;
    S1AP_TAI_t            tai;
    S1AP_RequestType_t    requestType;
} S1AP_LocationReportIEs_t;

typedef struct S1AP_UplinkUEAssociatedLPPaTransport_IEs_s {
    S1AP_MME_UE_S1AP_ID_t mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t eNB_UE_S1AP_ID;
    S1AP_Routing_ID_t     routing_ID;
    S1AP_LPPa_PDU_t       lpPa_PDU;
} S1AP_UplinkUEAssociatedLPPaTransport_IEs_t;

typedef struct S1AP_E_RABFailedtoSetupItemHOReqAckIEs_s {
    S1AP_E_RABFailedToSetupItemHOReqAck_t e_RABFailedtoSetupItemHOReqAck;
} S1AP_E_RABFailedtoSetupItemHOReqAckIEs_t;

#define S1AP_UECONTEXTMODIFICATIONRESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_UEContextModificationResponseIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_UEContextModificationResponseIEs_t;

#define S1AP_E_RABRELEASERESPONSEIES_E_RABRELEASELISTBEARERRELCOMP_PRESENT      (1 << 0)
#define S1AP_E_RABRELEASERESPONSEIES_E_RABFAILEDTORELEASELIST_PRESENT           (1 << 1)
#define S1AP_E_RABRELEASERESPONSEIES_CRITICALITYDIAGNOSTICS_PRESENT             (1 << 2)

typedef struct S1AP_E_RABReleaseResponseIEs_s {
    uint16_t                             presenceMask;
    S1AP_MME_UE_S1AP_ID_t                mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                eNB_UE_S1AP_ID;
    S1AP_E_RABReleaseListBearerRelComp_IEs_t e_RABReleaseListBearerRelComp; ///< Optional field
    S1AP_E_RABList_IEs_t e_RABFailedToReleaseList; ///< Optional field
    S1AP_CriticalityDiagnostics_t        criticalityDiagnostics; ///< Optional field
} S1AP_E_RABReleaseResponseIEs_t;

typedef struct S1AP_E_RABToBeSwitchedDLItemIEs_s {
    S1AP_E_RABToBeSwitchedDLItem_t e_RABToBeSwitchedDLItem;
} S1AP_E_RABToBeSwitchedDLItemIEs_t;

#define S1AP_HANDOVERREQUESTIES_HANDOVERRESTRICTIONLIST_PRESENT                   (1 << 0)
#define S1AP_HANDOVERREQUESTIES_TRACEACTIVATION_PRESENT                           (1 << 1)
#define S1AP_HANDOVERREQUESTIES_REQUESTTYPE_PRESENT                               (1 << 2)
#define S1AP_HANDOVERREQUESTIES_SRVCCOPERATIONPOSSIBLE_PRESENT                    (1 << 3)
#define S1AP_HANDOVERREQUESTIES_CSG_ID_PRESENT                                    (1 << 4)
#define S1AP_HANDOVERREQUESTIES_CSGMEMBERSHIPSTATUS_PRESENT                       (1 << 5)
#define S1AP_HANDOVERREQUESTIES_GUMMEI_ID_PRESENT                                 (1 << 6)
#define S1AP_HANDOVERREQUESTIES_MME_UE_S1AP_ID_2_PRESENT                          (1 << 7)
#define S1AP_HANDOVERREQUESTIES_MANAGEMENTBASEDMDTALLOWED_PRESENT                 (1 << 8)

typedef struct S1AP_HandoverRequestIEs_s {
    uint16_t                                    presenceMask;
    S1AP_MME_UE_S1AP_ID_t                       mme_ue_s1ap_id;
    S1AP_HandoverType_t                         handoverType;
    S1AP_Cause_t                                cause;
    S1AP_UEAggregateMaximumBitrate_t            uEaggregateMaximumBitrate;
    S1AP_E_RABToBeSetupListHOReq_IEs_t e_RABToBeSetupListHOReq;
    S1AP_Source_ToTarget_TransparentContainer_t source_ToTarget_TransparentContainer;
    S1AP_UESecurityCapabilities_t               ueSecurityCapabilities;
    S1AP_HandoverRestrictionList_t              handoverRestrictionList; ///< Optional field
    S1AP_TraceActivation_t                      traceActivation; ///< Optional field
    S1AP_RequestType_t                          requestType; ///< Optional field
    S1AP_SRVCCOperationPossible_t               srvccOperationPossible; ///< Optional field
    S1AP_SecurityContext_t                      securityContext;
    S1AP_CSG_Id_t                               csG_Id; ///< Optional field
    S1AP_CSGMembershipStatus_t                  csgMembershipStatus; ///< Optional field
    S1AP_GUMMEI_t                               gummei_id; ///< Optional field
    S1AP_MME_UE_S1AP_ID_t                       mme_ue_s1ap_id_2; ///< Optional field
    S1AP_ManagementBasedMDTAllowed_t            managementBasedMDTAllowed; ///< Optional field
} S1AP_HandoverRequestIEs_t;

#define S1AP_HANDOVERREQUIREDIES_DIRECT_FORWARDING_PATH_AVAILABILITY_PRESENT       (1 << 0)
#define S1AP_HANDOVERREQUIREDIES_SRVCCHOINDICATION_PRESENT                         (1 << 1)
#define S1AP_HANDOVERREQUIREDIES_SOURCE_TOTARGET_TRANSPARENTCONTAINER_SECONDARY_PRESENT (1 << 2)
#define S1AP_HANDOVERREQUIREDIES_MSCLASSMARK2_PRESENT                              (1 << 3)
#define S1AP_HANDOVERREQUIREDIES_MSCLASSMARK3_PRESENT                              (1 << 4)
#define S1AP_HANDOVERREQUIREDIES_CSG_ID_PRESENT                                    (1 << 5)
#define S1AP_HANDOVERREQUIREDIES_CELLACCESSMODE_PRESENT                            (1 << 6)
#define S1AP_HANDOVERREQUIREDIES_PS_SERVICENOTAVAILABLE_PRESENT                    (1 << 7)

typedef struct S1AP_HandoverRequiredIEs_s {
    uint16_t                                    presenceMask;
    S1AP_MME_UE_S1AP_ID_t                       mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                       eNB_UE_S1AP_ID;
    S1AP_HandoverType_t                         handoverType;
    S1AP_Cause_t                                cause;
    S1AP_TargetID_t                             targetID;
    S1AP_Direct_Forwarding_Path_Availability_t  direct_Forwarding_Path_Availability; ///< Optional field
    S1AP_SRVCCHOIndication_t                    srvcchoIndication; ///< Optional field
    S1AP_Source_ToTarget_TransparentContainer_t source_ToTarget_TransparentContainer;
    S1AP_Source_ToTarget_TransparentContainer_t source_ToTarget_TransparentContainer_Secondary; ///< Optional field
    S1AP_MSClassmark2_t                         msClassmark2; ///< Conditional field
    S1AP_MSClassmark3_t                         msClassmark3; ///< Conditional field
    S1AP_CSG_Id_t                               csG_Id; ///< Optional field
    S1AP_CellAccessMode_t                       cellAccessMode; ///< Optional field
    S1AP_PS_ServiceNotAvailable_t               pS_ServiceNotAvailable; ///< Optional field
} S1AP_HandoverRequiredIEs_t;

#define S1AP_MMECONFIGURATIONUPDATEACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_MMEConfigurationUpdateAcknowledgeIEs_s {
    uint16_t                      presenceMask;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_MMEConfigurationUpdateAcknowledgeIEs_t;

typedef struct S1AP_E_RABAdmittedItemIEs_s {
    S1AP_E_RABAdmittedItem_t e_RABAdmittedItem;
} S1AP_E_RABAdmittedItemIEs_t;

#define S1AP_INITIALUEMESSAGE_IES_S_TMSI_PRESENT                       (1 << 0)
#define S1AP_INITIALUEMESSAGE_IES_CSG_ID_PRESENT                       (1 << 1)
#define S1AP_INITIALUEMESSAGE_IES_GUMMEI_ID_PRESENT                    (1 << 2)
#define S1AP_INITIALUEMESSAGE_IES_CELLACCESSMODE_PRESENT               (1 << 3)
#define S1AP_INITIALUEMESSAGE_IES_GW_TRANSPORTLAYERADDRESS_PRESENT     (1 << 4)
#define S1AP_INITIALUEMESSAGE_IES_RELAYNODE_INDICATOR_PRESENT          (1 << 5)
#define S1AP_INITIALUEMESSAGE_IES_GUMMEITYPE_PRESENT                   (1 << 6)

typedef struct S1AP_InitialUEMessage_IEs_s {
    uint16_t                       presenceMask;
    S1AP_ENB_UE_S1AP_ID_t          eNB_UE_S1AP_ID;
    S1AP_NAS_PDU_t                 nas_pdu;
    S1AP_TAI_t                     tai;
    S1AP_EUTRAN_CGI_t              eutran_cgi;
    S1AP_RRC_Establishment_Cause_t rrC_Establishment_Cause;
    S1AP_S_TMSI_t                  s_tmsi; ///< Optional field
    S1AP_CSG_Id_t                  csG_Id; ///< Optional field
    S1AP_GUMMEI_t                  gummei_id; ///< Optional field
    S1AP_CellAccessMode_t          cellAccessMode; ///< Optional field
    S1AP_TransportLayerAddress_t   gW_TransportLayerAddress; ///< Optional field
    S1AP_RelayNode_Indicator_t     relayNode_Indicator; ///< Optional field
    S1AP_GUMMEIType_t              gummeiType; ///< Optional field
} S1AP_InitialUEMessage_IEs_t;

#define S1AP_CELLTRAFFICTRACEIES_PRIVACYINDICATOR_PRESENT           (1 << 0)

typedef struct S1AP_CellTrafficTraceIEs_s {
    uint16_t                     presenceMask;
    S1AP_MME_UE_S1AP_ID_t        mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t        eNB_UE_S1AP_ID;
    S1AP_E_UTRAN_Trace_ID_t      e_UTRAN_Trace_ID;
    S1AP_EUTRAN_CGI_t            eutran_cgi;
    S1AP_TransportLayerAddress_t traceCollectionEntityIPAddress;
    S1AP_PrivacyIndicator_t      privacyIndicator; ///< Optional field
} S1AP_CellTrafficTraceIEs_t;

typedef struct S1AP_ENBStatusTransferIEs_s {
    S1AP_MME_UE_S1AP_ID_t                          mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                          eNB_UE_S1AP_ID;
    S1AP_ENB_StatusTransfer_TransparentContainer_t eNB_StatusTransfer_TransparentContainer;
} S1AP_ENBStatusTransferIEs_t;

#define S1AP_UECONTEXTMODIFICATIONFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_UEContextModificationFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID;
    S1AP_Cause_t                  cause;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_UEContextModificationFailureIEs_t;

typedef struct S1AP_MMEDirectInformationTransferIEs_s {
    S1AP_Inter_SystemInformationTransferType_t inter_SystemInformationTransferTypeMDT;
} S1AP_MMEDirectInformationTransferIEs_t;

#define S1AP_S1SETUPFAILUREIES_TIMETOWAIT_PRESENT                  (1 << 0)
#define S1AP_S1SETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 1)

typedef struct S1AP_S1SetupFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_Cause_t                  cause;
    S1AP_TimeToWait_t             timeToWait; ///< Optional field
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_S1SetupFailureIEs_t;

#define S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_E_RABSUBJECTTODATAFORWARDINGLIST_PRESENT      (1 << 0)
#define S1AP_DOWNLINKS1CDMA2000TUNNELINGIES_CDMA2000HOSTATUS_PRESENT                      (1 << 1)

typedef struct S1AP_DownlinkS1cdma2000tunnelingIEs_s {
    uint16_t                                presenceMask;
    S1AP_MME_UE_S1AP_ID_t                   mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                   eNB_UE_S1AP_ID;
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t e_RABSubjecttoDataForwardingList; ///< Optional field
    S1AP_Cdma2000HOStatus_t                 cdma2000HOStatus; ///< Optional field
    S1AP_Cdma2000RATType_t                  cdma2000RATType;
    S1AP_Cdma2000PDU_t                      cdma2000PDU;
} S1AP_DownlinkS1cdma2000tunnelingIEs_t;

#define S1AP_E_RABRELEASECOMMANDIES_UEAGGREGATEMAXIMUMBITRATE_PRESENT      (1 << 0)
#define S1AP_E_RABRELEASECOMMANDIES_NAS_PDU_PRESENT                        (1 << 1)

typedef struct S1AP_E_RABReleaseCommandIEs_s {
    uint16_t                         presenceMask;
    S1AP_MME_UE_S1AP_ID_t            mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t            eNB_UE_S1AP_ID;
    S1AP_UEAggregateMaximumBitrate_t uEaggregateMaximumBitrate; ///< Optional field
    S1AP_E_RABList_IEs_t e_RABToBeReleasedList;
    S1AP_NAS_PDU_t                   nas_pdu; ///< Optional field
} S1AP_E_RABReleaseCommandIEs_t;

#define S1AP_RESETACKNOWLEDGEIES_UE_ASSOCIATEDLOGICALS1_CONNECTIONLISTRESACK_PRESENT      (1 << 0)
#define S1AP_RESETACKNOWLEDGEIES_CRITICALITYDIAGNOSTICS_PRESENT                           (1 << 1)

typedef struct S1AP_ResetAcknowledgeIEs_s {
    uint16_t                                           presenceMask;
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t uE_associatedLogicalS1_ConnectionListResAck; ///< Optional field
    S1AP_CriticalityDiagnostics_t                      criticalityDiagnostics; ///< Optional field
} S1AP_ResetAcknowledgeIEs_t;

typedef struct S1AP_DeactivateTraceIEs_s {
    S1AP_MME_UE_S1AP_ID_t   mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t   eNB_UE_S1AP_ID;
    S1AP_E_UTRAN_Trace_ID_t e_UTRAN_Trace_ID;
} S1AP_DeactivateTraceIEs_t;

#define S1AP_PATHSWITCHREQUESTFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_PathSwitchRequestFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID;
    S1AP_Cause_t                  cause;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_PathSwitchRequestFailureIEs_t;

typedef struct S1AP_ENBDirectInformationTransferIEs_s {
    S1AP_Inter_SystemInformationTransferType_t inter_SystemInformationTransferTypeEDT;
} S1AP_ENBDirectInformationTransferIEs_t;

#define S1AP_INITIALCONTEXTSETUPFAILUREIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 0)

typedef struct S1AP_InitialContextSetupFailureIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID;
    S1AP_Cause_t                  cause;
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_InitialContextSetupFailureIEs_t;

#define S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000HOREQUIREDINDICATION_PRESENT            (1 << 0)
#define S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXSRVCCINFO_PRESENT                   (1 << 1)
#define S1AP_UPLINKS1CDMA2000TUNNELINGIES_CDMA2000ONEXRAND_PRESENT                        (1 << 2)
#define S1AP_UPLINKS1CDMA2000TUNNELINGIES_EUTRANROUNDTRIPDELAYESTIMATIONINFO_PRESENT      (1 << 3)

typedef struct S1AP_UplinkS1cdma2000tunnelingIEs_s {
    uint16_t                                  presenceMask;
    S1AP_MME_UE_S1AP_ID_t                     mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t                     eNB_UE_S1AP_ID;
    S1AP_Cdma2000RATType_t                    cdma2000RATType;
    S1AP_Cdma2000SectorID_t                   cdma2000SectorID;
    S1AP_Cdma2000HORequiredIndication_t       cdma2000HORequiredIndication; ///< Optional field
    S1AP_Cdma2000OneXSRVCCInfo_t              cdma2000OneXSRVCCInfo; ///< Optional field
    S1AP_Cdma2000OneXRAND_t                   cdma2000OneXRAND; ///< Optional field
    S1AP_Cdma2000PDU_t                        cdma2000PDU;
    S1AP_EUTRANRoundTripDelayEstimationInfo_t eutranRoundTripDelayEstimationInfo; ///< Optional field
} S1AP_UplinkS1cdma2000tunnelingIEs_t;

#define S1AP_ERRORINDICATIONIES_MME_UE_S1AP_ID_PRESENT              (1 << 0)
#define S1AP_ERRORINDICATIONIES_ENB_UE_S1AP_ID_PRESENT              (1 << 1)
#define S1AP_ERRORINDICATIONIES_CAUSE_PRESENT                       (1 << 2)
#define S1AP_ERRORINDICATIONIES_CRITICALITYDIAGNOSTICS_PRESENT      (1 << 3)

typedef struct S1AP_ErrorIndicationIEs_s {
    uint16_t                      presenceMask;
    S1AP_MME_UE_S1AP_ID_t         mme_ue_s1ap_id; ///< Optional field
    S1AP_ENB_UE_S1AP_ID_t         eNB_UE_S1AP_ID; ///< Optional field
    S1AP_Cause_t                  cause; ///< Optional field
    S1AP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} S1AP_ErrorIndicationIEs_t;

#define S1AP_KILLREQUESTIES_WARNINGAREALIST_PRESENT        (1 << 0)

typedef struct S1AP_KillRequestIEs_s {
    uint16_t                 presenceMask;
    S1AP_MessageIdentifier_t messageIdentifier;
    S1AP_SerialNumber_t      serialNumber;
    S1AP_WarningAreaList_t   warningAreaList; ///< Optional field
} S1AP_KillRequestIEs_t;

typedef struct S1AP_TraceStartIEs_s {
    S1AP_MME_UE_S1AP_ID_t  mme_ue_s1ap_id;
    S1AP_ENB_UE_S1AP_ID_t  eNB_UE_S1AP_ID;
    S1AP_TraceActivation_t traceActivation;
} S1AP_TraceStartIEs_t;

typedef struct S1AP_E_RABToBeSetupItemCtxtSUReqIEs_s {
    S1AP_E_RABToBeSetupItemCtxtSUReq_t e_RABToBeSetupItemCtxtSUReq;
} S1AP_E_RABToBeSetupItemCtxtSUReqIEs_t;

#define S1AP_OVERLOADSTARTIES_GUMMEILIST_PRESENT                          (1 << 0)
#define S1AP_OVERLOADSTARTIES_TRAFFICLOADREDUCTIONINDICATION_PRESENT      (1 << 1)

typedef struct S1AP_OverloadStartIEs_s {
    uint16_t                              presenceMask;
    S1AP_OverloadResponse_t               overloadResponse;
    S1AP_GUMMEIList_t                     gummeiList; ///< Optional field
    S1AP_TrafficLoadReductionIndication_t trafficLoadReductionIndication; ///< Optional field
} S1AP_OverloadStartIEs_t;

typedef struct S1AP_E_RABInformationListIEs_s {
    S1AP_E_RABInformationListItem_t e_RABInformationListItem;
} S1AP_E_RABInformationListIEs_t;

typedef struct S1AP_E_RABSetupItemCtxtSUResIEs_s {
    S1AP_E_RABSetupItemCtxtSURes_t e_RABSetupItemCtxtSURes;
} S1AP_E_RABSetupItemCtxtSUResIEs_t;

typedef struct S1AP_UE_associatedLogicalS1_ConnectionItemResAck_s {
    S1AP_UE_associatedLogicalS1_ConnectionItem_t uE_associatedLogicalS1_ConnectionItem;
} S1AP_UE_associatedLogicalS1_ConnectionItemResAck_t;

typedef struct S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_s {
    S1AP_Routing_ID_t routing_ID;
    S1AP_LPPa_PDU_t   lpPa_PDU;
} S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t;

typedef struct _s1ap_message_t {
    S1AP_ProcedureCode_t procedureCode;
    S1AP_Criticality_t   criticality;
    uint8_t            direction;
    union {
        S1AP_CellTrafficTraceIEs_t s1AP_CellTrafficTraceIEs;
        S1AP_DeactivateTraceIEs_t s1AP_DeactivateTraceIEs;
        S1AP_DownlinkNASTransport_IEs_t s1AP_DownlinkNASTransport_IEs;
        S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs;
        S1AP_DownlinkS1cdma2000tunnelingIEs_t s1AP_DownlinkS1cdma2000tunnelingIEs;
        S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t s1AP_DownlinkUEAssociatedLPPaTransport_IEs;
        S1AP_E_RABModifyRequestIEs_t s1AP_E_RABModifyRequestIEs;
        S1AP_E_RABModifyResponseIEs_t s1AP_E_RABModifyResponseIEs;
        S1AP_E_RABReleaseCommandIEs_t s1AP_E_RABReleaseCommandIEs;
        S1AP_E_RABReleaseIndicationIEs_t s1AP_E_RABReleaseIndicationIEs;
        S1AP_E_RABReleaseResponseIEs_t s1AP_E_RABReleaseResponseIEs;
        S1AP_E_RABSetupRequestIEs_t s1AP_E_RABSetupRequestIEs;
        S1AP_E_RABSetupResponseIEs_t s1AP_E_RABSetupResponseIEs;
        S1AP_ENBConfigurationTransferIEs_t s1AP_ENBConfigurationTransferIEs;
        S1AP_ENBConfigurationUpdateAcknowledgeIEs_t s1AP_ENBConfigurationUpdateAcknowledgeIEs;
        S1AP_ENBConfigurationUpdateFailureIEs_t s1AP_ENBConfigurationUpdateFailureIEs;
        S1AP_ENBConfigurationUpdateIEs_t s1AP_ENBConfigurationUpdateIEs;
        S1AP_ENBDirectInformationTransferIEs_t s1AP_ENBDirectInformationTransferIEs;
        S1AP_ENBStatusTransferIEs_t s1AP_ENBStatusTransferIEs;
        S1AP_ErrorIndicationIEs_t s1AP_ErrorIndicationIEs;
        S1AP_HandoverCancelAcknowledgeIEs_t s1AP_HandoverCancelAcknowledgeIEs;
        S1AP_HandoverCancelIEs_t s1AP_HandoverCancelIEs;
        S1AP_HandoverCommandIEs_t s1AP_HandoverCommandIEs;
        S1AP_HandoverFailureIEs_t s1AP_HandoverFailureIEs;
        S1AP_HandoverNotifyIEs_t s1AP_HandoverNotifyIEs;
        S1AP_HandoverPreparationFailureIEs_t s1AP_HandoverPreparationFailureIEs;
        S1AP_HandoverRequestAcknowledgeIEs_t s1AP_HandoverRequestAcknowledgeIEs;
        S1AP_HandoverRequestIEs_t s1AP_HandoverRequestIEs;
        S1AP_HandoverRequiredIEs_t s1AP_HandoverRequiredIEs;
        S1AP_InitialContextSetupFailureIEs_t s1AP_InitialContextSetupFailureIEs;
        S1AP_InitialContextSetupRequestIEs_t s1AP_InitialContextSetupRequestIEs;
        S1AP_InitialContextSetupResponseIEs_t s1AP_InitialContextSetupResponseIEs;
        S1AP_InitialUEMessage_IEs_t s1AP_InitialUEMessage_IEs;
        S1AP_KillRequestIEs_t s1AP_KillRequestIEs;
        S1AP_KillResponseIEs_t s1AP_KillResponseIEs;
        S1AP_LocationReportIEs_t s1AP_LocationReportIEs;
        S1AP_LocationReportingControlIEs_t s1AP_LocationReportingControlIEs;
        S1AP_LocationReportingFailureIndicationIEs_t s1AP_LocationReportingFailureIndicationIEs;
        S1AP_MMEConfigurationTransferIEs_t s1AP_MMEConfigurationTransferIEs;
        S1AP_MMEConfigurationUpdateAcknowledgeIEs_t s1AP_MMEConfigurationUpdateAcknowledgeIEs;
        S1AP_MMEConfigurationUpdateFailureIEs_t s1AP_MMEConfigurationUpdateFailureIEs;
        S1AP_MMEConfigurationUpdateIEs_t s1AP_MMEConfigurationUpdateIEs;
        S1AP_MMEDirectInformationTransferIEs_t s1AP_MMEDirectInformationTransferIEs;
        S1AP_MMEStatusTransferIEs_t s1AP_MMEStatusTransferIEs;
        S1AP_NASNonDeliveryIndication_IEs_t s1AP_NASNonDeliveryIndication_IEs;
        S1AP_OverloadStartIEs_t s1AP_OverloadStartIEs;
        S1AP_OverloadStopIEs_t s1AP_OverloadStopIEs;
        S1AP_PagingIEs_t s1AP_PagingIEs;
        S1AP_PathSwitchRequestAcknowledgeIEs_t s1AP_PathSwitchRequestAcknowledgeIEs;
        S1AP_PathSwitchRequestFailureIEs_t s1AP_PathSwitchRequestFailureIEs;
        S1AP_PathSwitchRequestIEs_t s1AP_PathSwitchRequestIEs;
        S1AP_ResetAcknowledgeIEs_t s1AP_ResetAcknowledgeIEs;
        S1AP_ResetIEs_t s1AP_ResetIEs;
        S1AP_S1SetupFailureIEs_t s1AP_S1SetupFailureIEs;
        S1AP_S1SetupRequestIEs_t s1AP_S1SetupRequestIEs;
        S1AP_S1SetupResponseIEs_t s1AP_S1SetupResponseIEs;
        S1AP_TraceFailureIndicationIEs_t s1AP_TraceFailureIndicationIEs;
        S1AP_TraceStartIEs_t s1AP_TraceStartIEs;
        S1AP_UECapabilityInfoIndicationIEs_t s1AP_UECapabilityInfoIndicationIEs;
        S1AP_UEContextModificationFailureIEs_t s1AP_UEContextModificationFailureIEs;
        S1AP_UEContextModificationRequestIEs_t s1AP_UEContextModificationRequestIEs;
        S1AP_UEContextModificationResponseIEs_t s1AP_UEContextModificationResponseIEs;
        S1AP_UEContextReleaseCommand_IEs_t s1AP_UEContextReleaseCommand_IEs;
        S1AP_UEContextReleaseComplete_IEs_t s1AP_UEContextReleaseComplete_IEs;
        S1AP_UEContextReleaseRequest_IEs_t s1AP_UEContextReleaseRequest_IEs;
        S1AP_UplinkNASTransport_IEs_t s1AP_UplinkNASTransport_IEs;
        S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t s1AP_UplinkNonUEAssociatedLPPaTransport_IEs;
        S1AP_UplinkS1cdma2000tunnelingIEs_t s1AP_UplinkS1cdma2000tunnelingIEs;
        S1AP_UplinkUEAssociatedLPPaTransport_IEs_t s1AP_UplinkUEAssociatedLPPaTransport_IEs;
        S1AP_WriteReplaceWarningRequestIEs_t s1AP_WriteReplaceWarningRequestIEs;
        S1AP_WriteReplaceWarningResponseIEs_t s1AP_WriteReplaceWarningResponseIEs;
    };
} s1ap_message_t;

/** \brief Decode function for S1AP-E-RABSetupResponseIEs ies.
 * \param s1AP_E_RABSetupResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_e_rabsetupresponseies(
    S1AP_E_RABSetupResponseIEs_t *s1AP_E_RABSetupResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-E-RABSetupResponseIEs ies.
 *  \param s1AP_E_RABSetupResponse Pointer to the ASN1 structure.
 *  \param s1AP_E_RABSetupResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabsetupresponseies(
    S1AP_E_RABSetupResponse_t *s1AP_E_RABSetupResponse,
    S1AP_E_RABSetupResponseIEs_t *s1AP_E_RABSetupResponseIEs);

/** \brief Free function for S1AP-E-RABSetupResponseIEs ies.
 *  \param s1AP_E_RABSetupResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabsetupresponseies(
    S1AP_E_RABSetupResponseIEs_t *s1AP_E_RABSetupResponseIEs);

/** \brief Decode function for S1AP-UEContextReleaseCommand-IEs ies.
 * \param s1AP_UEContextReleaseCommand_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uecontextreleasecommand_ies(
    S1AP_UEContextReleaseCommand_IEs_t *s1AP_UEContextReleaseCommand_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UEContextReleaseCommand-IEs ies.
 *  \param s1AP_UEContextReleaseCommand Pointer to the ASN1 structure.
 *  \param s1AP_UEContextReleaseCommand_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uecontextreleasecommand_ies(
    S1AP_UEContextReleaseCommand_t *s1AP_UEContextReleaseCommand,
    S1AP_UEContextReleaseCommand_IEs_t *s1AP_UEContextReleaseCommand_IEs);

/** \brief Free function for S1AP-UEContextReleaseCommand-IEs ies.
 *  \param s1AP_UEContextReleaseCommand_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uecontextreleasecommand_ies(
    S1AP_UEContextReleaseCommand_IEs_t *s1AP_UEContextReleaseCommand_IEs);

/** \brief Decode function for S1AP-MMEConfigurationTransferIEs ies.
 * \param s1AP_MMEConfigurationTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_mmeconfigurationtransferies(
    S1AP_MMEConfigurationTransferIEs_t *s1AP_MMEConfigurationTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-MMEConfigurationTransferIEs ies.
 *  \param s1AP_MMEConfigurationTransfer Pointer to the ASN1 structure.
 *  \param s1AP_MMEConfigurationTransferIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_mmeconfigurationtransferies(
    S1AP_MMEConfigurationTransfer_t *s1AP_MMEConfigurationTransfer,
    S1AP_MMEConfigurationTransferIEs_t *s1AP_MMEConfigurationTransferIEs);

/** \brief Free function for S1AP-MMEConfigurationTransferIEs ies.
 *  \param s1AP_MMEConfigurationTransferIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_mmeconfigurationtransferies(
    S1AP_MMEConfigurationTransferIEs_t *s1AP_MMEConfigurationTransferIEs);

/** \brief Decode function for S1AP-UECapabilityInfoIndicationIEs ies.
 * \param s1AP_UECapabilityInfoIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uecapabilityinfoindicationies(
    S1AP_UECapabilityInfoIndicationIEs_t *s1AP_UECapabilityInfoIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UECapabilityInfoIndicationIEs ies.
 *  \param s1AP_UECapabilityInfoIndication Pointer to the ASN1 structure.
 *  \param s1AP_UECapabilityInfoIndicationIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uecapabilityinfoindicationies(
    S1AP_UECapabilityInfoIndication_t *s1AP_UECapabilityInfoIndication,
    S1AP_UECapabilityInfoIndicationIEs_t *s1AP_UECapabilityInfoIndicationIEs);

/** \brief Free function for S1AP-UECapabilityInfoIndicationIEs ies.
 *  \param s1AP_UECapabilityInfoIndicationIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uecapabilityinfoindicationies(
    S1AP_UECapabilityInfoIndicationIEs_t *s1AP_UECapabilityInfoIndicationIEs);

/** \brief Decode function for S1AP-WriteReplaceWarningRequestIEs ies.
 * \param s1AP_WriteReplaceWarningRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_writereplacewarningrequesties(
    S1AP_WriteReplaceWarningRequestIEs_t *s1AP_WriteReplaceWarningRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-WriteReplaceWarningRequestIEs ies.
 *  \param s1AP_WriteReplaceWarningRequest Pointer to the ASN1 structure.
 *  \param s1AP_WriteReplaceWarningRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_writereplacewarningrequesties(
    S1AP_WriteReplaceWarningRequest_t *s1AP_WriteReplaceWarningRequest,
    S1AP_WriteReplaceWarningRequestIEs_t *s1AP_WriteReplaceWarningRequestIEs);

/** \brief Free function for S1AP-WriteReplaceWarningRequestIEs ies.
 *  \param s1AP_WriteReplaceWarningRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_writereplacewarningrequesties(
    S1AP_WriteReplaceWarningRequestIEs_t *s1AP_WriteReplaceWarningRequestIEs);

/** \brief Decode function for S1AP-E-RABSetupRequestIEs ies.
 * \param s1AP_E_RABSetupRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_e_rabsetuprequesties(
    S1AP_E_RABSetupRequestIEs_t *s1AP_E_RABSetupRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-E-RABSetupRequestIEs ies.
 *  \param s1AP_E_RABSetupRequest Pointer to the ASN1 structure.
 *  \param s1AP_E_RABSetupRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabsetuprequesties(
    S1AP_E_RABSetupRequest_t *s1AP_E_RABSetupRequest,
    S1AP_E_RABSetupRequestIEs_t *s1AP_E_RABSetupRequestIEs);

/** \brief Free function for S1AP-E-RABSetupRequestIEs ies.
 *  \param s1AP_E_RABSetupRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabsetuprequesties(
    S1AP_E_RABSetupRequestIEs_t *s1AP_E_RABSetupRequestIEs);

/** \brief Decode function for S1AP-LocationReportingFailureIndicationIEs ies.
 * \param s1AP_LocationReportingFailureIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_locationreportingfailureindicationies(
    S1AP_LocationReportingFailureIndicationIEs_t *s1AP_LocationReportingFailureIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-LocationReportingFailureIndicationIEs ies.
 *  \param s1AP_LocationReportingFailureIndication Pointer to the ASN1 structure.
 *  \param s1AP_LocationReportingFailureIndicationIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_locationreportingfailureindicationies(
    S1AP_LocationReportingFailureIndication_t *s1AP_LocationReportingFailureIndication,
    S1AP_LocationReportingFailureIndicationIEs_t *s1AP_LocationReportingFailureIndicationIEs);

/** \brief Free function for S1AP-LocationReportingFailureIndicationIEs ies.
 *  \param s1AP_LocationReportingFailureIndicationIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_locationreportingfailureindicationies(
    S1AP_LocationReportingFailureIndicationIEs_t *s1AP_LocationReportingFailureIndicationIEs);

/** \brief Decode function for S1AP-UEContextReleaseComplete-IEs ies.
 * \param s1AP_UEContextReleaseComplete_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uecontextreleasecomplete_ies(
    S1AP_UEContextReleaseComplete_IEs_t *s1AP_UEContextReleaseComplete_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UEContextReleaseComplete-IEs ies.
 *  \param s1AP_UEContextReleaseComplete Pointer to the ASN1 structure.
 *  \param s1AP_UEContextReleaseComplete_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uecontextreleasecomplete_ies(
    S1AP_UEContextReleaseComplete_t *s1AP_UEContextReleaseComplete,
    S1AP_UEContextReleaseComplete_IEs_t *s1AP_UEContextReleaseComplete_IEs);

/** \brief Free function for S1AP-UEContextReleaseComplete-IEs ies.
 *  \param s1AP_UEContextReleaseComplete_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uecontextreleasecomplete_ies(
    S1AP_UEContextReleaseComplete_IEs_t *s1AP_UEContextReleaseComplete_IEs);

/** \brief Decode function for S1AP-OverloadStopIEs ies.
 * \param s1AP_OverloadStopIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_overloadstopies(
    S1AP_OverloadStopIEs_t *s1AP_OverloadStopIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-OverloadStopIEs ies.
 *  \param s1AP_OverloadStop Pointer to the ASN1 structure.
 *  \param s1AP_OverloadStopIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_overloadstopies(
    S1AP_OverloadStop_t *s1AP_OverloadStop,
    S1AP_OverloadStopIEs_t *s1AP_OverloadStopIEs);

/** \brief Free function for S1AP-OverloadStopIEs ies.
 *  \param s1AP_OverloadStopIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_overloadstopies(
    S1AP_OverloadStopIEs_t *s1AP_OverloadStopIEs);

/** \brief Decode function for S1AP-UEContextModificationRequestIEs ies.
 * \param s1AP_UEContextModificationRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uecontextmodificationrequesties(
    S1AP_UEContextModificationRequestIEs_t *s1AP_UEContextModificationRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UEContextModificationRequestIEs ies.
 *  \param s1AP_UEContextModificationRequest Pointer to the ASN1 structure.
 *  \param s1AP_UEContextModificationRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uecontextmodificationrequesties(
    S1AP_UEContextModificationRequest_t *s1AP_UEContextModificationRequest,
    S1AP_UEContextModificationRequestIEs_t *s1AP_UEContextModificationRequestIEs);

/** \brief Free function for S1AP-UEContextModificationRequestIEs ies.
 *  \param s1AP_UEContextModificationRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uecontextmodificationrequesties(
    S1AP_UEContextModificationRequestIEs_t *s1AP_UEContextModificationRequestIEs);

/** \brief Decode function for S1AP-E-RABModifyResponseIEs ies.
 * \param s1AP_E_RABModifyResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_e_rabmodifyresponseies(
    S1AP_E_RABModifyResponseIEs_t *s1AP_E_RABModifyResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-E-RABModifyResponseIEs ies.
 *  \param s1AP_E_RABModifyResponse Pointer to the ASN1 structure.
 *  \param s1AP_E_RABModifyResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabmodifyresponseies(
    S1AP_E_RABModifyResponse_t *s1AP_E_RABModifyResponse,
    S1AP_E_RABModifyResponseIEs_t *s1AP_E_RABModifyResponseIEs);

/** \brief Free function for S1AP-E-RABModifyResponseIEs ies.
 *  \param s1AP_E_RABModifyResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabmodifyresponseies(
    S1AP_E_RABModifyResponseIEs_t *s1AP_E_RABModifyResponseIEs);

/** \brief Decode function for S1AP-LocationReportingControlIEs ies.
 * \param s1AP_LocationReportingControlIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_locationreportingcontrolies(
    S1AP_LocationReportingControlIEs_t *s1AP_LocationReportingControlIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-LocationReportingControlIEs ies.
 *  \param s1AP_LocationReportingControl Pointer to the ASN1 structure.
 *  \param s1AP_LocationReportingControlIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_locationreportingcontrolies(
    S1AP_LocationReportingControl_t *s1AP_LocationReportingControl,
    S1AP_LocationReportingControlIEs_t *s1AP_LocationReportingControlIEs);

/** \brief Free function for S1AP-LocationReportingControlIEs ies.
 *  \param s1AP_LocationReportingControlIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_locationreportingcontrolies(
    S1AP_LocationReportingControlIEs_t *s1AP_LocationReportingControlIEs);

/** \brief Decode function for S1AP-KillResponseIEs ies.
 * \param s1AP_KillResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_killresponseies(
    S1AP_KillResponseIEs_t *s1AP_KillResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-KillResponseIEs ies.
 *  \param s1AP_KillResponse Pointer to the ASN1 structure.
 *  \param s1AP_KillResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_killresponseies(
    S1AP_KillResponse_t *s1AP_KillResponse,
    S1AP_KillResponseIEs_t *s1AP_KillResponseIEs);

/** \brief Free function for S1AP-KillResponseIEs ies.
 *  \param s1AP_KillResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_killresponseies(
    S1AP_KillResponseIEs_t *s1AP_KillResponseIEs);

/** \brief Decode function for S1AP-MMEStatusTransferIEs ies.
 * \param s1AP_MMEStatusTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_mmestatustransferies(
    S1AP_MMEStatusTransferIEs_t *s1AP_MMEStatusTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-MMEStatusTransferIEs ies.
 *  \param s1AP_MMEStatusTransfer Pointer to the ASN1 structure.
 *  \param s1AP_MMEStatusTransferIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_mmestatustransferies(
    S1AP_MMEStatusTransfer_t *s1AP_MMEStatusTransfer,
    S1AP_MMEStatusTransferIEs_t *s1AP_MMEStatusTransferIEs);

/** \brief Free function for S1AP-MMEStatusTransferIEs ies.
 *  \param s1AP_MMEStatusTransferIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_mmestatustransferies(
    S1AP_MMEStatusTransferIEs_t *s1AP_MMEStatusTransferIEs);

/** \brief Decode function for S1AP-MMEConfigurationUpdateIEs ies.
 * \param s1AP_MMEConfigurationUpdateIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_mmeconfigurationupdateies(
    S1AP_MMEConfigurationUpdateIEs_t *s1AP_MMEConfigurationUpdateIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-MMEConfigurationUpdateIEs ies.
 *  \param s1AP_MMEConfigurationUpdate Pointer to the ASN1 structure.
 *  \param s1AP_MMEConfigurationUpdateIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_mmeconfigurationupdateies(
    S1AP_MMEConfigurationUpdate_t *s1AP_MMEConfigurationUpdate,
    S1AP_MMEConfigurationUpdateIEs_t *s1AP_MMEConfigurationUpdateIEs);

/** \brief Free function for S1AP-MMEConfigurationUpdateIEs ies.
 *  \param s1AP_MMEConfigurationUpdateIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_mmeconfigurationupdateies(
    S1AP_MMEConfigurationUpdateIEs_t *s1AP_MMEConfigurationUpdateIEs);

/** \brief Decode function for S1AP-TraceFailureIndicationIEs ies.
 * \param s1AP_TraceFailureIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_tracefailureindicationies(
    S1AP_TraceFailureIndicationIEs_t *s1AP_TraceFailureIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-TraceFailureIndicationIEs ies.
 *  \param s1AP_TraceFailureIndication Pointer to the ASN1 structure.
 *  \param s1AP_TraceFailureIndicationIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_tracefailureindicationies(
    S1AP_TraceFailureIndication_t *s1AP_TraceFailureIndication,
    S1AP_TraceFailureIndicationIEs_t *s1AP_TraceFailureIndicationIEs);

/** \brief Free function for S1AP-TraceFailureIndicationIEs ies.
 *  \param s1AP_TraceFailureIndicationIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_tracefailureindicationies(
    S1AP_TraceFailureIndicationIEs_t *s1AP_TraceFailureIndicationIEs);

/** \brief Decode function for S1AP-ENBConfigurationTransferIEs ies.
 * \param s1AP_ENBConfigurationTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_enbconfigurationtransferies(
    S1AP_ENBConfigurationTransferIEs_t *s1AP_ENBConfigurationTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ENBConfigurationTransferIEs ies.
 *  \param s1AP_ENBConfigurationTransfer Pointer to the ASN1 structure.
 *  \param s1AP_ENBConfigurationTransferIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_enbconfigurationtransferies(
    S1AP_ENBConfigurationTransfer_t *s1AP_ENBConfigurationTransfer,
    S1AP_ENBConfigurationTransferIEs_t *s1AP_ENBConfigurationTransferIEs);

/** \brief Free function for S1AP-ENBConfigurationTransferIEs ies.
 *  \param s1AP_ENBConfigurationTransferIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_enbconfigurationtransferies(
    S1AP_ENBConfigurationTransferIEs_t *s1AP_ENBConfigurationTransferIEs);

/** \brief Decode function for S1AP-DownlinkUEAssociatedLPPaTransport-IEs ies.
 * \param s1AP_DownlinkUEAssociatedLPPaTransport_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_downlinkueassociatedlppatransport_ies(
    S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-DownlinkUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_DownlinkUEAssociatedLPPaTransport Pointer to the ASN1 structure.
 *  \param s1AP_DownlinkUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_downlinkueassociatedlppatransport_ies(
    S1AP_DownlinkUEAssociatedLPPaTransport_t *s1AP_DownlinkUEAssociatedLPPaTransport,
    S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkUEAssociatedLPPaTransport_IEs);

/** \brief Free function for S1AP-DownlinkUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_DownlinkUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_downlinkueassociatedlppatransport_ies(
    S1AP_DownlinkUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkUEAssociatedLPPaTransport_IEs);

/** \brief Decode function for S1AP-HandoverFailureIEs ies.
 * \param s1AP_HandoverFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handoverfailureies(
    S1AP_HandoverFailureIEs_t *s1AP_HandoverFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverFailureIEs ies.
 *  \param s1AP_HandoverFailure Pointer to the ASN1 structure.
 *  \param s1AP_HandoverFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handoverfailureies(
    S1AP_HandoverFailure_t *s1AP_HandoverFailure,
    S1AP_HandoverFailureIEs_t *s1AP_HandoverFailureIEs);

/** \brief Free function for S1AP-HandoverFailureIEs ies.
 *  \param s1AP_HandoverFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handoverfailureies(
    S1AP_HandoverFailureIEs_t *s1AP_HandoverFailureIEs);

/** \brief Decode function for S1AP-UplinkNASTransport-IEs ies.
 * \param s1AP_UplinkNASTransport_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uplinknastransport_ies(
    S1AP_UplinkNASTransport_IEs_t *s1AP_UplinkNASTransport_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UplinkNASTransport-IEs ies.
 *  \param s1AP_UplinkNASTransport Pointer to the ASN1 structure.
 *  \param s1AP_UplinkNASTransport_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uplinknastransport_ies(
    S1AP_UplinkNASTransport_t *s1AP_UplinkNASTransport,
    S1AP_UplinkNASTransport_IEs_t *s1AP_UplinkNASTransport_IEs);

/** \brief Free function for S1AP-UplinkNASTransport-IEs ies.
 *  \param s1AP_UplinkNASTransport_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uplinknastransport_ies(
    S1AP_UplinkNASTransport_IEs_t *s1AP_UplinkNASTransport_IEs);

/** \brief Decode function for S1AP-S1SetupRequestIEs ies.
 * \param s1AP_S1SetupRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_s1setuprequesties(
    S1AP_S1SetupRequestIEs_t *s1AP_S1SetupRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-S1SetupRequestIEs ies.
 *  \param s1AP_S1SetupRequest Pointer to the ASN1 structure.
 *  \param s1AP_S1SetupRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_s1setuprequesties(
    S1AP_S1SetupRequest_t *s1AP_S1SetupRequest,
    S1AP_S1SetupRequestIEs_t *s1AP_S1SetupRequestIEs);

/** \brief Free function for S1AP-S1SetupRequestIEs ies.
 *  \param s1AP_S1SetupRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_s1setuprequesties(
    S1AP_S1SetupRequestIEs_t *s1AP_S1SetupRequestIEs);

/** \brief Decode function for S1AP-ENBConfigurationUpdateFailureIEs ies.
 * \param s1AP_ENBConfigurationUpdateFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_enbconfigurationupdatefailureies(
    S1AP_ENBConfigurationUpdateFailureIEs_t *s1AP_ENBConfigurationUpdateFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ENBConfigurationUpdateFailureIEs ies.
 *  \param s1AP_ENBConfigurationUpdateFailure Pointer to the ASN1 structure.
 *  \param s1AP_ENBConfigurationUpdateFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_enbconfigurationupdatefailureies(
    S1AP_ENBConfigurationUpdateFailure_t *s1AP_ENBConfigurationUpdateFailure,
    S1AP_ENBConfigurationUpdateFailureIEs_t *s1AP_ENBConfigurationUpdateFailureIEs);

/** \brief Free function for S1AP-ENBConfigurationUpdateFailureIEs ies.
 *  \param s1AP_ENBConfigurationUpdateFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_enbconfigurationupdatefailureies(
    S1AP_ENBConfigurationUpdateFailureIEs_t *s1AP_ENBConfigurationUpdateFailureIEs);

/** \brief Decode function for S1AP-PathSwitchRequestIEs ies.
 * \param s1AP_PathSwitchRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_pathswitchrequesties(
    S1AP_PathSwitchRequestIEs_t *s1AP_PathSwitchRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-PathSwitchRequestIEs ies.
 *  \param s1AP_PathSwitchRequest Pointer to the ASN1 structure.
 *  \param s1AP_PathSwitchRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_pathswitchrequesties(
    S1AP_PathSwitchRequest_t *s1AP_PathSwitchRequest,
    S1AP_PathSwitchRequestIEs_t *s1AP_PathSwitchRequestIEs);

/** \brief Free function for S1AP-PathSwitchRequestIEs ies.
 *  \param s1AP_PathSwitchRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_pathswitchrequesties(
    S1AP_PathSwitchRequestIEs_t *s1AP_PathSwitchRequestIEs);

/** \brief Decode function for S1AP-ResetIEs ies.
 * \param s1AP_ResetIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_reseties(
    S1AP_ResetIEs_t *s1AP_ResetIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ResetIEs ies.
 *  \param s1AP_Reset Pointer to the ASN1 structure.
 *  \param s1AP_ResetIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_reseties(
    S1AP_Reset_t *s1AP_Reset,
    S1AP_ResetIEs_t *s1AP_ResetIEs);

/** \brief Free function for S1AP-ResetIEs ies.
 *  \param s1AP_ResetIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_reseties(
    S1AP_ResetIEs_t *s1AP_ResetIEs);

/** \brief Decode function for S1AP-UEContextReleaseRequest-IEs ies.
 * \param s1AP_UEContextReleaseRequest_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uecontextreleaserequest_ies(
    S1AP_UEContextReleaseRequest_IEs_t *s1AP_UEContextReleaseRequest_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UEContextReleaseRequest-IEs ies.
 *  \param s1AP_UEContextReleaseRequest Pointer to the ASN1 structure.
 *  \param s1AP_UEContextReleaseRequest_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uecontextreleaserequest_ies(
    S1AP_UEContextReleaseRequest_t *s1AP_UEContextReleaseRequest,
    S1AP_UEContextReleaseRequest_IEs_t *s1AP_UEContextReleaseRequest_IEs);

/** \brief Free function for S1AP-UEContextReleaseRequest-IEs ies.
 *  \param s1AP_UEContextReleaseRequest_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uecontextreleaserequest_ies(
    S1AP_UEContextReleaseRequest_IEs_t *s1AP_UEContextReleaseRequest_IEs);

/** \brief Decode function for S1AP-DownlinkNonUEAssociatedLPPaTransport-IEs ies.
 * \param s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_downlinknonueassociatedlppatransport_ies(
    S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-DownlinkNonUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_DownlinkNonUEAssociatedLPPaTransport Pointer to the ASN1 structure.
 *  \param s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_downlinknonueassociatedlppatransport_ies(
    S1AP_DownlinkNonUEAssociatedLPPaTransport_t *s1AP_DownlinkNonUEAssociatedLPPaTransport,
    S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs);

/** \brief Free function for S1AP-DownlinkNonUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_downlinknonueassociatedlppatransport_ies(
    S1AP_DownlinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_DownlinkNonUEAssociatedLPPaTransport_IEs);

/** \brief Decode function for S1AP-PagingIEs ies.
 * \param s1AP_PagingIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_pagingies(
    S1AP_PagingIEs_t *s1AP_PagingIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-PagingIEs ies.
 *  \param s1AP_Paging Pointer to the ASN1 structure.
 *  \param s1AP_PagingIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_pagingies(
    S1AP_Paging_t *s1AP_Paging,
    S1AP_PagingIEs_t *s1AP_PagingIEs);

/** \brief Free function for S1AP-PagingIEs ies.
 *  \param s1AP_PagingIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_pagingies(
    S1AP_PagingIEs_t *s1AP_PagingIEs);

/** \brief Decode function for S1AP-ENBConfigurationUpdateAcknowledgeIEs ies.
 * \param s1AP_ENBConfigurationUpdateAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_enbconfigurationupdateacknowledgeies(
    S1AP_ENBConfigurationUpdateAcknowledgeIEs_t *s1AP_ENBConfigurationUpdateAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ENBConfigurationUpdateAcknowledgeIEs ies.
 *  \param s1AP_ENBConfigurationUpdateAcknowledge Pointer to the ASN1 structure.
 *  \param s1AP_ENBConfigurationUpdateAcknowledgeIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_enbconfigurationupdateacknowledgeies(
    S1AP_ENBConfigurationUpdateAcknowledge_t *s1AP_ENBConfigurationUpdateAcknowledge,
    S1AP_ENBConfigurationUpdateAcknowledgeIEs_t *s1AP_ENBConfigurationUpdateAcknowledgeIEs);

/** \brief Free function for S1AP-ENBConfigurationUpdateAcknowledgeIEs ies.
 *  \param s1AP_ENBConfigurationUpdateAcknowledgeIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_enbconfigurationupdateacknowledgeies(
    S1AP_ENBConfigurationUpdateAcknowledgeIEs_t *s1AP_ENBConfigurationUpdateAcknowledgeIEs);

/** \brief Decode function for S1AP-HandoverNotifyIEs ies.
 * \param s1AP_HandoverNotifyIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handovernotifyies(
    S1AP_HandoverNotifyIEs_t *s1AP_HandoverNotifyIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverNotifyIEs ies.
 *  \param s1AP_HandoverNotify Pointer to the ASN1 structure.
 *  \param s1AP_HandoverNotifyIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handovernotifyies(
    S1AP_HandoverNotify_t *s1AP_HandoverNotify,
    S1AP_HandoverNotifyIEs_t *s1AP_HandoverNotifyIEs);

/** \brief Free function for S1AP-HandoverNotifyIEs ies.
 *  \param s1AP_HandoverNotifyIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handovernotifyies(
    S1AP_HandoverNotifyIEs_t *s1AP_HandoverNotifyIEs);

/** \brief Decode function for S1AP-HandoverCancelAcknowledgeIEs ies.
 * \param s1AP_HandoverCancelAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handovercancelacknowledgeies(
    S1AP_HandoverCancelAcknowledgeIEs_t *s1AP_HandoverCancelAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverCancelAcknowledgeIEs ies.
 *  \param s1AP_HandoverCancelAcknowledge Pointer to the ASN1 structure.
 *  \param s1AP_HandoverCancelAcknowledgeIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handovercancelacknowledgeies(
    S1AP_HandoverCancelAcknowledge_t *s1AP_HandoverCancelAcknowledge,
    S1AP_HandoverCancelAcknowledgeIEs_t *s1AP_HandoverCancelAcknowledgeIEs);

/** \brief Free function for S1AP-HandoverCancelAcknowledgeIEs ies.
 *  \param s1AP_HandoverCancelAcknowledgeIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handovercancelacknowledgeies(
    S1AP_HandoverCancelAcknowledgeIEs_t *s1AP_HandoverCancelAcknowledgeIEs);

/** \brief Decode function for S1AP-HandoverCommandIEs ies.
 * \param s1AP_HandoverCommandIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handovercommandies(
    S1AP_HandoverCommandIEs_t *s1AP_HandoverCommandIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverCommandIEs ies.
 *  \param s1AP_HandoverCommand Pointer to the ASN1 structure.
 *  \param s1AP_HandoverCommandIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handovercommandies(
    S1AP_HandoverCommand_t *s1AP_HandoverCommand,
    S1AP_HandoverCommandIEs_t *s1AP_HandoverCommandIEs);

/** \brief Free function for S1AP-HandoverCommandIEs ies.
 *  \param s1AP_HandoverCommandIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handovercommandies(
    S1AP_HandoverCommandIEs_t *s1AP_HandoverCommandIEs);

/** \brief Decode function for S1AP-WriteReplaceWarningResponseIEs ies.
 * \param s1AP_WriteReplaceWarningResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_writereplacewarningresponseies(
    S1AP_WriteReplaceWarningResponseIEs_t *s1AP_WriteReplaceWarningResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-WriteReplaceWarningResponseIEs ies.
 *  \param s1AP_WriteReplaceWarningResponse Pointer to the ASN1 structure.
 *  \param s1AP_WriteReplaceWarningResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_writereplacewarningresponseies(
    S1AP_WriteReplaceWarningResponse_t *s1AP_WriteReplaceWarningResponse,
    S1AP_WriteReplaceWarningResponseIEs_t *s1AP_WriteReplaceWarningResponseIEs);

/** \brief Free function for S1AP-WriteReplaceWarningResponseIEs ies.
 *  \param s1AP_WriteReplaceWarningResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_writereplacewarningresponseies(
    S1AP_WriteReplaceWarningResponseIEs_t *s1AP_WriteReplaceWarningResponseIEs);

/** \brief Decode function for S1AP-HandoverCancelIEs ies.
 * \param s1AP_HandoverCancelIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handovercancelies(
    S1AP_HandoverCancelIEs_t *s1AP_HandoverCancelIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverCancelIEs ies.
 *  \param s1AP_HandoverCancel Pointer to the ASN1 structure.
 *  \param s1AP_HandoverCancelIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handovercancelies(
    S1AP_HandoverCancel_t *s1AP_HandoverCancel,
    S1AP_HandoverCancelIEs_t *s1AP_HandoverCancelIEs);

/** \brief Free function for S1AP-HandoverCancelIEs ies.
 *  \param s1AP_HandoverCancelIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handovercancelies(
    S1AP_HandoverCancelIEs_t *s1AP_HandoverCancelIEs);

/** \brief Decode function for S1AP-HandoverPreparationFailureIEs ies.
 * \param s1AP_HandoverPreparationFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handoverpreparationfailureies(
    S1AP_HandoverPreparationFailureIEs_t *s1AP_HandoverPreparationFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverPreparationFailureIEs ies.
 *  \param s1AP_HandoverPreparationFailure Pointer to the ASN1 structure.
 *  \param s1AP_HandoverPreparationFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handoverpreparationfailureies(
    S1AP_HandoverPreparationFailure_t *s1AP_HandoverPreparationFailure,
    S1AP_HandoverPreparationFailureIEs_t *s1AP_HandoverPreparationFailureIEs);

/** \brief Free function for S1AP-HandoverPreparationFailureIEs ies.
 *  \param s1AP_HandoverPreparationFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handoverpreparationfailureies(
    S1AP_HandoverPreparationFailureIEs_t *s1AP_HandoverPreparationFailureIEs);

/** \brief Decode function for S1AP-E-RABModifyRequestIEs ies.
 * \param s1AP_E_RABModifyRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_e_rabmodifyrequesties(
    S1AP_E_RABModifyRequestIEs_t *s1AP_E_RABModifyRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-E-RABModifyRequestIEs ies.
 *  \param s1AP_E_RABModifyRequest Pointer to the ASN1 structure.
 *  \param s1AP_E_RABModifyRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabmodifyrequesties(
    S1AP_E_RABModifyRequest_t *s1AP_E_RABModifyRequest,
    S1AP_E_RABModifyRequestIEs_t *s1AP_E_RABModifyRequestIEs);

/** \brief Free function for S1AP-E-RABModifyRequestIEs ies.
 *  \param s1AP_E_RABModifyRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabmodifyrequesties(
    S1AP_E_RABModifyRequestIEs_t *s1AP_E_RABModifyRequestIEs);

/** \brief Decode function for S1AP-HandoverRequestAcknowledgeIEs ies.
 * \param s1AP_HandoverRequestAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handoverrequestacknowledgeies(
    S1AP_HandoverRequestAcknowledgeIEs_t *s1AP_HandoverRequestAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverRequestAcknowledgeIEs ies.
 *  \param s1AP_HandoverRequestAcknowledge Pointer to the ASN1 structure.
 *  \param s1AP_HandoverRequestAcknowledgeIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handoverrequestacknowledgeies(
    S1AP_HandoverRequestAcknowledge_t *s1AP_HandoverRequestAcknowledge,
    S1AP_HandoverRequestAcknowledgeIEs_t *s1AP_HandoverRequestAcknowledgeIEs);

/** \brief Free function for S1AP-HandoverRequestAcknowledgeIEs ies.
 *  \param s1AP_HandoverRequestAcknowledgeIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handoverrequestacknowledgeies(
    S1AP_HandoverRequestAcknowledgeIEs_t *s1AP_HandoverRequestAcknowledgeIEs);

/** \brief Decode function for S1AP-DownlinkNASTransport-IEs ies.
 * \param s1AP_DownlinkNASTransport_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_downlinknastransport_ies(
    S1AP_DownlinkNASTransport_IEs_t *s1AP_DownlinkNASTransport_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-DownlinkNASTransport-IEs ies.
 *  \param s1AP_DownlinkNASTransport Pointer to the ASN1 structure.
 *  \param s1AP_DownlinkNASTransport_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_downlinknastransport_ies(
    S1AP_DownlinkNASTransport_t *s1AP_DownlinkNASTransport,
    S1AP_DownlinkNASTransport_IEs_t *s1AP_DownlinkNASTransport_IEs);

/** \brief Free function for S1AP-DownlinkNASTransport-IEs ies.
 *  \param s1AP_DownlinkNASTransport_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_downlinknastransport_ies(
    S1AP_DownlinkNASTransport_IEs_t *s1AP_DownlinkNASTransport_IEs);

/** \brief Decode function for S1AP-E-RABReleaseIndicationIEs ies.
 * \param s1AP_E_RABReleaseIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_e_rabreleaseindicationies(
    S1AP_E_RABReleaseIndicationIEs_t *s1AP_E_RABReleaseIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-E-RABReleaseIndicationIEs ies.
 *  \param s1AP_E_RABReleaseIndication Pointer to the ASN1 structure.
 *  \param s1AP_E_RABReleaseIndicationIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabreleaseindicationies(
    S1AP_E_RABReleaseIndication_t *s1AP_E_RABReleaseIndication,
    S1AP_E_RABReleaseIndicationIEs_t *s1AP_E_RABReleaseIndicationIEs);

/** \brief Free function for S1AP-E-RABReleaseIndicationIEs ies.
 *  \param s1AP_E_RABReleaseIndicationIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabreleaseindicationies(
    S1AP_E_RABReleaseIndicationIEs_t *s1AP_E_RABReleaseIndicationIEs);

/** \brief Decode function for S1AP-PathSwitchRequestAcknowledgeIEs ies.
 * \param s1AP_PathSwitchRequestAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_pathswitchrequestacknowledgeies(
    S1AP_PathSwitchRequestAcknowledgeIEs_t *s1AP_PathSwitchRequestAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-PathSwitchRequestAcknowledgeIEs ies.
 *  \param s1AP_PathSwitchRequestAcknowledge Pointer to the ASN1 structure.
 *  \param s1AP_PathSwitchRequestAcknowledgeIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_pathswitchrequestacknowledgeies(
    S1AP_PathSwitchRequestAcknowledge_t *s1AP_PathSwitchRequestAcknowledge,
    S1AP_PathSwitchRequestAcknowledgeIEs_t *s1AP_PathSwitchRequestAcknowledgeIEs);

/** \brief Free function for S1AP-PathSwitchRequestAcknowledgeIEs ies.
 *  \param s1AP_PathSwitchRequestAcknowledgeIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_pathswitchrequestacknowledgeies(
    S1AP_PathSwitchRequestAcknowledgeIEs_t *s1AP_PathSwitchRequestAcknowledgeIEs);

/** \brief Decode function for S1AP-NASNonDeliveryIndication-IEs ies.
 * \param s1AP_NASNonDeliveryIndication_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_nasnondeliveryindication_ies(
    S1AP_NASNonDeliveryIndication_IEs_t *s1AP_NASNonDeliveryIndication_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-NASNonDeliveryIndication-IEs ies.
 *  \param s1AP_NASNonDeliveryIndication Pointer to the ASN1 structure.
 *  \param s1AP_NASNonDeliveryIndication_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_nasnondeliveryindication_ies(
    S1AP_NASNonDeliveryIndication_t *s1AP_NASNonDeliveryIndication,
    S1AP_NASNonDeliveryIndication_IEs_t *s1AP_NASNonDeliveryIndication_IEs);

/** \brief Free function for S1AP-NASNonDeliveryIndication-IEs ies.
 *  \param s1AP_NASNonDeliveryIndication_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_nasnondeliveryindication_ies(
    S1AP_NASNonDeliveryIndication_IEs_t *s1AP_NASNonDeliveryIndication_IEs);

/** \brief Decode function for S1AP-InitialContextSetupRequestIEs ies.
 * \param s1AP_InitialContextSetupRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_initialcontextsetuprequesties(
    S1AP_InitialContextSetupRequestIEs_t *s1AP_InitialContextSetupRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-InitialContextSetupRequestIEs ies.
 *  \param s1AP_InitialContextSetupRequest Pointer to the ASN1 structure.
 *  \param s1AP_InitialContextSetupRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_initialcontextsetuprequesties(
    S1AP_InitialContextSetupRequest_t *s1AP_InitialContextSetupRequest,
    S1AP_InitialContextSetupRequestIEs_t *s1AP_InitialContextSetupRequestIEs);

/** \brief Free function for S1AP-InitialContextSetupRequestIEs ies.
 *  \param s1AP_InitialContextSetupRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_initialcontextsetuprequesties(
    S1AP_InitialContextSetupRequestIEs_t *s1AP_InitialContextSetupRequestIEs);

/** \brief Decode function for S1AP-S1SetupResponseIEs ies.
 * \param s1AP_S1SetupResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_s1setupresponseies(
    S1AP_S1SetupResponseIEs_t *s1AP_S1SetupResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-S1SetupResponseIEs ies.
 *  \param s1AP_S1SetupResponse Pointer to the ASN1 structure.
 *  \param s1AP_S1SetupResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_s1setupresponseies(
    S1AP_S1SetupResponse_t *s1AP_S1SetupResponse,
    S1AP_S1SetupResponseIEs_t *s1AP_S1SetupResponseIEs);

/** \brief Free function for S1AP-S1SetupResponseIEs ies.
 *  \param s1AP_S1SetupResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_s1setupresponseies(
    S1AP_S1SetupResponseIEs_t *s1AP_S1SetupResponseIEs);

/** \brief Decode function for S1AP-MMEConfigurationUpdateFailureIEs ies.
 * \param s1AP_MMEConfigurationUpdateFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_mmeconfigurationupdatefailureies(
    S1AP_MMEConfigurationUpdateFailureIEs_t *s1AP_MMEConfigurationUpdateFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-MMEConfigurationUpdateFailureIEs ies.
 *  \param s1AP_MMEConfigurationUpdateFailure Pointer to the ASN1 structure.
 *  \param s1AP_MMEConfigurationUpdateFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_mmeconfigurationupdatefailureies(
    S1AP_MMEConfigurationUpdateFailure_t *s1AP_MMEConfigurationUpdateFailure,
    S1AP_MMEConfigurationUpdateFailureIEs_t *s1AP_MMEConfigurationUpdateFailureIEs);

/** \brief Free function for S1AP-MMEConfigurationUpdateFailureIEs ies.
 *  \param s1AP_MMEConfigurationUpdateFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_mmeconfigurationupdatefailureies(
    S1AP_MMEConfigurationUpdateFailureIEs_t *s1AP_MMEConfigurationUpdateFailureIEs);

/** \brief Decode function for S1AP-InitialContextSetupResponseIEs ies.
 * \param s1AP_InitialContextSetupResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_initialcontextsetupresponseies(
    S1AP_InitialContextSetupResponseIEs_t *s1AP_InitialContextSetupResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-InitialContextSetupResponseIEs ies.
 *  \param s1AP_InitialContextSetupResponse Pointer to the ASN1 structure.
 *  \param s1AP_InitialContextSetupResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_initialcontextsetupresponseies(
    S1AP_InitialContextSetupResponse_t *s1AP_InitialContextSetupResponse,
    S1AP_InitialContextSetupResponseIEs_t *s1AP_InitialContextSetupResponseIEs);

/** \brief Free function for S1AP-InitialContextSetupResponseIEs ies.
 *  \param s1AP_InitialContextSetupResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_initialcontextsetupresponseies(
    S1AP_InitialContextSetupResponseIEs_t *s1AP_InitialContextSetupResponseIEs);

/** \brief Decode function for S1AP-ENBConfigurationUpdateIEs ies.
 * \param s1AP_ENBConfigurationUpdateIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_enbconfigurationupdateies(
    S1AP_ENBConfigurationUpdateIEs_t *s1AP_ENBConfigurationUpdateIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ENBConfigurationUpdateIEs ies.
 *  \param s1AP_ENBConfigurationUpdate Pointer to the ASN1 structure.
 *  \param s1AP_ENBConfigurationUpdateIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_enbconfigurationupdateies(
    S1AP_ENBConfigurationUpdate_t *s1AP_ENBConfigurationUpdate,
    S1AP_ENBConfigurationUpdateIEs_t *s1AP_ENBConfigurationUpdateIEs);

/** \brief Free function for S1AP-ENBConfigurationUpdateIEs ies.
 *  \param s1AP_ENBConfigurationUpdateIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_enbconfigurationupdateies(
    S1AP_ENBConfigurationUpdateIEs_t *s1AP_ENBConfigurationUpdateIEs);

/** \brief Decode function for S1AP-LocationReportIEs ies.
 * \param s1AP_LocationReportIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_locationreporties(
    S1AP_LocationReportIEs_t *s1AP_LocationReportIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-LocationReportIEs ies.
 *  \param s1AP_LocationReport Pointer to the ASN1 structure.
 *  \param s1AP_LocationReportIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_locationreporties(
    S1AP_LocationReport_t *s1AP_LocationReport,
    S1AP_LocationReportIEs_t *s1AP_LocationReportIEs);

/** \brief Free function for S1AP-LocationReportIEs ies.
 *  \param s1AP_LocationReportIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_locationreporties(
    S1AP_LocationReportIEs_t *s1AP_LocationReportIEs);

/** \brief Decode function for S1AP-UplinkUEAssociatedLPPaTransport-IEs ies.
 * \param s1AP_UplinkUEAssociatedLPPaTransport_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uplinkueassociatedlppatransport_ies(
    S1AP_UplinkUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UplinkUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_UplinkUEAssociatedLPPaTransport Pointer to the ASN1 structure.
 *  \param s1AP_UplinkUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uplinkueassociatedlppatransport_ies(
    S1AP_UplinkUEAssociatedLPPaTransport_t *s1AP_UplinkUEAssociatedLPPaTransport,
    S1AP_UplinkUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkUEAssociatedLPPaTransport_IEs);

/** \brief Free function for S1AP-UplinkUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_UplinkUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uplinkueassociatedlppatransport_ies(
    S1AP_UplinkUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkUEAssociatedLPPaTransport_IEs);

/** \brief Decode function for S1AP-UEContextModificationResponseIEs ies.
 * \param s1AP_UEContextModificationResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uecontextmodificationresponseies(
    S1AP_UEContextModificationResponseIEs_t *s1AP_UEContextModificationResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UEContextModificationResponseIEs ies.
 *  \param s1AP_UEContextModificationResponse Pointer to the ASN1 structure.
 *  \param s1AP_UEContextModificationResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uecontextmodificationresponseies(
    S1AP_UEContextModificationResponse_t *s1AP_UEContextModificationResponse,
    S1AP_UEContextModificationResponseIEs_t *s1AP_UEContextModificationResponseIEs);

/** \brief Free function for S1AP-UEContextModificationResponseIEs ies.
 *  \param s1AP_UEContextModificationResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uecontextmodificationresponseies(
    S1AP_UEContextModificationResponseIEs_t *s1AP_UEContextModificationResponseIEs);

/** \brief Decode function for S1AP-E-RABReleaseResponseIEs ies.
 * \param s1AP_E_RABReleaseResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_e_rabreleaseresponseies(
    S1AP_E_RABReleaseResponseIEs_t *s1AP_E_RABReleaseResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-E-RABReleaseResponseIEs ies.
 *  \param s1AP_E_RABReleaseResponse Pointer to the ASN1 structure.
 *  \param s1AP_E_RABReleaseResponseIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabreleaseresponseies(
    S1AP_E_RABReleaseResponse_t *s1AP_E_RABReleaseResponse,
    S1AP_E_RABReleaseResponseIEs_t *s1AP_E_RABReleaseResponseIEs);

/** \brief Free function for S1AP-E-RABReleaseResponseIEs ies.
 *  \param s1AP_E_RABReleaseResponseIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabreleaseresponseies(
    S1AP_E_RABReleaseResponseIEs_t *s1AP_E_RABReleaseResponseIEs);

/** \brief Decode function for S1AP-HandoverRequestIEs ies.
 * \param s1AP_HandoverRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handoverrequesties(
    S1AP_HandoverRequestIEs_t *s1AP_HandoverRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverRequestIEs ies.
 *  \param s1AP_HandoverRequest Pointer to the ASN1 structure.
 *  \param s1AP_HandoverRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handoverrequesties(
    S1AP_HandoverRequest_t *s1AP_HandoverRequest,
    S1AP_HandoverRequestIEs_t *s1AP_HandoverRequestIEs);

/** \brief Free function for S1AP-HandoverRequestIEs ies.
 *  \param s1AP_HandoverRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handoverrequesties(
    S1AP_HandoverRequestIEs_t *s1AP_HandoverRequestIEs);

/** \brief Decode function for S1AP-HandoverRequiredIEs ies.
 * \param s1AP_HandoverRequiredIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_handoverrequiredies(
    S1AP_HandoverRequiredIEs_t *s1AP_HandoverRequiredIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-HandoverRequiredIEs ies.
 *  \param s1AP_HandoverRequired Pointer to the ASN1 structure.
 *  \param s1AP_HandoverRequiredIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_handoverrequiredies(
    S1AP_HandoverRequired_t *s1AP_HandoverRequired,
    S1AP_HandoverRequiredIEs_t *s1AP_HandoverRequiredIEs);

/** \brief Free function for S1AP-HandoverRequiredIEs ies.
 *  \param s1AP_HandoverRequiredIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_handoverrequiredies(
    S1AP_HandoverRequiredIEs_t *s1AP_HandoverRequiredIEs);

/** \brief Decode function for S1AP-MMEConfigurationUpdateAcknowledgeIEs ies.
 * \param s1AP_MMEConfigurationUpdateAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_mmeconfigurationupdateacknowledgeies(
    S1AP_MMEConfigurationUpdateAcknowledgeIEs_t *s1AP_MMEConfigurationUpdateAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-MMEConfigurationUpdateAcknowledgeIEs ies.
 *  \param s1AP_MMEConfigurationUpdateAcknowledge Pointer to the ASN1 structure.
 *  \param s1AP_MMEConfigurationUpdateAcknowledgeIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_mmeconfigurationupdateacknowledgeies(
    S1AP_MMEConfigurationUpdateAcknowledge_t *s1AP_MMEConfigurationUpdateAcknowledge,
    S1AP_MMEConfigurationUpdateAcknowledgeIEs_t *s1AP_MMEConfigurationUpdateAcknowledgeIEs);

/** \brief Free function for S1AP-MMEConfigurationUpdateAcknowledgeIEs ies.
 *  \param s1AP_MMEConfigurationUpdateAcknowledgeIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_mmeconfigurationupdateacknowledgeies(
    S1AP_MMEConfigurationUpdateAcknowledgeIEs_t *s1AP_MMEConfigurationUpdateAcknowledgeIEs);

/** \brief Decode function for S1AP-InitialUEMessage-IEs ies.
 * \param s1AP_InitialUEMessage_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_initialuemessage_ies(
    S1AP_InitialUEMessage_IEs_t *s1AP_InitialUEMessage_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-InitialUEMessage-IEs ies.
 *  \param s1AP_InitialUEMessage Pointer to the ASN1 structure.
 *  \param s1AP_InitialUEMessage_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_initialuemessage_ies(
    S1AP_InitialUEMessage_t *s1AP_InitialUEMessage,
    S1AP_InitialUEMessage_IEs_t *s1AP_InitialUEMessage_IEs);

/** \brief Free function for S1AP-InitialUEMessage-IEs ies.
 *  \param s1AP_InitialUEMessage_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_initialuemessage_ies(
    S1AP_InitialUEMessage_IEs_t *s1AP_InitialUEMessage_IEs);

/** \brief Decode function for S1AP-CellTrafficTraceIEs ies.
 * \param s1AP_CellTrafficTraceIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_celltraffictraceies(
    S1AP_CellTrafficTraceIEs_t *s1AP_CellTrafficTraceIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-CellTrafficTraceIEs ies.
 *  \param s1AP_CellTrafficTrace Pointer to the ASN1 structure.
 *  \param s1AP_CellTrafficTraceIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_celltraffictraceies(
    S1AP_CellTrafficTrace_t *s1AP_CellTrafficTrace,
    S1AP_CellTrafficTraceIEs_t *s1AP_CellTrafficTraceIEs);

/** \brief Free function for S1AP-CellTrafficTraceIEs ies.
 *  \param s1AP_CellTrafficTraceIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_celltraffictraceies(
    S1AP_CellTrafficTraceIEs_t *s1AP_CellTrafficTraceIEs);

/** \brief Decode function for S1AP-ENBStatusTransferIEs ies.
 * \param s1AP_ENBStatusTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_enbstatustransferies(
    S1AP_ENBStatusTransferIEs_t *s1AP_ENBStatusTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ENBStatusTransferIEs ies.
 *  \param s1AP_ENBStatusTransfer Pointer to the ASN1 structure.
 *  \param s1AP_ENBStatusTransferIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_enbstatustransferies(
    S1AP_ENBStatusTransfer_t *s1AP_ENBStatusTransfer,
    S1AP_ENBStatusTransferIEs_t *s1AP_ENBStatusTransferIEs);

/** \brief Free function for S1AP-ENBStatusTransferIEs ies.
 *  \param s1AP_ENBStatusTransferIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_enbstatustransferies(
    S1AP_ENBStatusTransferIEs_t *s1AP_ENBStatusTransferIEs);

/** \brief Decode function for S1AP-UEContextModificationFailureIEs ies.
 * \param s1AP_UEContextModificationFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uecontextmodificationfailureies(
    S1AP_UEContextModificationFailureIEs_t *s1AP_UEContextModificationFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UEContextModificationFailureIEs ies.
 *  \param s1AP_UEContextModificationFailure Pointer to the ASN1 structure.
 *  \param s1AP_UEContextModificationFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uecontextmodificationfailureies(
    S1AP_UEContextModificationFailure_t *s1AP_UEContextModificationFailure,
    S1AP_UEContextModificationFailureIEs_t *s1AP_UEContextModificationFailureIEs);

/** \brief Free function for S1AP-UEContextModificationFailureIEs ies.
 *  \param s1AP_UEContextModificationFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uecontextmodificationfailureies(
    S1AP_UEContextModificationFailureIEs_t *s1AP_UEContextModificationFailureIEs);

/** \brief Decode function for S1AP-MMEDirectInformationTransferIEs ies.
 * \param s1AP_MMEDirectInformationTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_mmedirectinformationtransferies(
    S1AP_MMEDirectInformationTransferIEs_t *s1AP_MMEDirectInformationTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-MMEDirectInformationTransferIEs ies.
 *  \param s1AP_MMEDirectInformationTransfer Pointer to the ASN1 structure.
 *  \param s1AP_MMEDirectInformationTransferIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_mmedirectinformationtransferies(
    S1AP_MMEDirectInformationTransfer_t *s1AP_MMEDirectInformationTransfer,
    S1AP_MMEDirectInformationTransferIEs_t *s1AP_MMEDirectInformationTransferIEs);

/** \brief Free function for S1AP-MMEDirectInformationTransferIEs ies.
 *  \param s1AP_MMEDirectInformationTransferIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_mmedirectinformationtransferies(
    S1AP_MMEDirectInformationTransferIEs_t *s1AP_MMEDirectInformationTransferIEs);

/** \brief Decode function for S1AP-S1SetupFailureIEs ies.
 * \param s1AP_S1SetupFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_s1setupfailureies(
    S1AP_S1SetupFailureIEs_t *s1AP_S1SetupFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-S1SetupFailureIEs ies.
 *  \param s1AP_S1SetupFailure Pointer to the ASN1 structure.
 *  \param s1AP_S1SetupFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_s1setupfailureies(
    S1AP_S1SetupFailure_t *s1AP_S1SetupFailure,
    S1AP_S1SetupFailureIEs_t *s1AP_S1SetupFailureIEs);

/** \brief Free function for S1AP-S1SetupFailureIEs ies.
 *  \param s1AP_S1SetupFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_s1setupfailureies(
    S1AP_S1SetupFailureIEs_t *s1AP_S1SetupFailureIEs);

/** \brief Decode function for S1AP-DownlinkS1cdma2000tunnelingIEs ies.
 * \param s1AP_DownlinkS1cdma2000tunnelingIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_downlinks1cdma2000tunnelingies(
    S1AP_DownlinkS1cdma2000tunnelingIEs_t *s1AP_DownlinkS1cdma2000tunnelingIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-DownlinkS1cdma2000tunnelingIEs ies.
 *  \param s1AP_DownlinkS1cdma2000tunneling Pointer to the ASN1 structure.
 *  \param s1AP_DownlinkS1cdma2000tunnelingIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_downlinks1cdma2000tunnelingies(
    S1AP_DownlinkS1cdma2000tunneling_t *s1AP_DownlinkS1cdma2000tunneling,
    S1AP_DownlinkS1cdma2000tunnelingIEs_t *s1AP_DownlinkS1cdma2000tunnelingIEs);

/** \brief Free function for S1AP-DownlinkS1cdma2000tunnelingIEs ies.
 *  \param s1AP_DownlinkS1cdma2000tunnelingIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_downlinks1cdma2000tunnelingies(
    S1AP_DownlinkS1cdma2000tunnelingIEs_t *s1AP_DownlinkS1cdma2000tunnelingIEs);

/** \brief Decode function for S1AP-E-RABReleaseCommandIEs ies.
 * \param s1AP_E_RABReleaseCommandIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_e_rabreleasecommandies(
    S1AP_E_RABReleaseCommandIEs_t *s1AP_E_RABReleaseCommandIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-E-RABReleaseCommandIEs ies.
 *  \param s1AP_E_RABReleaseCommand Pointer to the ASN1 structure.
 *  \param s1AP_E_RABReleaseCommandIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabreleasecommandies(
    S1AP_E_RABReleaseCommand_t *s1AP_E_RABReleaseCommand,
    S1AP_E_RABReleaseCommandIEs_t *s1AP_E_RABReleaseCommandIEs);

/** \brief Free function for S1AP-E-RABReleaseCommandIEs ies.
 *  \param s1AP_E_RABReleaseCommandIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabreleasecommandies(
    S1AP_E_RABReleaseCommandIEs_t *s1AP_E_RABReleaseCommandIEs);

/** \brief Decode function for S1AP-ResetAcknowledgeIEs ies.
 * \param s1AP_ResetAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_resetacknowledgeies(
    S1AP_ResetAcknowledgeIEs_t *s1AP_ResetAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ResetAcknowledgeIEs ies.
 *  \param s1AP_ResetAcknowledge Pointer to the ASN1 structure.
 *  \param s1AP_ResetAcknowledgeIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_resetacknowledgeies(
    S1AP_ResetAcknowledge_t *s1AP_ResetAcknowledge,
    S1AP_ResetAcknowledgeIEs_t *s1AP_ResetAcknowledgeIEs);

/** \brief Free function for S1AP-ResetAcknowledgeIEs ies.
 *  \param s1AP_ResetAcknowledgeIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_resetacknowledgeies(
    S1AP_ResetAcknowledgeIEs_t *s1AP_ResetAcknowledgeIEs);

/** \brief Decode function for S1AP-DeactivateTraceIEs ies.
 * \param s1AP_DeactivateTraceIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_deactivatetraceies(
    S1AP_DeactivateTraceIEs_t *s1AP_DeactivateTraceIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-DeactivateTraceIEs ies.
 *  \param s1AP_DeactivateTrace Pointer to the ASN1 structure.
 *  \param s1AP_DeactivateTraceIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_deactivatetraceies(
    S1AP_DeactivateTrace_t *s1AP_DeactivateTrace,
    S1AP_DeactivateTraceIEs_t *s1AP_DeactivateTraceIEs);

/** \brief Free function for S1AP-DeactivateTraceIEs ies.
 *  \param s1AP_DeactivateTraceIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_deactivatetraceies(
    S1AP_DeactivateTraceIEs_t *s1AP_DeactivateTraceIEs);

/** \brief Decode function for S1AP-PathSwitchRequestFailureIEs ies.
 * \param s1AP_PathSwitchRequestFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_pathswitchrequestfailureies(
    S1AP_PathSwitchRequestFailureIEs_t *s1AP_PathSwitchRequestFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-PathSwitchRequestFailureIEs ies.
 *  \param s1AP_PathSwitchRequestFailure Pointer to the ASN1 structure.
 *  \param s1AP_PathSwitchRequestFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_pathswitchrequestfailureies(
    S1AP_PathSwitchRequestFailure_t *s1AP_PathSwitchRequestFailure,
    S1AP_PathSwitchRequestFailureIEs_t *s1AP_PathSwitchRequestFailureIEs);

/** \brief Free function for S1AP-PathSwitchRequestFailureIEs ies.
 *  \param s1AP_PathSwitchRequestFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_pathswitchrequestfailureies(
    S1AP_PathSwitchRequestFailureIEs_t *s1AP_PathSwitchRequestFailureIEs);

/** \brief Decode function for S1AP-ENBDirectInformationTransferIEs ies.
 * \param s1AP_ENBDirectInformationTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_enbdirectinformationtransferies(
    S1AP_ENBDirectInformationTransferIEs_t *s1AP_ENBDirectInformationTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ENBDirectInformationTransferIEs ies.
 *  \param s1AP_ENBDirectInformationTransfer Pointer to the ASN1 structure.
 *  \param s1AP_ENBDirectInformationTransferIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_enbdirectinformationtransferies(
    S1AP_ENBDirectInformationTransfer_t *s1AP_ENBDirectInformationTransfer,
    S1AP_ENBDirectInformationTransferIEs_t *s1AP_ENBDirectInformationTransferIEs);

/** \brief Free function for S1AP-ENBDirectInformationTransferIEs ies.
 *  \param s1AP_ENBDirectInformationTransferIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_enbdirectinformationtransferies(
    S1AP_ENBDirectInformationTransferIEs_t *s1AP_ENBDirectInformationTransferIEs);

/** \brief Decode function for S1AP-InitialContextSetupFailureIEs ies.
 * \param s1AP_InitialContextSetupFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_initialcontextsetupfailureies(
    S1AP_InitialContextSetupFailureIEs_t *s1AP_InitialContextSetupFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-InitialContextSetupFailureIEs ies.
 *  \param s1AP_InitialContextSetupFailure Pointer to the ASN1 structure.
 *  \param s1AP_InitialContextSetupFailureIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_initialcontextsetupfailureies(
    S1AP_InitialContextSetupFailure_t *s1AP_InitialContextSetupFailure,
    S1AP_InitialContextSetupFailureIEs_t *s1AP_InitialContextSetupFailureIEs);

/** \brief Free function for S1AP-InitialContextSetupFailureIEs ies.
 *  \param s1AP_InitialContextSetupFailureIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_initialcontextsetupfailureies(
    S1AP_InitialContextSetupFailureIEs_t *s1AP_InitialContextSetupFailureIEs);

/** \brief Decode function for S1AP-UplinkS1cdma2000tunnelingIEs ies.
 * \param s1AP_UplinkS1cdma2000tunnelingIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uplinks1cdma2000tunnelingies(
    S1AP_UplinkS1cdma2000tunnelingIEs_t *s1AP_UplinkS1cdma2000tunnelingIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UplinkS1cdma2000tunnelingIEs ies.
 *  \param s1AP_UplinkS1cdma2000tunneling Pointer to the ASN1 structure.
 *  \param s1AP_UplinkS1cdma2000tunnelingIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uplinks1cdma2000tunnelingies(
    S1AP_UplinkS1cdma2000tunneling_t *s1AP_UplinkS1cdma2000tunneling,
    S1AP_UplinkS1cdma2000tunnelingIEs_t *s1AP_UplinkS1cdma2000tunnelingIEs);

/** \brief Free function for S1AP-UplinkS1cdma2000tunnelingIEs ies.
 *  \param s1AP_UplinkS1cdma2000tunnelingIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uplinks1cdma2000tunnelingies(
    S1AP_UplinkS1cdma2000tunnelingIEs_t *s1AP_UplinkS1cdma2000tunnelingIEs);

/** \brief Decode function for S1AP-ErrorIndicationIEs ies.
 * \param s1AP_ErrorIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_errorindicationies(
    S1AP_ErrorIndicationIEs_t *s1AP_ErrorIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-ErrorIndicationIEs ies.
 *  \param s1AP_ErrorIndication Pointer to the ASN1 structure.
 *  \param s1AP_ErrorIndicationIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_errorindicationies(
    S1AP_ErrorIndication_t *s1AP_ErrorIndication,
    S1AP_ErrorIndicationIEs_t *s1AP_ErrorIndicationIEs);

/** \brief Free function for S1AP-ErrorIndicationIEs ies.
 *  \param s1AP_ErrorIndicationIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_errorindicationies(
    S1AP_ErrorIndicationIEs_t *s1AP_ErrorIndicationIEs);

/** \brief Decode function for S1AP-KillRequestIEs ies.
 * \param s1AP_KillRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_killrequesties(
    S1AP_KillRequestIEs_t *s1AP_KillRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-KillRequestIEs ies.
 *  \param s1AP_KillRequest Pointer to the ASN1 structure.
 *  \param s1AP_KillRequestIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_killrequesties(
    S1AP_KillRequest_t *s1AP_KillRequest,
    S1AP_KillRequestIEs_t *s1AP_KillRequestIEs);

/** \brief Free function for S1AP-KillRequestIEs ies.
 *  \param s1AP_KillRequestIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_killrequesties(
    S1AP_KillRequestIEs_t *s1AP_KillRequestIEs);

/** \brief Decode function for S1AP-TraceStartIEs ies.
 * \param s1AP_TraceStartIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_tracestarties(
    S1AP_TraceStartIEs_t *s1AP_TraceStartIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-TraceStartIEs ies.
 *  \param s1AP_TraceStart Pointer to the ASN1 structure.
 *  \param s1AP_TraceStartIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_tracestarties(
    S1AP_TraceStart_t *s1AP_TraceStart,
    S1AP_TraceStartIEs_t *s1AP_TraceStartIEs);

/** \brief Free function for S1AP-TraceStartIEs ies.
 *  \param s1AP_TraceStartIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_tracestarties(
    S1AP_TraceStartIEs_t *s1AP_TraceStartIEs);

/** \brief Decode function for S1AP-OverloadStartIEs ies.
 * \param s1AP_OverloadStartIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_overloadstarties(
    S1AP_OverloadStartIEs_t *s1AP_OverloadStartIEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-OverloadStartIEs ies.
 *  \param s1AP_OverloadStart Pointer to the ASN1 structure.
 *  \param s1AP_OverloadStartIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_overloadstarties(
    S1AP_OverloadStart_t *s1AP_OverloadStart,
    S1AP_OverloadStartIEs_t *s1AP_OverloadStartIEs);

/** \brief Free function for S1AP-OverloadStartIEs ies.
 *  \param s1AP_OverloadStartIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_overloadstarties(
    S1AP_OverloadStartIEs_t *s1AP_OverloadStartIEs);

/** \brief Decode function for S1AP-UplinkNonUEAssociatedLPPaTransport-IEs ies.
 * \param s1AP_UplinkNonUEAssociatedLPPaTransport_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int s1ap_decode_s1ap_uplinknonueassociatedlppatransport_ies(
    S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkNonUEAssociatedLPPaTransport_IEs,
    ANY_t *any_p);

/** \brief Encode function for S1AP-UplinkNonUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_UplinkNonUEAssociatedLPPaTransport Pointer to the ASN1 structure.
 *  \param s1AP_UplinkNonUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_uplinknonueassociatedlppatransport_ies(
    S1AP_UplinkNonUEAssociatedLPPaTransport_t *s1AP_UplinkNonUEAssociatedLPPaTransport,
    S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkNonUEAssociatedLPPaTransport_IEs);

/** \brief Free function for S1AP-UplinkNonUEAssociatedLPPaTransport-IEs ies.
 *  \param s1AP_UplinkNonUEAssociatedLPPaTransport_IEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_uplinknonueassociatedlppatransport_ies(
    S1AP_UplinkNonUEAssociatedLPPaTransport_IEs_t *s1AP_UplinkNonUEAssociatedLPPaTransport_IEs);

/** \brief Encode function for S1AP-E-RABModifyItemBearerModResIEs ies.
 *  \param s1AP_E_RABModifyListBearerModRes Pointer to the ASN1 structure.
 *  \param s1AP_E_RABModifyItemBearerModResIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabmodifylistbearermodres(
    S1AP_E_RABModifyListBearerModRes_t *s1AP_E_RABModifyListBearerModRes,
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModResIEs);

/** \brief Decode function for S1AP-E-RABModifyItemBearerModResIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabmodifylistbearermodres(
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModResIEs,
    S1AP_E_RABModifyListBearerModRes_t *s1AP_E_RABModifyListBearerModRes);

/** \brief Free function for S1AP-E-RABModifyItemBearerModResIEs ies.
 *  \param s1AP_E_RABModifyItemBearerModResIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabmodifylistbearermodres(
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModResIEs);

/** \brief Encode function for S1AP-E-RABReleaseItemBearerRelCompIEs ies.
 *  \param s1AP_E_RABReleaseListBearerRelComp Pointer to the ASN1 structure.
 *  \param s1AP_E_RABReleaseItemBearerRelCompIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabreleaselistbearerrelcomp(
    S1AP_E_RABReleaseListBearerRelComp_t *s1AP_E_RABReleaseListBearerRelComp,
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelCompIEs);

/** \brief Decode function for S1AP-E-RABReleaseItemBearerRelCompIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabreleaselistbearerrelcomp(
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelCompIEs,
    S1AP_E_RABReleaseListBearerRelComp_t *s1AP_E_RABReleaseListBearerRelComp);

/** \brief Free function for S1AP-E-RABReleaseItemBearerRelCompIEs ies.
 *  \param s1AP_E_RABReleaseItemBearerRelCompIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabreleaselistbearerrelcomp(
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelCompIEs);

/** \brief Encode function for S1AP-E-RABToBeModifiedItemBearerModReqIEs ies.
 *  \param s1AP_E_RABToBeModifiedListBearerModReq Pointer to the ASN1 structure.
 *  \param s1AP_E_RABToBeModifiedItemBearerModReqIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabtobemodifiedlistbearermodreq(
    S1AP_E_RABToBeModifiedListBearerModReq_t *s1AP_E_RABToBeModifiedListBearerModReq,
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReqIEs);

/** \brief Decode function for S1AP-E-RABToBeModifiedItemBearerModReqIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabtobemodifiedlistbearermodreq(
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReqIEs,
    S1AP_E_RABToBeModifiedListBearerModReq_t *s1AP_E_RABToBeModifiedListBearerModReq);

/** \brief Free function for S1AP-E-RABToBeModifiedItemBearerModReqIEs ies.
 *  \param s1AP_E_RABToBeModifiedItemBearerModReqIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabtobemodifiedlistbearermodreq(
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReqIEs);

/** \brief Encode function for S1AP-E-RABToBeSetupItemBearerSUReqIEs ies.
 *  \param s1AP_E_RABToBeSetupListBearerSUReq Pointer to the ASN1 structure.
 *  \param s1AP_E_RABToBeSetupItemBearerSUReqIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabtobesetuplistbearersureq(
    S1AP_E_RABToBeSetupListBearerSUReq_t *s1AP_E_RABToBeSetupListBearerSUReq,
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReqIEs);

/** \brief Decode function for S1AP-E-RABToBeSetupItemBearerSUReqIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabtobesetuplistbearersureq(
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReqIEs,
    S1AP_E_RABToBeSetupListBearerSUReq_t *s1AP_E_RABToBeSetupListBearerSUReq);

/** \brief Free function for S1AP-E-RABToBeSetupItemBearerSUReqIEs ies.
 *  \param s1AP_E_RABToBeSetupItemBearerSUReqIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabtobesetuplistbearersureq(
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReqIEs);

/** \brief Encode function for S1AP-E-RABDataForwardingItemIEs ies.
 *  \param s1AP_E_RABSubjecttoDataForwardingList Pointer to the ASN1 structure.
 *  \param s1AP_E_RABDataForwardingItemIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabsubjecttodataforwardinglist(
    S1AP_E_RABSubjecttoDataForwardingList_t *s1AP_E_RABSubjecttoDataForwardingList,
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingListIEs);

/** \brief Decode function for S1AP-E-RABDataForwardingItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabsubjecttodataforwardinglist(
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingListIEs,
    S1AP_E_RABSubjecttoDataForwardingList_t *s1AP_E_RABSubjecttoDataForwardingList);

/** \brief Free function for S1AP-E-RABDataForwardingItemIEs ies.
 *  \param s1AP_E_RABDataForwardingItemIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabsubjecttodataforwardinglist(
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingListIEs);

/** \brief Encode function for S1AP-UE-associatedLogicalS1-ConnectionItemRes ies.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionListRes Pointer to the ASN1 structure.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionItemRes Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_ue_associatedlogicals1_connectionlistres(
    S1AP_UE_associatedLogicalS1_ConnectionListRes_t *s1AP_UE_associatedLogicalS1_ConnectionListRes,
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResIEs);

/** \brief Decode function for S1AP-UE-associatedLogicalS1-ConnectionItemRes ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_ue_associatedlogicals1_connectionlistres(
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResIEs,
    S1AP_UE_associatedLogicalS1_ConnectionListRes_t *s1AP_UE_associatedLogicalS1_ConnectionListRes);

/** \brief Free function for S1AP-UE-associatedLogicalS1-ConnectionItemRes ies.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionItemRes Pointer to the IES structure.
 **/
void s1ap_free_s1ap_ue_associatedlogicals1_connectionlistres(
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResIEs);

/** \brief Encode function for S1AP-E-RABSetupItemBearerSUResIEs ies.
 *  \param s1AP_E_RABSetupListBearerSURes Pointer to the ASN1 structure.
 *  \param s1AP_E_RABSetupItemBearerSUResIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabsetuplistbearersures(
    S1AP_E_RABSetupListBearerSURes_t *s1AP_E_RABSetupListBearerSURes,
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSUResIEs);

/** \brief Decode function for S1AP-E-RABSetupItemBearerSUResIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabsetuplistbearersures(
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSUResIEs,
    S1AP_E_RABSetupListBearerSURes_t *s1AP_E_RABSetupListBearerSURes);

/** \brief Free function for S1AP-E-RABSetupItemBearerSUResIEs ies.
 *  \param s1AP_E_RABSetupItemBearerSUResIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabsetuplistbearersures(
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSUResIEs);

/** \brief Encode function for S1AP-Bearers-SubjectToStatusTransfer-ItemIEs ies.
 *  \param s1AP_Bearers_SubjectToStatusTransferList Pointer to the ASN1 structure.
 *  \param s1AP_Bearers_SubjectToStatusTransfer_ItemIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_bearers_subjecttostatustransferlist(
    S1AP_Bearers_SubjectToStatusTransferList_t *s1AP_Bearers_SubjectToStatusTransferList,
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferListIEs);

/** \brief Decode function for S1AP-Bearers-SubjectToStatusTransfer-ItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_bearers_subjecttostatustransferlist(
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferListIEs,
    S1AP_Bearers_SubjectToStatusTransferList_t *s1AP_Bearers_SubjectToStatusTransferList);

/** \brief Free function for S1AP-Bearers-SubjectToStatusTransfer-ItemIEs ies.
 *  \param s1AP_Bearers_SubjectToStatusTransfer_ItemIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_bearers_subjecttostatustransferlist(
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferListIEs);

/** \brief Encode function for S1AP-TAIItemIEs ies.
 *  \param s1AP_TAIList Pointer to the ASN1 structure.
 *  \param s1AP_TAIItemIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_tailist(
    S1AP_TAIList_t *s1AP_TAIList,
    S1AP_TAIList_IEs_t *s1AP_TAIListIEs);

/** \brief Decode function for S1AP-TAIItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_tailist(
    S1AP_TAIList_IEs_t *s1AP_TAIListIEs,
    S1AP_TAIList_t *s1AP_TAIList);

/** \brief Free function for S1AP-TAIItemIEs ies.
 *  \param s1AP_TAIItemIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_tailist(
    S1AP_TAIList_IEs_t *s1AP_TAIListIEs);

/** \brief Encode function for S1AP-E-RABToBeSetupItemHOReqIEs ies.
 *  \param s1AP_E_RABToBeSetupListHOReq Pointer to the ASN1 structure.
 *  \param s1AP_E_RABToBeSetupItemHOReqIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabtobesetuplisthoreq(
    S1AP_E_RABToBeSetupListHOReq_t *s1AP_E_RABToBeSetupListHOReq,
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReqIEs);

/** \brief Decode function for S1AP-E-RABToBeSetupItemHOReqIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabtobesetuplisthoreq(
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReqIEs,
    S1AP_E_RABToBeSetupListHOReq_t *s1AP_E_RABToBeSetupListHOReq);

/** \brief Free function for S1AP-E-RABToBeSetupItemHOReqIEs ies.
 *  \param s1AP_E_RABToBeSetupItemHOReqIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabtobesetuplisthoreq(
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReqIEs);

/** \brief Encode function for S1AP-E-RABToBeSwitchedULItemIEs ies.
 *  \param s1AP_E_RABToBeSwitchedULList Pointer to the ASN1 structure.
 *  \param s1AP_E_RABToBeSwitchedULItemIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabtobeswitchedullist(
    S1AP_E_RABToBeSwitchedULList_t *s1AP_E_RABToBeSwitchedULList,
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULListIEs);

/** \brief Decode function for S1AP-E-RABToBeSwitchedULItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabtobeswitchedullist(
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULListIEs,
    S1AP_E_RABToBeSwitchedULList_t *s1AP_E_RABToBeSwitchedULList);

/** \brief Free function for S1AP-E-RABToBeSwitchedULItemIEs ies.
 *  \param s1AP_E_RABToBeSwitchedULItemIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabtobeswitchedullist(
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULListIEs);

/** \brief Encode function for S1AP-E-RABItemIEs ies.
 *  \param s1AP_E_RABList Pointer to the ASN1 structure.
 *  \param s1AP_E_RABItemIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rablist(
    S1AP_E_RABList_t *s1AP_E_RABList,
    S1AP_E_RABList_IEs_t *s1AP_E_RABListIEs);

/** \brief Decode function for S1AP-E-RABItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rablist(
    S1AP_E_RABList_IEs_t *s1AP_E_RABListIEs,
    S1AP_E_RABList_t *s1AP_E_RABList);

/** \brief Free function for S1AP-E-RABItemIEs ies.
 *  \param s1AP_E_RABItemIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rablist(
    S1AP_E_RABList_IEs_t *s1AP_E_RABListIEs);

/** \brief Encode function for S1AP-E-RABFailedtoSetupItemHOReqAckIEs ies.
 *  \param s1AP_E_RABFailedtoSetupListHOReqAck Pointer to the ASN1 structure.
 *  \param s1AP_E_RABFailedtoSetupItemHOReqAckIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabfailedtosetuplisthoreqack(
    S1AP_E_RABFailedtoSetupListHOReqAck_t *s1AP_E_RABFailedtoSetupListHOReqAck,
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAckIEs);

/** \brief Decode function for S1AP-E-RABFailedtoSetupItemHOReqAckIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabfailedtosetuplisthoreqack(
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAckIEs,
    S1AP_E_RABFailedtoSetupListHOReqAck_t *s1AP_E_RABFailedtoSetupListHOReqAck);

/** \brief Free function for S1AP-E-RABFailedtoSetupItemHOReqAckIEs ies.
 *  \param s1AP_E_RABFailedtoSetupItemHOReqAckIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabfailedtosetuplisthoreqack(
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAckIEs);

/** \brief Encode function for S1AP-E-RABToBeSwitchedDLItemIEs ies.
 *  \param s1AP_E_RABToBeSwitchedDLList Pointer to the ASN1 structure.
 *  \param s1AP_E_RABToBeSwitchedDLItemIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabtobeswitcheddllist(
    S1AP_E_RABToBeSwitchedDLList_t *s1AP_E_RABToBeSwitchedDLList,
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLListIEs);

/** \brief Decode function for S1AP-E-RABToBeSwitchedDLItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabtobeswitcheddllist(
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLListIEs,
    S1AP_E_RABToBeSwitchedDLList_t *s1AP_E_RABToBeSwitchedDLList);

/** \brief Free function for S1AP-E-RABToBeSwitchedDLItemIEs ies.
 *  \param s1AP_E_RABToBeSwitchedDLItemIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabtobeswitcheddllist(
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLListIEs);

/** \brief Encode function for S1AP-E-RABAdmittedItemIEs ies.
 *  \param s1AP_E_RABAdmittedList Pointer to the ASN1 structure.
 *  \param s1AP_E_RABAdmittedItemIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabadmittedlist(
    S1AP_E_RABAdmittedList_t *s1AP_E_RABAdmittedList,
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedListIEs);

/** \brief Decode function for S1AP-E-RABAdmittedItemIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabadmittedlist(
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedListIEs,
    S1AP_E_RABAdmittedList_t *s1AP_E_RABAdmittedList);

/** \brief Free function for S1AP-E-RABAdmittedItemIEs ies.
 *  \param s1AP_E_RABAdmittedItemIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabadmittedlist(
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedListIEs);

/** \brief Encode function for S1AP-E-RABToBeSetupItemCtxtSUReqIEs ies.
 *  \param s1AP_E_RABToBeSetupListCtxtSUReq Pointer to the ASN1 structure.
 *  \param s1AP_E_RABToBeSetupItemCtxtSUReqIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabtobesetuplistctxtsureq(
    S1AP_E_RABToBeSetupListCtxtSUReq_t *s1AP_E_RABToBeSetupListCtxtSUReq,
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReqIEs);

/** \brief Decode function for S1AP-E-RABToBeSetupItemCtxtSUReqIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabtobesetuplistctxtsureq(
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReqIEs,
    S1AP_E_RABToBeSetupListCtxtSUReq_t *s1AP_E_RABToBeSetupListCtxtSUReq);

/** \brief Free function for S1AP-E-RABToBeSetupItemCtxtSUReqIEs ies.
 *  \param s1AP_E_RABToBeSetupItemCtxtSUReqIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabtobesetuplistctxtsureq(
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReqIEs);

/** \brief Encode function for S1AP-E-RABInformationListIEs ies.
 *  \param s1AP_E_RABInformationList Pointer to the ASN1 structure.
 *  \param s1AP_E_RABInformationListIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabinformationlist(
    S1AP_E_RABInformationList_t *s1AP_E_RABInformationList,
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationListIEs);

/** \brief Decode function for S1AP-E-RABInformationListIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabinformationlist(
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationListIEs,
    S1AP_E_RABInformationList_t *s1AP_E_RABInformationList);

/** \brief Free function for S1AP-E-RABInformationListIEs ies.
 *  \param s1AP_E_RABInformationListIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabinformationlist(
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationListIEs);

/** \brief Encode function for S1AP-E-RABSetupItemCtxtSUResIEs ies.
 *  \param s1AP_E_RABSetupListCtxtSURes Pointer to the ASN1 structure.
 *  \param s1AP_E_RABSetupItemCtxtSUResIEs Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_e_rabsetuplistctxtsures(
    S1AP_E_RABSetupListCtxtSURes_t *s1AP_E_RABSetupListCtxtSURes,
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSUResIEs);

/** \brief Decode function for S1AP-E-RABSetupItemCtxtSUResIEs ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_e_rabsetuplistctxtsures(
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSUResIEs,
    S1AP_E_RABSetupListCtxtSURes_t *s1AP_E_RABSetupListCtxtSURes);

/** \brief Free function for S1AP-E-RABSetupItemCtxtSUResIEs ies.
 *  \param s1AP_E_RABSetupItemCtxtSUResIEs Pointer to the IES structure.
 **/
void s1ap_free_s1ap_e_rabsetuplistctxtsures(
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSUResIEs);

/** \brief Encode function for S1AP-UE-associatedLogicalS1-ConnectionItemResAck ies.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionListResAck Pointer to the ASN1 structure.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionItemResAck Pointer to the IES structure.
 **/
int s1ap_encode_s1ap_ue_associatedlogicals1_connectionlistresack(
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_t *s1AP_UE_associatedLogicalS1_ConnectionListResAck,
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs);

/** \brief Decode function for S1AP-UE-associatedLogicalS1-ConnectionItemResAck ies.
 *  \param any_p Pointer to the ANY value to decode.
 *  \param callback Callback function called when any_p is successfully decoded.
 **/
int s1ap_decode_s1ap_ue_associatedlogicals1_connectionlistresack(
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs,
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_t *s1AP_UE_associatedLogicalS1_ConnectionListResAck);

/** \brief Free function for S1AP-UE-associatedLogicalS1-ConnectionItemResAck ies.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionItemResAck Pointer to the IES structure.
 **/
void s1ap_free_s1ap_ue_associatedlogicals1_connectionlistresack(
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs);

/** \brief Display S1AP_E_RABSetupResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetupresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UEContextReleaseCommand message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uecontextreleasecommand(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_MMEConfigurationTransfer message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UECapabilityInfoIndication message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uecapabilityinfoindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_WriteReplaceWarningRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_writereplacewarningrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABSetupRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetuprequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_LocationReportingFailureIndication message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_locationreportingfailureindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UEContextReleaseComplete message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uecontextreleasecomplete(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABModifyListBearerModRes encapsulated IE using XER encoding.
 *  \param s1AP_E_RABModifyListBearerModRes Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabmodifylistbearermodres(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABModifyListBearerModRes_IEs_t *s1AP_E_RABModifyListBearerModResIEs);

/** \brief Display S1AP_OverloadStop message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_overloadstop(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABReleaseListBearerRelComp encapsulated IE using XER encoding.
 *  \param s1AP_E_RABReleaseListBearerRelComp Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleaselistbearerrelcomp(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABReleaseListBearerRelComp_IEs_t *s1AP_E_RABReleaseListBearerRelCompIEs);

/** \brief Display S1AP_UEContextModificationRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uecontextmodificationrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABModifyResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabmodifyresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_LocationReportingControl message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_locationreportingcontrol(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_KillResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_killresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_MMEStatusTransfer message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_mmestatustransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABToBeModifiedListBearerModReq encapsulated IE using XER encoding.
 *  \param s1AP_E_RABToBeModifiedListBearerModReq Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobemodifiedlistbearermodreq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeModifiedListBearerModReq_IEs_t *s1AP_E_RABToBeModifiedListBearerModReqIEs);

/** \brief Display S1AP_MMEConfigurationUpdate message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationupdate(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_TraceFailureIndication message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_tracefailureindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ENBConfigurationTransfer message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_DownlinkUEAssociatedLPPaTransport message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_downlinkueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_HandoverFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handoverfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UplinkNASTransport message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uplinknastransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_S1SetupRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_s1setuprequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ENBConfigurationUpdateFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationupdatefailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_PathSwitchRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_pathswitchrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABToBeSetupListBearerSUReq encapsulated IE using XER encoding.
 *  \param s1AP_E_RABToBeSetupListBearerSUReq Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobesetuplistbearersureq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSetupListBearerSUReq_IEs_t *s1AP_E_RABToBeSetupListBearerSUReqIEs);

/** \brief Display S1AP_Reset message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_reset(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABSubjecttoDataForwardingList encapsulated IE using XER encoding.
 *  \param s1AP_E_RABSubjecttoDataForwardingList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsubjecttodataforwardinglist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABSubjecttoDataForwardingList_IEs_t *s1AP_E_RABSubjecttoDataForwardingListIEs);

/** \brief Display S1AP_UEContextReleaseRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uecontextreleaserequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_DownlinkNonUEAssociatedLPPaTransport message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_downlinknonueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UE_associatedLogicalS1_ConnectionListRes encapsulated IE using XER encoding.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionListRes Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_ue_associatedlogicals1_connectionlistres(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_UE_associatedLogicalS1_ConnectionListRes_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResIEs);

/** \brief Display S1AP_Paging message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_paging(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ENBConfigurationUpdateAcknowledge message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationupdateacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABSetupListBearerSURes encapsulated IE using XER encoding.
 *  \param s1AP_E_RABSetupListBearerSURes Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetuplistbearersures(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABSetupListBearerSURes_IEs_t *s1AP_E_RABSetupListBearerSUResIEs);

/** \brief Display S1AP_HandoverNotify message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handovernotify(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_HandoverCancelAcknowledge message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handovercancelacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_HandoverCommand message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handovercommand(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_Bearers_SubjectToStatusTransferList encapsulated IE using XER encoding.
 *  \param s1AP_Bearers_SubjectToStatusTransferList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_bearers_subjecttostatustransferlist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_Bearers_SubjectToStatusTransferList_IEs_t *s1AP_Bearers_SubjectToStatusTransferListIEs);

/** \brief Display S1AP_WriteReplaceWarningResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_writereplacewarningresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_TAIList encapsulated IE using XER encoding.
 *  \param s1AP_TAIList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_tailist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_TAIList_IEs_t *s1AP_TAIListIEs);

/** \brief Display S1AP_HandoverCancel message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handovercancel(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_HandoverPreparationFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handoverpreparationfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABToBeSetupListHOReq encapsulated IE using XER encoding.
 *  \param s1AP_E_RABToBeSetupListHOReq Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobesetuplisthoreq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSetupListHOReq_IEs_t *s1AP_E_RABToBeSetupListHOReqIEs);

/** \brief Display S1AP_E_RABModifyRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabmodifyrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_HandoverRequestAcknowledge message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handoverrequestacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABToBeSwitchedULList encapsulated IE using XER encoding.
 *  \param s1AP_E_RABToBeSwitchedULList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobeswitchedullist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSwitchedULList_IEs_t *s1AP_E_RABToBeSwitchedULListIEs);

/** \brief Display S1AP_DownlinkNASTransport message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_downlinknastransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABReleaseIndication message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleaseindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_PathSwitchRequestAcknowledge message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_pathswitchrequestacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_NASNonDeliveryIndication message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_nasnondeliveryindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABList encapsulated IE using XER encoding.
 *  \param s1AP_E_RABList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rablist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABList_IEs_t *s1AP_E_RABListIEs);

/** \brief Display S1AP_InitialContextSetupRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_initialcontextsetuprequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_S1SetupResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_s1setupresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_MMEConfigurationUpdateFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationupdatefailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_InitialContextSetupResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_initialcontextsetupresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ENBConfigurationUpdate message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_enbconfigurationupdate(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_LocationReport message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_locationreport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UplinkUEAssociatedLPPaTransport message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uplinkueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABFailedtoSetupListHOReqAck encapsulated IE using XER encoding.
 *  \param s1AP_E_RABFailedtoSetupListHOReqAck Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabfailedtosetuplisthoreqack(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABFailedtoSetupListHOReqAck_IEs_t *s1AP_E_RABFailedtoSetupListHOReqAckIEs);

/** \brief Display S1AP_UEContextModificationResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uecontextmodificationresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABReleaseResponse message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleaseresponse(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABToBeSwitchedDLList encapsulated IE using XER encoding.
 *  \param s1AP_E_RABToBeSwitchedDLList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobeswitcheddllist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSwitchedDLList_IEs_t *s1AP_E_RABToBeSwitchedDLListIEs);

/** \brief Display S1AP_HandoverRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handoverrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_HandoverRequired message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_handoverrequired(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_MMEConfigurationUpdateAcknowledge message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_mmeconfigurationupdateacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABAdmittedList encapsulated IE using XER encoding.
 *  \param s1AP_E_RABAdmittedList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabadmittedlist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABAdmittedList_IEs_t *s1AP_E_RABAdmittedListIEs);

/** \brief Display S1AP_InitialUEMessage message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_initialuemessage(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_CellTrafficTrace message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_celltraffictrace(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ENBStatusTransfer message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_enbstatustransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UEContextModificationFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uecontextmodificationfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_MMEDirectInformationTransfer message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_mmedirectinformationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_S1SetupFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_s1setupfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_DownlinkS1cdma2000tunneling message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_downlinks1cdma2000tunneling(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABReleaseCommand message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabreleasecommand(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ResetAcknowledge message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_resetacknowledge(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_DeactivateTrace message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_deactivatetrace(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_PathSwitchRequestFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_pathswitchrequestfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ENBDirectInformationTransfer message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_enbdirectinformationtransfer(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_InitialContextSetupFailure message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_initialcontextsetupfailure(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_UplinkS1cdma2000tunneling message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uplinks1cdma2000tunneling(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_ErrorIndication message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_errorindication(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_KillRequest message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_killrequest(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_TraceStart message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_tracestart(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABToBeSetupListCtxtSUReq encapsulated IE using XER encoding.
 *  \param s1AP_E_RABToBeSetupListCtxtSUReq Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabtobesetuplistctxtsureq(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABToBeSetupListCtxtSUReq_IEs_t *s1AP_E_RABToBeSetupListCtxtSUReqIEs);

/** \brief Display S1AP_OverloadStart message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_overloadstart(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

/** \brief Display S1AP_E_RABInformationList encapsulated IE using XER encoding.
 *  \param s1AP_E_RABInformationList Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabinformationlist(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABInformationList_IEs_t *s1AP_E_RABInformationListIEs);

/** \brief Display S1AP_E_RABSetupListCtxtSURes encapsulated IE using XER encoding.
 *  \param s1AP_E_RABSetupListCtxtSURes Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_e_rabsetuplistctxtsures(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_E_RABSetupListCtxtSURes_IEs_t *s1AP_E_RABSetupListCtxtSUResIEs);

/** \brief Display S1AP_UE_associatedLogicalS1_ConnectionListResAck encapsulated IE using XER encoding.
 *  \param s1AP_UE_associatedLogicalS1_ConnectionListResAck Pointer to the IES structure.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_ue_associatedlogicals1_connectionlistresack(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    S1AP_UE_associatedLogicalS1_ConnectionListResAck_IEs_t *s1AP_UE_associatedLogicalS1_ConnectionListResAckIEs);

/** \brief Display S1AP_UplinkNonUEAssociatedLPPaTransport message using XER encoding.
 *  \param message_p Pointer to root message.
 *  \param file File descriptor to write output.
 **/
asn_enc_rval_t s1ap_xer_print_s1ap_uplinknonueassociatedlppatransport(
    asn_app_consume_bytes_f *cb,
    void *app_key,
    s1ap_message_t *message_p);

int s1ap_xer__print2sp(const void *buffer, size_t size, void *app_key);

int s1ap_xer__print2fp(const void *buffer, size_t size, void *app_key);

extern size_t s1ap_string_total_size;

S1AP_IE_t *s1ap_new_ie(S1AP_ProtocolIE_ID_t id, S1AP_Criticality_t criticality,
    asn_TYPE_descriptor_t *type, void *sptr);

#endif /* S1AP_IES_DEFS_H_ */

