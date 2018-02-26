/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1AP_SONInformation_H_
#define	_S1AP_SONInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "S1AP-SONInformationRequest.h"
#include "S1AP-SONInformationReply.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SONInformation_PR {
	S1AP_SONInformation_PR_NOTHING,	/* No components present */
	S1AP_SONInformation_PR_sONInformationRequest,
	S1AP_SONInformation_PR_sONInformationReply,
	/* Extensions may appear below */
	
} S1AP_SONInformation_PR;

/* S1AP-SONInformation */
typedef struct S1AP_SONInformation {
	S1AP_SONInformation_PR present;
	union S1AP_SONInformation_u {
		S1AP_SONInformationRequest_t	 sONInformationRequest;
		S1AP_SONInformationReply_t	 sONInformationReply;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONInformation_H_ */
#include "asn_internal.h"
