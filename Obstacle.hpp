#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle : public Interactable {
private:
    InteractableType type;
public:
    //constructor
    Obstacle(int x, int y, int width, int height)
        :Interactable(x,y,width,height), type(InteractableType::OBSTACLE) {}
    //Interact
    bool interact(Robot* player) override{
        if(Helper::euclideanDistance(position, player->getCoordinates()) == 0){
            player->takeHit();
            if(player->getHealth() == 0){
                return true;
            }
        }
        return false;
    }



};

#endif