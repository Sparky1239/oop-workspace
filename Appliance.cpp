
    #include "Appliance.h"

    //default constructor
    Appliance::Appliance() : powerRating(0), isOn(false) {}
    //constructor that takes power rating
    Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

    //returns power rating
    int Appliance::getPowerRating() {
        return powerRating;
    }
    //sets power rating
    void Appliance::setPowerRating(int rating){
        powerRating = rating;
    }
    //returns state
    bool Appliance::getIsOn(){
        return isOn;
    }
    
    //turn on appliance
    void Appliance::turnOn(){
        isOn = true;
    }
    //turn off applaince
    void Appliance::turnOff(){
        isOn = false;
    }

    //return power consumption
    double Appliance::getPowerConsumption(){
        return 0.0;
    }
