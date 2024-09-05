    #include "House.h"
    #include <iostream>
    
    //default constructor
    House::House(): appliances(nullptr), numAppliances(0), currentAppliances(0) {}
    //constructor that takes max appliances
    House::House(int numAppliances) : numAppliances(numAppliances), currentAppliances(0) {
        appliances = new Appliance*[numAppliances];

    }

    //add appliance returns false if no room
    bool House::addAppliance (Appliance* appliance){
        if (numAppliances == currentAppliances){
            return false;
        }
        appliances[currentAppliances] = appliance;
        currentAppliances++;
        return true;

    }

    //returns the total power consumption of all appliances in the House
    double House::getTotalPowerConsumption(){
        double totalConsumption = 0.0;
        for (int i = 0; i < currentAppliances ; i++){
            totalConsumption += appliances[i]->getPowerConsumption();
        }
        return totalConsumption;
    }

    //deconstructor
    House::~House(){
        for (int i = 0; i < currentAppliances; ++i) {
            delete appliances[i];  // Deallocate memory for each Appliance object
        }
        delete[] appliances;  // Deallocate the array of pointers  
    }