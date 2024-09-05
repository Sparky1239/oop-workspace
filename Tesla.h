#ifndef TESLA_H
#define TESLA_H

#include "Car.h"
class Tesla : public Car
{
private:
    float batteryPercentage;
    char model;
public:
    //default constructor
    Tesla();
    //constructor that takes model and price
    Tesla(char model, int price);

    //return charge of battery
    float get_batteryPercentage();
    //set charge of battery
    void set_batteryPercentage(float newBatteryPercentage);

    //return model
    char get_model();
    //set model
    void set_model(char model);


    //charges battery
    void chargeBattery(int mins);

    //drive
    void drive(int kms) override;

};





#endif