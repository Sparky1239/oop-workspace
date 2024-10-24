#include "Explosion.h"
#include <iostream>

//constructor
Explosion::Explosion(int x, int y) : GameEntity(x, y, GameEntityType::ExplosionType) {}

//implement the apply function for explosion
void Explosion::apply(GameEntity& entity) {
    entity.setPos(std::make_tuple(-1, -1));      //removes entity from the grid
    entity.setType(GameEntityType::NoneType);    //set type to nonetype

}