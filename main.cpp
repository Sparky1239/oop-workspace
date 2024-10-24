#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Creating a Ship at position (2, 3)
    std::cout << "Creating a Ship at position (2, 3).\n";
    Ship ship(2, 3);

    // Move the Ship by (3, 4)
    std::cout << "Moving the Ship by (3, 4).\n";
    ship.move(3, 4);  // This will print the new position of the ship.

    // Creating a Mine at position (5, 5)
    std::cout << "Creating a Mine at position (5, 5).\n";
    Mine mine(5, 5);

    // Mine explodes, returns an Explosion object
    std::cout << "Exploding the Mine...\n";
    Explosion explosion = mine.explode();

    // Applying Explosion to the Ship
    std::cout << "Applying the Explosion to the Ship...\n";
    explosion.apply(ship);

    // End of simulation
    std::cout << "End of the simulation.\n";

    return 0;
}