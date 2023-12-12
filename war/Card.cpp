#include <string>

Card::Card(std::string suitName, int val) 
: suit{suitName}, value{val}
{
    //
}

Card::~Card() {
    //
}

std::string Card::cardDescription() {
    std::string description = "";

    description += value + " of " + suit;

    return description;
}