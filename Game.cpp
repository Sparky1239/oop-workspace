#include "Game.h"
#include <iostream>

// Get entities
std::vector<GameEntity*> Game::get_entities() const {
    return entities;
}

// Set entities
void Game::set_entities(const std::vector<GameEntity*>& newEntities) {
    entities = newEntities;
}

// Initialize the game with random ships and mines
std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
    // Create Ships
    for (int i = 0; i < numShips; i++) {
        std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
        Ship* ship = new Ship(std::get<0>(pos), std::get<1>(pos));
        entities.push_back(ship);
    }

    // Create Mines
    for (int i = 0; i < numMines; i++) {
        std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
        Mine* mine = new Mine(std::get<0>(pos), std::get<1>(pos));
        entities.push_back(mine);
    }

    return entities;
}

// Game loop simulation
void Game::gameLoop(int maxIterations, double mineDistanceThreshold) {
    int iterations = 0;

    while (iterations < maxIterations) {
        std::cout << "Iteration: " << iterations + 1 << std::endl;

        // Move all ships
        for (GameEntity* entity : entities) {
            if (dynamic_cast<Ship*>(entity)) {
                dynamic_cast<Ship*>(entity)->move(1, 0);
            }
        }

        // Check distance between ships and mines
        for (GameEntity* entity1 : entities) {
            if (Ship* ship = dynamic_cast<Ship*>(entity1)) {
                for (GameEntity* entity2 : entities) {
                    if (Mine* mine = dynamic_cast<Mine*>(entity2)) {
                        double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                        if (distance <= mineDistanceThreshold) {
                            std::cout << "Ship at (" << std::get<0>(ship->getPos()) << ", "
                                      << std::get<1>(ship->getPos()) << ") is within distance threshold. Mine exploding...\n";
                            Explosion explosion = mine->explode();
                            explosion.apply(*ship);
                        }
                    }
                }
            }
        }

        // Check if all ships are destroyed (moved to (-1, -1))
        bool allShipsDestroyed = true;
        for (GameEntity* entity : entities) {
            if (Ship* ship = dynamic_cast<Ship*>(entity)) {
                if (ship->getPos() != std::make_tuple(-1, -1)) {
                    allShipsDestroyed = false;
                    break;
                }
            }
        }

        if (allShipsDestroyed) {
            std::cout << "All ships are destroyed. Ending game.\n";
            break;
        }

        iterations++;
    }

    if (iterations == maxIterations) {
        std::cout << "Max iterations reached. Ending game.\n";
    }
}