#include "2nd_mathsCal.h"
#include "2nd_collectPlayerInput.h"

#include <iostream>
#include <string>

int main(){
    
    int tries {0};
    int three {3};

    while(Name::isPlaying) {

        Name::eminixt();

        maths();

        if(!Name::isPlaying){
            break;
        }

        std::cout << "You can contuinue! Enter 1 to contuinue playing \n\n";
        std::string retrialChoice = playerChoice();

        while(retrialChoice != one) {

            tries++;

            if(tries == three) {
                std::cout << "You tried the wrong input 3 times \n";
                std::cout << "GAME OVER! \n";
                Name::isPlaying = !Name::isPlaying;
                break;
            }

            std::cout << "\n Choose only 1 to contuinue. \n";

            retrialChoice = playerChoice();

        }

        Name::tries = 0;
    }

    std::cout << "GAME OVER! \n";

    return 0;
}