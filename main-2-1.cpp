#include <iostream>
#include "Fridge.h"

int main() {
    // Create a Fridge object using the default constructor
    Fridge defaultFridge;

    // Display default fridge power rating, volume, and power consumption
    std::cout << "Default Fridge Power Rating: " << defaultFridge.getPowerRating() << std::endl;
    std::cout << "Default Fridge Volume: " << defaultFridge.getVolume() << " liters" << std::endl;
    std::cout << "Default Fridge Power Consumption: " << defaultFridge.getPowerConsumption() << std::endl;

    // Create a Fridge object with specific power rating and volume
    Fridge myFridge(500, 300.0);

    // Display fridge power rating, volume, and power consumption
    std::cout << "My Fridge Power Rating: " << myFridge.getPowerRating() << std::endl;
    std::cout << "My Fridge Volume: " << myFridge.getVolume() << " liters" << std::endl;
    std::cout << "My Fridge Power Consumption: " << myFridge.getPowerConsumption() << std::endl;

    return 0;
}