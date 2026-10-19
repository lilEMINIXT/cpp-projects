#include "1st_initialNumber.h"
#include "1st_clientInput.h"

#include <iostream>

void loops(){
    int x {mainAnswer()};
    int y {mainInput()};
    int tries {0};

    while(x != y){
        
        tries++;

        if(x < y){
            std::cout <<"Number entered is high! Try Again.\n";
        }
        else{
            std::cout <<"Number entered is low! TRY Again. ";
        }

        y = mainInput();
    }
    std::cout <<"Correct! you got it right.\n";
    std::cout <<"You tried "<< tries <<" Times.";
        
}
