
#include "Appliance.h"
#include "Fridge.h"

    //default constructor
    Fridge::Fridge() : Appliance(), volume(0.0) {}
    //Constructor that takes volume and power rating
    Fridge::Fridge(double volume, int powerRating) : Appliance(powerRating), volume(volume) {}

    //returns volume
    double Fridge::getVolume(){
        return volume; 
    }
    //set volume
    void Fridge::setVolume(double vol){
        this->volume = vol;
    }

    double Fridge::getPowerConsumption(){
        return powerRating * 24 * volume / 100;
    }
