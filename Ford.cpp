#include "Ford.h"
#include <iostream>

    //default constructor
    Ford::Ford() : Car(), badgeNumber(0), litresOfFuel(60.0) {}
    //constructor that takes model and price
    Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(60.0) {}

    //return litres of fuel
    float Ford::get_litresOfFuel(){
        return litresOfFuel;
    }
    //set litres of fuel
    void Ford::set_litresOfFuel(float newLitresOfFuel){
        this->litresOfFuel = newLitresOfFuel;
    }

    //return model
    int Ford::get_badgeNumber(){
        return badgeNumber;
    }
    //set model
    void Ford::set_badgeNumber(int badgeNumber){
        this->badgeNumber = badgeNumber;
    }


    //refuel
    void Ford::refuel(int litres){
        litresOfFuel += litres;
        if (litresOfFuel > 60){
            litresOfFuel = 60;
        }
    }

    //drive tesla 
    void Ford::drive(int kms) {
            if (kms < 5 * litresOfFuel){
            this->litresOfFuel -= 0.2 * kms;
            this->emissions += 20 * kms;
        }
        else{
            this->emissions += litresOfFuel * 74 * 5;
            this->litresOfFuel = 0;
        }
    }
