/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mpjdev_natmpjdev_Win */

#ifndef _Included_mpjdev_natmpjdev_Win
#define _Included_mpjdev_natmpjdev_Win
#ifdef __cplusplus
extern "C" {
#endif
#undef mpjdev_natmpjdev_Win_UNDEFINED
#define mpjdev_natmpjdev_Win_UNDEFINED -1L
#undef mpjdev_natmpjdev_Win_NULL
#define mpjdev_natmpjdev_Win_NULL 0L
#undef mpjdev_natmpjdev_Win_BYTE
#define mpjdev_natmpjdev_Win_BYTE 1L
#undef mpjdev_natmpjdev_Win_CHAR
#define mpjdev_natmpjdev_Win_CHAR 2L
#undef mpjdev_natmpjdev_Win_SHORT
#define mpjdev_natmpjdev_Win_SHORT 3L
#undef mpjdev_natmpjdev_Win_BOOLEAN
#define mpjdev_natmpjdev_Win_BOOLEAN 4L
#undef mpjdev_natmpjdev_Win_INT
#define mpjdev_natmpjdev_Win_INT 5L
#undef mpjdev_natmpjdev_Win_LONG
#define mpjdev_natmpjdev_Win_LONG 6L
#undef mpjdev_natmpjdev_Win_FLOAT
#define mpjdev_natmpjdev_Win_FLOAT 7L
#undef mpjdev_natmpjdev_Win_DOUBLE
#define mpjdev_natmpjdev_Win_DOUBLE 8L
#undef mpjdev_natmpjdev_Win_PACKED
#define mpjdev_natmpjdev_Win_PACKED 9L
#undef mpjdev_natmpjdev_Win_PRIMITIVE_TYPE_RANGE_UB
#define mpjdev_natmpjdev_Win_PRIMITIVE_TYPE_RANGE_UB 9L
#undef mpjdev_natmpjdev_Win_LB
#define mpjdev_natmpjdev_Win_LB 10L
#undef mpjdev_natmpjdev_Win_UB
#define mpjdev_natmpjdev_Win_UB 11L
#undef mpjdev_natmpjdev_Win_OBJECT
#define mpjdev_natmpjdev_Win_OBJECT 12L
#undef mpjdev_natmpjdev_Win_SHORT2
#define mpjdev_natmpjdev_Win_SHORT2 3L
#undef mpjdev_natmpjdev_Win_INT2
#define mpjdev_natmpjdev_Win_INT2 5L
#undef mpjdev_natmpjdev_Win_LONG2
#define mpjdev_natmpjdev_Win_LONG2 6L
#undef mpjdev_natmpjdev_Win_FLOAT2
#define mpjdev_natmpjdev_Win_FLOAT2 7L
#undef mpjdev_natmpjdev_Win_DOUBLE2
#define mpjdev_natmpjdev_Win_DOUBLE2 8L
/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeCreateWin
 * Signature: (Ljava/nio/ByteBuffer;IIJ)J
 */
JNIEXPORT jlong JNICALL Java_mpjdev_natmpjdev_Win_nativeCreateWin
  (JNIEnv *, jclass, jobject, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeAllocWin
 * Signature: (IIJ)J
 */
JNIEXPORT jlong JNICALL Java_mpjdev_natmpjdev_Win_nativeAllocWin
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeCreateDynamicWin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_mpjdev_natmpjdev_Win_nativeCreateDynamicWin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeAttachWin
 * Signature: (Ljava/nio/ByteBuffer;IJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeAttachWin
  (JNIEnv *, jobject, jobject, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeDetachWin
 * Signature: (Ljava/nio/ByteBuffer;J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeDetachWin
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeFreeWin
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeFreeWin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeGetBase
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_mpjdev_natmpjdev_Win_nativeGetBase
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeGetSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_mpjdev_natmpjdev_Win_nativeGetSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeGetDispUnit
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_mpjdev_natmpjdev_Win_nativeGetDispUnit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeGetCreateFlavor
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_mpjdev_natmpjdev_Win_nativeGetCreateFlavor
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeGetModel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_mpjdev_natmpjdev_Win_nativeGetModel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativePut
 * Signature: (Ljava/nio/ByteBuffer;IIIIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativePut
  (JNIEnv *, jobject, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeGet
 * Signature: (Ljava/nio/ByteBuffer;IIIIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeGet
  (JNIEnv *, jobject, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeAccumulate
 * Signature: (Ljava/nio/ByteBuffer;IIIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeAccumulate
  (JNIEnv *, jobject, jobject, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeGetAccumulate
 * Signature: (Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeGetAccumulate
  (JNIEnv *, jobject, jobject, jint, jint, jobject, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeFetchAndOp
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;IIIIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeFetchAndOp
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeCompareAndSwap
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;IIIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeCompareAndSwap
  (JNIEnv *, jobject, jobject, jobject, jobject, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeRput
 * Signature: (Ljava/nio/ByteBuffer;IIIIJ)J
 */
JNIEXPORT jlong JNICALL Java_mpjdev_natmpjdev_Win_nativeRput
  (JNIEnv *, jobject, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeRget
 * Signature: (Ljava/nio/ByteBuffer;IIIIJ)J
 */
JNIEXPORT jlong JNICALL Java_mpjdev_natmpjdev_Win_nativeRget
  (JNIEnv *, jobject, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeRaccumulate
 * Signature: (Ljava/nio/ByteBuffer;IIIIIIIJ)J
 */
JNIEXPORT jlong JNICALL Java_mpjdev_natmpjdev_Win_nativeRaccumulate
  (JNIEnv *, jobject, jobject, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeRgetAccumulate
 * Signature: (Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIIIIIIJ)J
 */
JNIEXPORT jlong JNICALL Java_mpjdev_natmpjdev_Win_nativeRgetAccumulate
  (JNIEnv *, jobject, jobject, jint, jint, jobject, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeFenceWin
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeFenceWin
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeStartWin
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeStartWin
  (JNIEnv *, jobject, jlong, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeCompleteWin
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeCompleteWin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativePostWin
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativePostWin
  (JNIEnv *, jobject, jlong, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeWaitWin
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeWaitWin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeTestWin
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_mpjdev_natmpjdev_Win_nativeTestWin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeLockWin
 * Signature: (IIIJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeLockWin
  (JNIEnv *, jobject, jint, jint, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeLockAllWin
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeLockAllWin
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeUnlockWin
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeUnlockWin
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeUnlockAllWin
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeUnlockAllWin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeFlushWin
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeFlushWin
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeFlushAllWin
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeFlushAllWin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeFlushLocalWin
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeFlushLocalWin
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeFlushLocalAllWin
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeFlushLocalAllWin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpjdev_natmpjdev_Win
 * Method:    nativeSyncWin
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mpjdev_natmpjdev_Win_nativeSyncWin
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif