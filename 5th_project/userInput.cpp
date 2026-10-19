#include <iostream>
#include <string>

std::string input(){
    std::cout << "Enter an input: ";
    std::string userInput {" "};
    std::cin >> userInput;

    return userInput;
}