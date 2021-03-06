// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from restclient.djinni

#import "RCHandshakeRecord+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto HandshakeRecord::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.responseStatus)};
}

auto HandshakeRecord::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[RCHandshakeRecord alloc] initWithResponseStatus:(::djinni::String::fromCpp(cpp.responseStatus))];
}

}  // namespace djinni_generated
