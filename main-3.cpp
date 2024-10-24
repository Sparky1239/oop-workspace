#include "Game.h"
#include <iostream>

int main() {
    // Create a Game object
    Game game;

    // Initialize the game with 3 ships, 2 mines, and a grid of size 10x10
    std::cout << "Initializing game with 3 ships and 2 mines on a 10x10 grid.\n";
    game.initGame(3, 2, 10, 10);

    // Run the game loop with max 10 iterations and mine distance threshold of 2.0
    std::cout << "Starting game loop with 10 max iterations and mine distance threshold of 2.0.\n";
    game.gameLoop(10, 2.0);

    return 0;
}