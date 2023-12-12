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

void GoFish::dealCards() {
    //
}