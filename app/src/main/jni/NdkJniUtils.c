//#include "com_ndkjnidemo_NdkJniUtils.h"
#include <jni.h>
/*
* Class:     Java_com_ndkjnidemo_NdkJniUtils
* Method:    getStringFormC
* Signature: ()Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_com_ndkjnidemo_NdkJniUtils_getStringFormC
        (JNIEnv *env, jobject obj){
   return (*env)->NewStringUTF(env,"Hello Ndk");}