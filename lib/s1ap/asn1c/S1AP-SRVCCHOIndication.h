/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1AP_SRVCCHOIndication_H_
#define	_S1AP_SRVCCHOIndication_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SRVCCHOIndication {
	S1AP_SRVCCHOIndication_pSandCS	= 0,
	S1AP_SRVCCHOIndication_cSonly	= 1
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_SRVCCHOIndication;

/* S1AP-SRVCCHOIndication */
typedef long	 S1AP_SRVCCHOIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SRVCCHOIndication;
asn_struct_free_f S1AP_SRVCCHOIndication_free;
asn_struct_print_f S1AP_SRVCCHOIndication_print;
asn_constr_check_f S1AP_SRVCCHOIndication_constraint;
ber_type_decoder_f S1AP_SRVCCHOIndication_decode_ber;
der_type_encoder_f S1AP_SRVCCHOIndication_encode_der;
xer_type_decoder_f S1AP_SRVCCHOIndication_decode_xer;
xer_type_encoder_f S1AP_SRVCCHOIndication_encode_xer;
per_type_decoder_f S1AP_SRVCCHOIndication_decode_uper;
per_type_encoder_f S1AP_SRVCCHOIndication_encode_uper;
per_type_decoder_f S1AP_SRVCCHOIndication_decode_aper;
per_type_encoder_f S1AP_SRVCCHOIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SRVCCHOIndication_H_ */
#include "asn_internal.h"
