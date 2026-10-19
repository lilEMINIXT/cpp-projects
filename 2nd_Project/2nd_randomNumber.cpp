// #include <iostream>
#include <random>

int getComputerChoice(){
    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(1, 3);

    return distrib(gen);
}