#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "GridItem.hpp"
#include "Robot.hpp"

enum class InteractableType {Goal, Obstacle};

class Interactable : public GridItem{
public:    
    //constructor
    Interactable(int x, int y, int width, int height) 
        :GridItem(x, y, width, height) {
                //count interactables
        }
    //default constructor
    Interactable()
        :GridItem(0,0,0,0) {}

    //interact
    virtual bool interact(Robot* player) = 0;
    //interact type
    virtual InteractableType getType() = 0;
    //Deconstructor
    ~Interactable() {
        //remove interactable
    }




};

#endif

