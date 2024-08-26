#include "Vehicle.h"
#include "Motorbike.h"
#include <string>
#include <ctime>

int Motorbike::getParkingDuration (){
    return 0.85 * getNSParkingDuration();
}