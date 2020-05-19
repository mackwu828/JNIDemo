#include <jni.h>
#include <__locale>

//extern "C" JNIEXPORT jstring JNICALL
//Java_com_mackwu_jnidemo_MainActivity_stringFromJNI(
//        JNIEnv *env,
//        jobject /* this */) {
//    std::string hello = "Hello from C++";
//    return env->NewStringUTF(hello.c_str());
//}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_mackwu_jnidemo_JniTest_stringFromJNI(JNIEnv *env, jclass clazz) {
//    std::string hello = "Hello from C++";
//    return env->NewStringUTF(hello.c_str());
    char hello[] = "Hello from C++";
    return env->NewStringUTF(hello);
}