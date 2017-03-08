//
//  main.cpp
//  HelloWorld
//
//  Created by Ahmet Alsan on 08/03/2017.
//  Copyright © 2017 cortex. All rights reserved.
//

#include <iostream>
#include "hello_world_impl.hpp"

int main(int argc, const char * argv[]) {
    
    helloworld::HelloWorldImpl hw = helloworld::HelloWorldImpl();
    
    std::string myString = hw.get_hello_world();
    
    std::cout << myString << "\n";
    
    return 0;
}
