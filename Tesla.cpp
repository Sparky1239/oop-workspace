#include "Tesla.h"
#include <iostream>

    //default constructor
    Tesla::Tesla() : Car(), model(' '), batteryPercentage(100.0) {}
    //constructor that takes model and price
    Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(100.0) {}

    //return charge of battery
    float Tesla::get_batteryPercentage(){
        return batteryPercentage;
    }
    //set charge of battery
    void Tesla::set_batteryPercentage(float newBatteryPercentage){
        this->batteryPercentage = newBatteryPercentage;
    }

    //return model
    char Tesla::get_model(){
        return model;
    }
    //set model
    void Tesla::set_model(char model){
        this->model = model;
    }


    //charges battery
    void Tesla::chargeBattery(int mins){
        batteryPercentage += mins * 0.5;
        if (batteryPercentage > 100.0){
            batteryPercentage = 100.0;
        }
    }

    //drive
    void Tesla::drive(int kms) {
        if (kms < 0.2*batteryPercentage){
            this->batteryPercentage -= 0.2 * kms;
            this->emissions += 0.74 * kms;
        }
        else{
            this->emissions += batteryPercentage * 74 * 5;
            this->batteryPercentage = 0;
        }

    }