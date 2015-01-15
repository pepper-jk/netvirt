/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_P2pResponse_H_
#define	_P2pResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "DNDSResult.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* P2pResponse */
typedef struct P2pResponse {
	OCTET_STRING_t	 macAddrDst;
	DNDSResult_t	 result;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} P2pResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_P2pResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _P2pResponse_H_ */
#include <asn_internal.h>
