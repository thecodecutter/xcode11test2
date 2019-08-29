//
//  main.cpp
//  xcode11test2
//
//  Created by Nick Lansbury on 29/08/2019.
//  Copyright © 2019 ShinyObjects.com. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello lovely C++ World! This was originally coded using XCode 10.3\n\n\n";
    // Update 29/08/2019 I set the following to make this work in the XCode 11 beta
    // Nicks-MacBook-Air:~ nicklansbury$ sudo xcode-select --switch '/Applications/Xcode-beta.app'
    //
    std::cout << "Hello lovely C++ World! This is now amended and testing in XCode 11.0 beta 6\n\n\n";
    return 0;
}

