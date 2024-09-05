#include "Car.h"
#include <iostream>

    //default constructor
    Car::Car() : price(0), emissions(0) {}
    //constructor that takes price
    Car::Car(int price) : price(price), emissions(0) {}

    //returns price
    int Car::getPrice() {
        return price;
    }
    //set price
    void Car::setPrice(int newPrice) {
        this->price = newPrice;
    }

    //returns emmisions
    int Car::getEmissions(){
        return emissions;
    }
    //sets emmisions
    void Car::setEmissions(int newEmissions){
        this->emissions = emissions;
    }

    //drives a distance adds emmisions to 20* kms
    void Car::drive(int kms){
        this->emissions += 20 * kms;
    }