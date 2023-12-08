#include "Card.hpp"
#include <string>

Card::Card(std::string suit, char rank) 
: m_suit{suit}, m_rank{rank}
{
    //
}

Card::~Card() {
    //
}