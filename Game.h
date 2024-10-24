#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;  // Stores game entities (Ship and Mine)

public:
    // Get entities
    std::vector<GameEntity*> get_entities() const;

    // Set entities
    void set_entities(const std::vector<GameEntity*>& newEntities);

    // Initialize game with ships and mines at random positions
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);

    // Run the game loop
    void gameLoop(int maxIterations, double mineDistanceThreshold);
};

#endif // GAME_H