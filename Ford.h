#ifndef FORD_H
#define FORD_H

#include "Car.h"
class Ford : public Car
{
private:
    float litresOfFuel;
    int badgeNumber;
public:
    //default constructor
    Ford();
    //constructor that takes model and price
    Ford(int badgeNumber, int price);

    //return litres of fuel
    float get_litresOfFuel();
    //set litres of fuel
    void set_litresOfFuel(float newLitresOfFuel);

    //return model
    int get_badgeNumber();
    //set model
    void set_badgeNumber(int badgeNumber);


    //refuel
    void refuel(int litres);

    //drive tesla 
    void drive(int kms) override;

};





#endif