#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <string>

class Appliance
{
protected:
    int powerRating;
    bool isOn;


public:
    //default constructor
    Appliance();
    //constructor that takes power rating
    Appliance(int powerRating);

    //returns power rating
    int getPowerRating();
    //sets power rating
    void setPowerRating(int rating);
    //returns state
    bool getIsOn();
    
    //turn on appliance
    void turnOn();
    //turn off applaince
    void turnOff();

    //return power consumption
    virtual double getPowerConsumption();

};



#endif