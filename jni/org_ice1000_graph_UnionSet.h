/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "org_ice1000_public_functions.h"
/* Header for class org_ice1000_graph_UnionSet */

#ifndef _Included_org_ice1000_graph_UnionSet
#define _Included_org_ice1000_graph_UnionSet

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Class:     org_ice1000_graph_UnionSet
 * Method:    find
 * Signature: ([III)I
 */
JNIEXPORT jint JNICALL Java_org_ice1000_graph_UnionSet_find(
		JNIEnv *,
		jobject,
		jintArray,
		jint,
		jint
);

/**
 * Class:     org_ice1000_graph_UnionSet
 * Method:    merge
 * Signature: ([IIII)V
 */
JNIEXPORT void JNICALL Java_org_ice1000_graph_UnionSet_merge(
		JNIEnv *,
		jobject,
		jintArray,
		jint,
		jint,
		jint
);

#ifdef __cplusplus
}
#endif
#endif
