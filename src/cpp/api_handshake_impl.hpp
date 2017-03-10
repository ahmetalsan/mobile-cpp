#pragma once
 
#include "api_handshake.hpp"
#include "handshake_result_record.hpp"
 
namespace restclient {
    
    class ApiHandshakeImpl : public restclient::ApiHandshake {
        
    public:
        
        // Constructor
        ApiHandshakeImpl();
        
        restclient::HandshakeResultRecord handshake(const std::string & udId, const std::string & appVersion, const std::string & osVersion, const std::string & osType);
    };
    
}