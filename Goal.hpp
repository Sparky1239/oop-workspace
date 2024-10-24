#ifndef GOAL_H
#define GOAL_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal : public Interactable {
private:
    InteractableType type;    
public:
    //constructor
    Goal (int width, int height) :
    Interactable(width-1, height-1, width, height), type(InteractableType::GOAL) {}
    //interact
    bool interact(Robot* player) override{
        if (Helper::euclideanDistance(position, player->getCoordinates()) == 0){
            return true;
        }
        return false;
    }
    //get type
    InteractableType getType() {
        return type;
    }
    //set type
    void setType(InteractableType newType){
        type = newType;
    }


};


#endif