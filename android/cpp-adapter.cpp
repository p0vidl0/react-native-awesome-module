#include <jni.h>
#include "react-native-awesome-module.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_reactnativeawesomemodule_AwesomeModuleModule_nativeMultiply(JNIEnv *env, jclass type, jint a, jint b) {
    return example::multiply(a, b);
}
