#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"
#include <iostream>

class Ship : public GameEntity {
public:
    //constructor
    Ship(int x, int y);

    //moves ship in direction
    void move(int dx, int dy);

    //blank apply function
    void apply(GameEntity& entity);
};






#endif