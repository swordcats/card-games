#include <iostream>
#include <string>
#include "GoFish.hpp"
#include "Card.hpp"

unsigned getNumPlayers() {
    std::cout << "Do you want to play with 2, 3, or 4 players?" << std::endl;

    std::string word;
    unsigned numPlayers = 0;
    bool invalid = false;

    while (!(numPlayers >= 2 && numPlayers <= 4)) {
        std::cin >> word;

        try {
            numPlayers = std::stoul(word);

            if (numPlayers < 2 || numPlayers > 4) {
                invalid = true;
            }
        } catch (std::invalid_argument &) {
            invalid = true;
        }

        if (invalid) {
            std::cerr << "You need to enter a number between 2 and 4!" << std::endl;
            invalid = false;
        }
        
    }

    return numPlayers;
}

int main() {
    unsigned numPlayers = getNumPlayers();

    std::cout << "Let's play Go Fish with " << numPlayers << " players!" << std::endl;

    GoFish g = GoFish(numPlayers);
    g.playGame();
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;
// }