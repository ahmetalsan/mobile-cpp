#include "api_handshake_impl.hpp"
#include <string>
 
namespace restclient {
    
    std::shared_ptr<ApiHandshake> ApiHandshake::create() {
        return std::make_shared<ApiHandshakeImpl>();
    }
    
    ApiHandshakeImpl::ApiHandshakeImpl() {
 
    }
    
    restclient::HandshakeResultRecord ApiHandshakeImpl::handshake(const std::string & udId, const std::string & appVersion, const std::string & osVersion, const std::string & osType) {

        restclient:HandshakeResultRecord record = restclient::HandshakeResultRecord("OK");

        return record;

    }
}