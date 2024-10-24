#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>
#include "GameEntityType.h"

//Base class GameEntity
class GameEntity {
    protected:
        std::tuple<int, int> position;  //position of entity
        GameEntityType type;            //entity type

    public:
        //constructor
        GameEntity(int x, int y, GameEntityType type);

        //get position of entity
        std::tuple<int, int> getPos() const;

        //get the type of entity
        GameEntityType getType() const;

        //set position
        void setPos(std::tuple<int, int> newPos);

        //set entity type
        void setType(GameEntityType newType);

        //virtual function that applies the effect of an entity
        virtual void apply(GameEntity& entity) = 0;



};

#endif