// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

#include "NativeApiHandshake.hpp"  // my header
#include "Marshal.hpp"
#include "NativeHandshakeResultRecord.hpp"

namespace djinni_generated {

NativeApiHandshake::NativeApiHandshake() : ::djinni::JniInterface<::helloworld::ApiHandshake, NativeApiHandshake>("com/mycompany/helloworld/ApiHandshake$CppProxy") {}

NativeApiHandshake::~NativeApiHandshake() = default;


CJNIEXPORT void JNICALL Java_com_mycompany_helloworld_ApiHandshake_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::helloworld::ApiHandshake>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_mycompany_helloworld_ApiHandshake_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::helloworld::ApiHandshake::create();
        return ::djinni::release(::djinni_generated::NativeApiHandshake::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_mycompany_helloworld_ApiHandshake_00024CppProxy_native_1handshake(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_udId, jstring j_appVersion, jstring j_osVersion, jstring j_osType)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::helloworld::ApiHandshake>(nativeRef);
        auto r = ref->handshake(::djinni::String::toCpp(jniEnv, j_udId),
                                ::djinni::String::toCpp(jniEnv, j_appVersion),
                                ::djinni::String::toCpp(jniEnv, j_osVersion),
                                ::djinni::String::toCpp(jniEnv, j_osType));
        return ::djinni::release(::djinni_generated::NativeHandshakeResultRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
