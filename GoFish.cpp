#include "GoFish.hpp"

#include "Player.hpp"
#include "Computer.hpp"

#include <iostream>

GoFish::GoFish(unsigned numComputers) 
: m_numComputers{numComputers}
{
    // Create all of the players
    players.push_back(new Player{});

    for (unsigned idx = 0; idx < m_numComputers; idx++) {
        players.push_back(new Computer{});
    }

    dealCards();
}

GoFish::~GoFish() {

    for (User * player : players) {
        delete player;
    }
}

void GoFish::playGame() {
    //
}

void GoFish::createPlayers() {
    //
}

void GoFish::dealCards() {
    size_t numCards;

    switch(m_numComputers + 1) {
        case 2:
            numCards = 7;
        case 3:
            numCards = 6;
        case 4:
            numCards = 5;
        default:
            numCards = 5;
    }

    for (size_t idx{0}; idx < numCards; idx++) {
        // deal one card to eaach player
        std::cout << idx << std::endl;
    }
}