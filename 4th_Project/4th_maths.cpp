#include "4th_userInput.h" 
#include <iostream>
#include <string>

void maths(){
    const int user {77};
    bool isDriving = false;

    int change = stoi(userInput());

    while(change != user){
        std::cout <<"Wrong input! Try again.\n";
        change = stoi(userInput());
    }

    if(change == user){
        isDriving = !isDriving;
        std::cout <<"Drive started. \n";
        while(isDriving){
            std::cout <<"Where do u wanna go? - ";
            std::cout <<"Input in either S, B, or H. \n";
            std::string input = userInput();

            if(input == "S" || input == "s"){
                std::cout <<"You are driving to school. \n";
            }
            else if(input == "B" || input == "b"){
                std::cout <<"You are driving to bank. \n";
            }
            else if(input == "H" || input == "h"){
                std::cout <<"You are heading home. \n";
            }
            else if(input == "Q" || input == "q"){
                std::cout <<"You chose to quit \n";
                isDriving = false;
            }
            else{
                for(int i = 0; i <= 3; i++ ){
                    std::cout <<"Input in either S, B, or H.";
                    input = userInput();
                }
            }
        }
    }
    
}