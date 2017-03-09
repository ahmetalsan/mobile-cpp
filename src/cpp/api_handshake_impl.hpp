#pragma once
 
#include "api_handshake.hpp"
#include "handshake_result_record.hpp"
 
namespace helloworld {
    
    class ApiHandshakeImpl : public helloworld::ApiHandshake {
        
    public:
        
        // Constructor
        ApiHandshakeImpl();
        
        helloworld::HandshakeResultRecord handshake(const std::string & udId, const std::string & appVersion, const std::string & osVersion, const std::string & osType);
    };
    
}