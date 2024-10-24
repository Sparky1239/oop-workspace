#include "Ship.h"
#include <iostream>


//constructor
Ship::Ship(int x, int y) 
    :GameEntity(x, y, GameEntityType::ShipType) {}

//moves ship in direction
void Ship::move(int dx, int dy){
    int newX = std::get<0>(position) + dx;
    int newY = std::get<1>(position) + dy;    
    position = std::make_tuple(newX, newY);
}

//blank apply function
void Ship::apply(GameEntity& entity){
    
}
