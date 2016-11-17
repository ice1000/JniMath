/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <stdlib.h>
#include <algorithm>
#include "org_ice1000_public_functions.h"
/* Header for class org_ice1000_bit_ReversePairSum */

#ifndef _Included_org_ice1000_bit_ReversePairSum
#define _Included_org_ice1000_bit_ReversePairSum

#ifdef __cplusplus
extern "C" {
#endif /// __cplusplus

#undef org_ice1000_bit_ReversePairSum_FLAG_BEFORE
#define org_ice1000_bit_ReversePairSum_FLAG_BEFORE 1L

#undef org_ice1000_bit_ReversePairSum_FLAG_AFTER
#define org_ice1000_bit_ReversePairSum_FLAG_AFTER 2L

/**
 * Class:     org_ice1000_bit_ReversePairSum
 * Method:    discretization
 * Signature: ([JI)V
 */
JNIEXPORT void JNICALL Java_org_ice1000_bit_ReversePairSum_discretization(
		JNIEnv *,
		jobject,
		jlongArray,
		jint
);

/**
 * Class:     org_ice1000_bit_ReversePairSum
 * Method:    query
 * Signature: ([JI)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_bit_ReversePairSum_query(
		JNIEnv *,
		jobject,
		jlongArray,
		jint
);

#ifdef __cplusplus
}
#endif /// __cplusplus
#endif /// _Included_org_ice1000_bit_ReversePairSum