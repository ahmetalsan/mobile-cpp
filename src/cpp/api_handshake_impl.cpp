#include "api_handshake_impl.hpp"
#include <string>
 
namespace helloworld {
    
    std::shared_ptr<ApiHandshake> ApiHandshake::create() {
        return std::make_shared<ApiHandshakeImpl>();
    }
    
    ApiHandshakeImpl::ApiHandshakeImpl() {
 
    }
    
    helloworld::HandshakeResultRecord ApiHandshakeImpl::handshake(const std::string & udId, const std::string & appVersion, const std::string & osVersion, const std::string & osType) {

        helloworld:HandshakeResultRecord record = helloworld::HandshakeResultRecord("OK");

        return record;

    }
}