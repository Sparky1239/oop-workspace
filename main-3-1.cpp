#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "Tv.h"

int main() {
    // Create a House object with space for 3 appliances
    House myHouse(3);

    // Create a Fridge object and add it to the House
    Appliance* fridge = new Fridge(300.0, 500);
    if (myHouse.addAppliance(fridge)) {
        std::cout << "Fridge added to the house.\n";
    } else {
        std::cout << "Failed to add Fridge to the house.\n";
    }

    // Create a TV object and add it to the House
    Appliance* tv = new TV(42.0, 150);
    if (myHouse.addAppliance(tv)) {
        std::cout << "TV added to the house.\n";
    } else {
        std::cout << "Failed to add TV to the house.\n";
    }

    // Create another TV object and add it to the House
    Appliance* tv2 = new TV(55.0, 200);
    if (myHouse.addAppliance(tv2)) {
        std::cout << "Second TV added to the house.\n";
    } else {
        std::cout << "Failed to add second TV to the house.\n";
    }

    // Calculate and display the total power consumption of the House
    std::cout << "Total power consumption in the house: " 
              << myHouse.getTotalPowerConsumption() << " units.\n"<< fridge->getPowerConsumption();

    return 0;
}