#include "Card.hpp"

#include <string>
#include <iostream>

#define IS_TRUE(x) { if (!(x)) std::cout << __FUNCTION__ << " failed on line " << __LINE__ << std::endl; }

bool test1() {
    std::string suit = "Spades";
    int val = 9;
    Card c;

    if (c.cardDescription() == "9 of Spades") {
        return true;
    } else {
        return false;
    }
}


int main() {
    IS_TRUE(test1());

    return 0;
}