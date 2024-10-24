#include "Mine.h"

//constructor
Mine::Mine(int x, int y)
    :GameEntity(x, y, GameEntityType::MineType) {}

//explode which produces and explosion
Explosion Mine::explode() {
    type = GameEntityType::NoneType; //change mine to nonetype
    return Explosion(std::get<0>(position), std::get<1>(position));
}

//blank apply function
void Mine::apply(GameEntity& entity){
    
}
