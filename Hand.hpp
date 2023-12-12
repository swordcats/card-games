#ifndef __GO_FISH_HAND
#define __GO_FISH_HAND

#include "Card.hpp"

/*A hand is a data structure that stores cards.*/

class Hand {
private:
    struct Node {
        Node(Card c) 
        : next{nullptr}, card{c}
        { };

        Node * next;
        Card card;
    };

    Node * head;
    Node * tail;

    unsigned numCards;

public:
    Hand();
    ~Hand();

    Hand(const Hand& other);
    Hand& operator=(const Hand& other);

    bool isEmpty();
    unsigned contains(char rank);
    void addCard(const Card& c);
    void removeAllCards(char rank);

    // This function displays all cards in the Hand.
    void displayAll();
};

#endif