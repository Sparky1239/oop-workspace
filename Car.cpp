#include "Car.h"
#include <iostream>

    //default constructor
    Car::Car() : price(0), emissions(0) {}
    //constructor that takes price
    Car::Car(int price) : price(price), emissions(0) {}

    //returns price
    int Car::get_price() {
        return price;
    }
    //set price
    void Car::set_price(int newPrice) {
        this->price = newPrice;
    }

    //returns emmisions
    int Car::get_emissions(){
        return emissions;
    }
    //sets emmisions
    void Car::set_emissions(int newEmissions){
        this->emissions = newEmissions;
    }

    //drives a distance adds emmisions to 20* kms
    void Car::drive(int kms){
        this->emissions += 20 * kms;
    }