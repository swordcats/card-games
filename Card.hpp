#ifndef __GO_FISH_CARD
#define __GO_FISH_CARD

#include <string>

/*
Card is a pretty boring class.  A Card object stores its suit and rank; in Go Fish, the card's
suit doesn't even matter, so 
*/

class Card {
    private:
        std::string m_suit;
        char m_rank;
    
    public:
        Card(std::string suit, char rank);
        ~Card();
        
        Card & operator=(Card & other);
        Card(Card & other);
};

#endif