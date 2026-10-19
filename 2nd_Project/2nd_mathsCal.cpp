#include "2nd_randomNumber.h"
#include "2nd_collectPlayerInput.h"

#include <iostream>
#include <string_view>
#include <string>

std::string_view one {"1"}, two {"2"};
std::string_view three {"3"}, nine {"9"};

namespace Name {
    void eminixt(){
        std::cout << "================================= \n";
        std::string_view name {"EMINIXT'S - ROCK, PAPPER, SCICCORS"};
        std::cout << name << "\n";
        std::cout << "================================= \n\n";
    }
    
     bool isPlaying {true};
     int tries {0};
     const int three {3};
}
void maths(){

    while(Name::isPlaying) {   

        Name::tries++;

       std::cout << "==== Press 9 to quit ====. \n\n";

       std::string userInput = playerChoice();
       std::string compInput = std::to_string(getComputerChoice());

       while(userInput != one && userInput != two && userInput != three && userInput != nine){
           std::cout <<"Choose from either 1, 2, 3, or 9:\n";
           userInput = playerChoice();
       }

       if(userInput == nine) {
           std::cout << "\n You chose to quit! \n\n";
           Name::isPlaying = !Name::isPlaying;
           break;
       }

        if(userInput == compInput){
            std::cout <<"You chose same thing. \n  Its a Tie \n\n";
        }
        else if(userInput == one && compInput == three){
            std::cout <<"You chose rock. \n  rock smashes scissors! You won. \n\n";
        }
        else if(userInput == three && compInput == two){
            std::cout <<"You chose scissors. \n  Scissors cuts paper! You won. \n\n";
        }
        else if(userInput == two && compInput == one){
            std::cout <<"You chose paper. \n  paper wraps rock! You won. \n\n";
        }
        else if(compInput == one && userInput == three){
            std::cout <<"Computer chose rock. \n  Rock smashes scissors! U lost. \n\n";
        }
        else if(compInput == three && userInput == two){
            std::cout <<"Computer chose scissors. \n  Scissors cuts paper! U lost. \n\n";
        }
        else{
            std::cout <<"Computer chose paper. \n  paper wraps rock! U lost. \n\n";
        }

        if(Name::tries == Name::three) {
            std::cout << "\n You already played three times. You would be asked to contuinue in the next phase! \n\n";
           // Name::isPlaying = !Name::isPlaying;
           break;
        }

    }

}