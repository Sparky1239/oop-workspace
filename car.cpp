#include "vehicle.h"
#include "car.h"
#include <string>
#include <ctime>

int Car::getParkingDuration (){
    return 0.9 * getNSParkingDuration();
}