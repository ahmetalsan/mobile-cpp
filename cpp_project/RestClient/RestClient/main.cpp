//
//  main.cpp
//  RestClient
//
//  Created by Ahmet Alsan on 09/03/2017.
//  Copyright © 2017 cortex. All rights reserved.
//

#include <iostream>
#include "instance_impl.hpp"
#include "handshake_record.hpp"

int main(int argc, const char * argv[]) {
    
    restclient::InstanceImpl rc = restclient::InstanceImpl();
    
    restclient::HandshakeRecord record = rc.handshake("", "", "", "");
    
    std::cout << record.responseStatus << "\n";
    
    return 0;
}
