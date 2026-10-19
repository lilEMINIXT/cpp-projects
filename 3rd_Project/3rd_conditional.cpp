#include "3rd_userInput.h"
#include "3rd_status.h"
#include <iostream>

void conditional(){
    constexpr double maxFuel {20.0};
    double fuel {7.2};
    double distance {8.9};
    const int cargo {10};
    bool isNavigating {true};

    while(isNavigating){
        std::cout <<"Type in either s - status, r - refuel, m - move, q - quit \n";
        
        std::string converter = userInput();

         if(converter == "s" || converter == "S"){
             status("cargo_Space ranger"); //Status of reviewed.
        }

         else if(converter == "r" || converter == "R"){
             std::cout <<"How much fuel you wanna buy? \n";
             // Ruled out "userInput()" which was here.
             double x = std::stod(userInput()); // Takes user input and turns it into double for x.
             fuel += x; // Fuel bought by user + Amount of fuel in status.
             if(fuel > maxFuel){
                std::cout <<"You have bought up to the limit \n";
                fuel = maxFuel;
             }
             std::cout <<"Total fuel left - "<< fuel <<"\n";
        }

         else if(converter == "m" || converter == "M"){
             std::cout <<"How far you wannna go? \n";
             // Ruled out "userInput()" which was here.
             double y = std::stod(userInput()); // Takes user input and turns it into double for y.
             distance -= y; // Minus user distance from Distance in status.
             fuel = distance + cargo;
             std::cout <<"Amount of fuel lost - "<< fuel <<"\n";
        }

         else if(converter == "q" || converter == "Q"){
             std::cout <<"You chose to quit!\n";
             isNavigating = false;
        }

        if(distance <= 0){
              std::cout <<"You Arrived Successfully! \n";
              isNavigating = false;
         }
         if(fuel <= 0){
              std::cout <<"Out of fuel! \n";
             isNavigating = false;
         }

    }
    
}