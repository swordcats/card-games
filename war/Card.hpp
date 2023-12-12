#ifndef __WAR_CARDS
#define __WAR_CARDS

#include "Card.cpp"
#include <string>

class Card {
    private:
        const std::string & suit;
        const int value;
    
    public:
        Card(std::string suit, int value);
        ~Card();

        std::string cardDescription();
};

#endif