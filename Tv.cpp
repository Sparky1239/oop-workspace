#include "Appliance.h"
#include "Tv.h"

    //default constructor
    TV::TV() : Appliance(), screenSize(0.0) {}
    //Constructor that takes volume and power rating
    TV::TV(double screenSize, int powerRating) : Appliance(powerRating), screenSize(screenSize) {}

    //returns volume
    double TV::getScreenSize(){
        return screenSize; 
    }
    //set volume
    void TV::setScreenSize(double screen){
        this->screenSize = screen;
    }

    double TV::getPowerConsumption(){
        return powerRating * screenSize / 10;
    }
