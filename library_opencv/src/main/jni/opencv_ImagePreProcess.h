/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class opencv_ImagePreProcess */

#ifndef _Included_opencv_ImagePreProcess
#define _Included_opencv_ImagePreProcess
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     opencv_ImagePreProcess
 * Method:    preProcess
 * Signature: ([BII)[B
 */
JNIEXPORT void JNICALL Java_opencv_ImagePreProcess_getYUVCropRect
        (JNIEnv *, jclass, jbyteArray, jint, jint, jbyteArray, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_opencv_ImagePreProcess_preProcess
        (JNIEnv *, jclass, jbyteArray, jint, jint, jbyteArray);

JNIEXPORT void JNICALL Java_opencv_ImagePreProcess_i420ToRGBA
        (JNIEnv *, jclass, jbyteArray, jint, jint, jbyteArray);

JNIEXPORT void JNICALL Java_opencv_ImagePreProcess_nv21ToRGBA
        (JNIEnv *, jclass, jbyteArray, jint, jint, jbyteArray);

JNIEXPORT void JNICALL Java_opencv_ImagePreProcess_RGBAToI420
        (JNIEnv *, jclass, jbyteArray , jint, jint, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif