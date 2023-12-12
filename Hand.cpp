#include "Hand.hpp"

Hand::Hand()
: head{nullptr}, tail{nullptr}, numCards{0}
{
    //
}

Hand::~Hand() {
    Node* prev{nullptr};
    Node* current{head};

    while (current != nullptr) {
        prev = current;
        current = current->next;
        delete prev;
    }
}

bool Hand::isEmpty() {
    if (numCards == 0) {
        return true;
    } else {
        return false;
    }
}

unsigned Hand::contains(char rank) {
    if (isEmpty()) { return false; };

    unsigned cardCount{0};

    Node* current{head};

    while (current != nullptr) {
        if (current->card.m_rank == rank) {
            cardCount++;
        }

        current = current->next;
    }

    return cardCount;
}

void Hand::addCard(const Card& c) {
    Node* newNode = new Node{c};

    if (isEmpty()) {
        head = newNode;
    } else {
        tail->next = newNode;
    }

    tail = newNode;

    numCards++;
}

void Hand::removeAllCards(char rank) {
    //
}