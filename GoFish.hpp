#ifndef __GO_FISH_GAME
#define __GO_FISH_GAME

#include <string>

#include "Hand.hpp"
#include "User.hpp"
#include "Player.hpp"
#include "Computer.hpp"
#include "Card.hpp"

class GoFish {
private:
    //std::string SUITS[4] = {"hearts", "clubs", "spades", "diamonds"};
    //char RANKS[13] = {'2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A'};

    std::vector<User*> players;
    unsigned m_numComputers;
    Player m_player;

    // void createPlayers();
    void dealCards();

public:
    GoFish(unsigned numComputers);
    ~GoFish();

    void playGame();
};

#endif