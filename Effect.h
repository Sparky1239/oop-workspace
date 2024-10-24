#ifndef EFFECT_H
#define EFFECT_H

#include "GameEntity.h"

class Effect {
public:
    //pure virtual function to apply effect to a GameEntity
    virtual void apply(GameEntity& entity) = 0;


};



#endif 