#include <iostream>
#include "GoFish.hpp"
#include "Card.hpp"

int main() {
    std::cout << "hello" << std::endl;

    GoFish g = GoFish(3);
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