#include "vehicle.h"
#include "motorbike.h"
#include <string>
#include <ctime>

int Motorbike::getParkingDuration (){
    return 0.85 * getNSParkingDuration();
}