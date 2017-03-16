#include "instance_impl.hpp"
#include <string>
 
namespace restclient {
    
    std::shared_ptr<Instance> Instance::create() {
        return std::make_shared<InstanceImpl>();
    }
    
    InstanceImpl::InstanceImpl() {
 
    }
    
    restclient::HandshakeRecord InstanceImpl::handshake(const std::string & udId, const std::string & appVersion, const std::string & osVersion, const std::string & osType) {

        restclient:HandshakeRecord record = restclient::HandshakeRecord("dummy response");

        return record;

    }
}
