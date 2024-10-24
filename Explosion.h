#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

//Explosion class inherits from gameentity and effect

class Explosion : public GameEntity, public Effect {
public:
    //constructor
    Explosion(int x, int y); 

    //implement the apply function for explosion
    void apply(GameEntity& entity) override;

};



#endif
