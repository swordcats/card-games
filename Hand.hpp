#ifndef __GO_FISH_HAND
#define __GO_FISH_HAND

#include "Card.hpp"

/*A hand is a data structure that stores cards.*/

class Hand {
private:
    struct Node {
        Node(Card c) 
        : prev{nullptr}, next{nullptr}, card{c}
        { };

        Node * next;
        Node * prev;
        Card card;
    };

    Node * head;
    Node * tail;

public:
    Hand();
    ~Hand();

    // This function displays all cards in the Hand.
    void displayAll();

    // This function states if a given Hand contains a card of a certain rank
    bool contains(char rank);
};

#endif