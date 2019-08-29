//
//  main.cpp
//  xcode11test2
//
//  Created by Nick Lansbury on 29/08/2019.
//  Copyright © 2019 ShinyObjects.com. All rights reserved.
//

#include <iostream>

struct User {
    std::string first_name;
    std::string last_name;
    std::string get_status() {
        return status;
    }
    private:
        std::string status = "Gold";
};

int main(int argc, const char * argv[]) {
    
    User me;
    me.first_name = "Nick";
    me.last_name = "Lansbury";
    // me.status = "Gold";   <-- Can't use now that access modifier of property is now private. Use getter instead.
    
    std::cout << "First name: " << me.first_name << std::endl;
    std::cout << "Last name: " << me.last_name << std::endl;
    std::cout << "Status: " << me.get_status() <<std::endl;
    
    
    // Finish off here...
    std::cout << "Hello lovely C++ World! This was originally coded using XCode 10.3\n\n\n";
    // Update 29/08/2019 I set the following to make this work in the XCode 11 beta
    // Nicks-MacBook-Air:~ nicklansbury$ sudo xcode-select --switch '/Applications/Xcode-beta.app'
    //
    std::cout << "Hello lovely C++ World! This is now amended and testing in XCode 11.0 beta 6\n\n\n";
    return 0;
}

