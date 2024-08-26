#include "Vehicle.h"
#include "Bus.h"
#include <string>
#include <ctime>

int Bus::getParkingDuration (){
    return 0.75 * getNSParkingDuration();
}