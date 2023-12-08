#ifndef __GO_FISH_USER
#define __GO_FISH_USER

#include "Hand.hpp"
#include "Card.hpp"

class User {
private:
    Hand m_hand;

public:
    virtual Card askForCard(User * p, Card c);
    virtual bool hasCard(Card c);
};

#endif