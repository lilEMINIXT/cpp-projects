#include <iostream>
#include <string>

std::string playerChoice(){

    std::cout <<"choose either 1 for rock, 2 for paper, 3 for scissors\n";
    std::cout <<"  choose one of the above - ";

    std::string choice {"0"};
    std::cin >> choice;

    return choice;


}