#include <iostream>
#include <cstdint>
#include <bitset>

int main(){
    std::uint8_t qwerty {0b0011'1100};
    std::uint8_t asdfg {0b1111'0011};

    std::cout << "qwerty: " << std::bitset<8> (qwerty) << "\n" << "asdfg: " << std::bitset<8> (asdfg) << "\n\n";

    asdfg |= qwerty;
    std::cout << std::bitset<8> (asdfg) << "\n";
    std::cout << std::bitset<8> (qwerty ^ asdfg) << "\n";
    std::cout << std::bitset<8> (~qwerty) ;

    return 0;
}