#ifndef TV_H
#define TV_H
#include <string>
#include "Appliance.h"

class TV : public Appliance
{
private:

    double screenSize;

public:
    //default constructor
    TV();
    //Constructor that takes volume and power rating
    TV(double screenSize, int powerRating);

    //returns volume
    double getScreenSize();
    //set volume
    void setScreenSize(double vol);

    double getPowerConsumption() override;


};



#endif