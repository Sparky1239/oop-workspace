#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <string>

class Vehicle{
protected:

    std::time_t timeOfEntry;
    int ID;

public:

    //Constructor
    Vehicle(int ID);

    //Get ID
    int getID();







};

#endif