// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from restclient.djinni

#include "instance.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class RCInstance;

namespace djinni_generated {

class Instance
{
public:
    using CppType = std::shared_ptr<::restclient::Instance>;
    using CppOptType = std::shared_ptr<::restclient::Instance>;
    using ObjcType = RCInstance*;

    using Boxed = Instance;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

