#ifndef FRIDGE_H
#define FRIDGE_H
#include <string>
#include "Appliance.h"

class Fridge : public Appliance
{
private:

    double volume;

public:
    //default constructor
    Fridge();
    //Constructor that takes volume and power rating
    Fridge(double volume, int powerRating);

    //returns volume
    double getVolume();
    //set volume
    void setVolume(double vol);

    double getPowerConsumption() override;


};



#endif