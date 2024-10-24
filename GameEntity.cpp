

#include "GameEntity.h"

        //constructor
        GameEntity::GameEntity(int x, int y, GameEntityType type)
            : position(x,y), type(type) {};

        //get position of entity
        std::tuple<int, int> GameEntity::getPos() const{
            return position;
        }

        //get the type of entity
        GameEntityType GameEntity::getType() const{
            return type;
        }

        //set position of entity
        void GameEntity::setPos(std::tuple<int, int> newPos){
            position = newPos;
        }

        //set entity type
        void GameEntity::setType(GameEntityType newType) {
            type = newType;
        }




