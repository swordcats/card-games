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

Card::Card(const Card& other) {
    m_suit = other.m_suit;
    m_rank = other.m_rank;
}

Card& Card::operator=(const Card& other) {
    m_suit = other.m_suit;
    m_rank = other.m_rank;

    return *this;
}

std::ostream& Card::operator<<(std::ostream& out) {
    out << m_rank << " of " << m_suit;
    return out;
}