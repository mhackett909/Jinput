/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_games_input_dx8_IDirectInput */

#ifndef _Included_net_java_games_input_dx8_IDirectInput
#define _Included_net_java_games_input_dx8_IDirectInput
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_java_games_input_dx8_IDirectInput
 * Method:    createIDirectInput
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_java_games_input_dx8_IDirectInput_createIDirectInput
  (JNIEnv *, jclass);

/*
 * Class:     net_java_games_input_dx8_IDirectInput
 * Method:    nEnumDevices
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_games_input_dx8_IDirectInput_nEnumDevices
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_java_games_input_dx8_IDirectInput
 * Method:    nRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_games_input_dx8_IDirectInput_nRelease
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif