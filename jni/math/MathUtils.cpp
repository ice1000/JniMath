///
/// Created by ice1000 on 2016/11/16.
///

#include "MathUtils.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

using namespace algo4j_math;

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_gcd(
		JNIEnv *env,
		jclass jc,
		jlong a,
		jlong b) {
	return gcd(a, b);
}

JNIEXPORT jlongArray JNICALL Java_org_algo4j_math_MathUtils_exgcdJni(
		JNIEnv *env,
		jclass,
		jlong a,
		jlong b) {
  jlong x, y;
  auto c = exgcd(a, b, x, y);
  auto ret = new jlong[3];
  ret[0] = c;
  ret[1] = x;
  ret[2] = y;
  auto arr = env->NewLongArray(3);
  env->SetLongArrayRegion(arr, 0, 3, ret);
  return arr;
}

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_gcdStein(
		JNIEnv *,
		jclass,
		jlong a,
		jlong b) {
  return gcd_stein(a, b);
}

JNIEXPORT jdouble JNICALL Java_org_algo4j_math_MathUtils_sqrtCarmark(
		JNIEnv *env,
		jclass jc,
		jdouble a) {
	return sqrt_carmack((float) a);
}

JNIEXPORT jdouble JNICALL Java_org_algo4j_math_MathUtils_sqrt(
		JNIEnv *env,
		jclass jc,
		jdouble a) {
	return sqrt_strict(a);
}

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_fastPlus(
		JNIEnv *env,
		jclass jc,
		jlong a,
		jlong b,
		jlong m) {
	return fast_plus(a, b, m);
}

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_fastPower(
		JNIEnv *env,
		jclass jc,
		jlong a,
		jlong b,
		jlong m) {
	return fast_power(a, b, m);
}

#ifdef __abs__ice__
#undef __abs__ice__
#endif /// __abs__ice__

#define __abs__ice__ (a > 0 ? a : -a)

JNIEXPORT jdouble JNICALL Java_org_algo4j_math_MathUtils_abs__D(
		JNIEnv *env,
		jclass jc,
		jdouble a) {
  return __abs__ice__;
}

JNIEXPORT jfloat JNICALL Java_org_algo4j_math_MathUtils_abs__F(
		JNIEnv *env,
		jclass jc,
		jfloat a) {
  return __abs__ice__;
}

JNIEXPORT jint JNICALL Java_org_algo4j_math_MathUtils_abs__I(
		JNIEnv *env,
		jclass jc,
		jint a) {
  return __abs__ice__;
}

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_abs__J(
		JNIEnv *env,
		jclass jc,
		jlong a) {
  return __abs__ice__;
}

#ifdef __max__ice__
#undef __max__ice__
#endif /// __max__ice__

#define __max__ice__ (a > b ? a : b)

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_max__JJ(
		JNIEnv *env,
		jclass jc,
		jlong a,
		jlong b) {
  return __max__ice__;
}

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_max__II(
		JNIEnv *env,
		jclass jc,
		jint a,
		jint b) {
  return __max__ice__;
}

JNIEXPORT jfloat JNICALL Java_org_algo4j_math_MathUtils_max__FF(
		JNIEnv *env,
		jclass jc,
		jfloat a,
		jfloat b) {
  return __max__ice__;
}

JNIEXPORT jdouble JNICALL Java_org_algo4j_math_MathUtils_max__DD(
		JNIEnv *env,
		jclass jc,
		jdouble a,
		jdouble b) {
  return __max__ice__;
}

#ifdef __min__ice__
#undef __min__ice__
#endif /// __min__ice__

#define __min__ice__ (a > b ? b : a)

JNIEXPORT jint JNICALL Java_org_algo4j_math_MathUtils_min__II(
		JNIEnv *env,
		jclass jc,
		jint a,
		jint b) {
	return __min__ice__;
}

JNIEXPORT jlong JNICALL Java_org_algo4j_math_MathUtils_min__JJ(
		JNIEnv *env,
		jclass jc,
		jlong a,
		jlong b) {
	return __min__ice__;
}

JNIEXPORT jfloat JNICALL Java_org_algo4j_math_MathUtils_min__FF(
		JNIEnv *env,
		jclass jc,
		jfloat a,
		jfloat b) {
	return __min__ice__;
}

JNIEXPORT jdouble JNICALL Java_org_algo4j_math_MathUtils_min__DD(
		JNIEnv *env,
		jclass jc,
		jdouble a,
		jdouble b) {
  return __min__ice__;
}

JNIEXPORT jdouble JNICALL Java_org_algo4j_math_MathUtils_ln(
		JNIEnv *env,
		jclass jc,
		jdouble a) {
  return ln_ice(a);
}

JNIEXPORT jdouble JNICALL Java_org_algo4j_math_MathUtils_lg(
		JNIEnv *env,
		jclass jc,
		jdouble a) {
  return lg_ice(a);
}

JNIEXPORT jboolean JNICALL Java_org_algo4j_math_MathUtils_isPrime(
		JNIEnv *,
		jclass,
		jlong a) {
	return *new jboolean(is_prime(__abs__ice__));
}

#undef __abs__ice__
#undef __max__ice__
#undef __min__ice__

#pragma clang diagnostic pop