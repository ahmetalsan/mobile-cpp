#pragma once
 
#include "instance.hpp"
#include "handshake_record.hpp"
 
namespace restclient {
    
    class InstanceImpl : public restclient::Instance {
        
    public:
        
        // Constructor
        InstanceImpl();
        
        restclient::HandshakeRecord handshake(const std::string & udId, const std::string & appVersion, const std::string & osVersion, const std::string & osType);
    };
    
}