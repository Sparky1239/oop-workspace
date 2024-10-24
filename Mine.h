#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    //constructor
    Mine(int x, int y);

    //explode which produces and explosion
    Explosion explode();

    //blank apply function
    void apply(GameEntity& entity);


};


#endif