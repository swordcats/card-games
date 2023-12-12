#ifndef __GO_FISH_CARD
#define __GO_FISH_CARD

#include <string>
#include <iostream>

/*
Card is a pretty boring class.  A Card object stores its suit and rank; in Go Fish, the card's
suit doesn't even matter, so 
*/

class Card {
    private:
    
    public:
        Card(std::string suit, char rank);
        ~Card();
        
        Card(const Card & other);
        Card& operator=(const Card & other);

        std::ostream& operator<<(std::ostream& out);

        std::string m_suit;
        char m_rank;
};

#endif