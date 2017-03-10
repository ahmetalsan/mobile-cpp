//
//  main.cpp
//  RestClient
//
//  Created by Ahmet Alsan on 09/03/2017.
//  Copyright © 2017 cortex. All rights reserved.
//

#include <iostream>
#include "api_handshake_impl.hpp"

int main(int argc, const char * argv[]) {
    
    restclient::ApiHandshakeImpl rc = restclient::ApiHandshakeImpl();
    
    restclient::HandshakeResultRecord record = rc.handshake("", "", "", "");
    
    std::cout << record.responseStatus << "\n";
    
    return 0;
}
