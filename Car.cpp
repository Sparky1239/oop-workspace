#include "Vehicle.h"
#include "Car.h"
#include <string>
#include <ctime>

int Car::getParkingDuration (){
    return 0.9 * getNSParkingDuration();
}