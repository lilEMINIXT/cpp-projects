#include <iostream>
#include <string_view>

void status(std::string_view shipName){
    double fuel {7.2};
    double distance {8.9};
    int cargo {10};

    std::cout <<"Name of ship: "<< shipName <<"\n";

    std::cout <<"fuel - "<< fuel <<", distance - "<< distance <<", cargo - "<< cargo <<"\n";
}