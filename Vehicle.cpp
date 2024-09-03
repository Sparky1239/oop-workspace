
#include "Vehicle.h"
#include <string>
#include <ctime>



    //Constructor
    Vehicle::Vehicle(int ID) : ID(ID), timeOfEntry(time(nullptr)){} 

    //Get ID
    int Vehicle::getID(){
        return ID;
    }

    int Vehicle::getNSParkingDuration(){
        return difftime(time(nullptr), timeOfEntry);
    }
