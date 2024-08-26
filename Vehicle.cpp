
#include "Vehicle.h"
#include <string>
#include <ctime>



    //Constructor
    Vehicle::Vehicle(int ID) : ID(ID), timeOfEntry(time(0)){} 

    //Get ID
    int Vehicle::getID(){
        return ID;
    }

    int Vehicle::getNSParkingDuration(){
        return difftime(time(0), timeOfEntry);
    }
