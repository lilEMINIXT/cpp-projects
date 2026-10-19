#include "userInput.h"
#include <iostream>
//#include <string_view>

int main(){
    bool isSprinting = true;
    const int flare {77};
    const int fare {200};
    const std::string A {"A"}, a {"a"};

    while(isSprinting){
        std::cout << "Enter an input of A\n";
        std::string enInput {input()};

        if(enInput == A || enInput == a){
            std::cout << "You may proceed\n";
            
            int xup = std::stoi(input());
            std::cout << "You enterd: " << xup << "\n";
            xup += flare;
            
            while(xup < fare){
                std::cout << "Oops, ur input and the invisible number not equal to 200. \n";
                std::cout << "Try Again! \n";
                xup = std::stoi(input());
                xup += flare;
            }

            if(xup == fare ){
                std::cout << "You got the number right on spot. \n";
                isSprinting = !isSprinting;
            }

            if(xup > fare){
                std::cout << "Number entered greater than 200.";
                xup = fare;
                isSprinting = !isSprinting;
            }

        }
    }

    return 0;

}