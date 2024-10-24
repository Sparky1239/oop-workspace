#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <tuple>
#include "GridItem.hpp"

class Robot : public GridItem {

private:
    int health;

public:
    //Constructor
    Robot(int gridWidth, int gridHeight) 
    : GridItem(0, 0, gridWidth, gridHeight), health(3) {}
    //return robot health
    int getHealth(){
        return health;
    }

    void takeHit(){
        health --;
        if (health<0){
            health = 0; 
        }
    }

    bool move(int xOffset, int yOffset){
    
        if(xOffset !=0 || yOffset !=0){
            return false;
        }
        int newPosX = position.first + xOffset;
        int newPosY = position.second + yOffset;
        position = std::pair<int, int>(newPosX, newPosY);
        return true;
    }
};


#endif