#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"
#include "Tv.h"
#include "Fridge.h"

class House
{
private:
    Appliance** appliances;
    int numAppliances;
    int currentAppliances;

public:
    //default constructor
    House();
    //constructor that takes max appliances
    House(int numAppliances);

    //add appliance returns false if no room
    bool addAppliance (Appliance* appliance);

    //returns the total power consumption of all appliances in the House
    double getTotalPowerConsumption();

    //deconstructor
    ~House();
    



};






#endif 