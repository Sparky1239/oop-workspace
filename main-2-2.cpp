#include <iostream>
#include "Tv.h"

int main() {
    // Create a TV object using the default constructor
    TV defaultTV;

    // Display default TV power rating, screen size, and power consumption
    std::cout << "Default TV Power Rating: " << defaultTV.getPowerRating() << std::endl;
    std::cout << "Default TV Screen Size: " << defaultTV.getScreenSize() << " inches" << std::endl;
    std::cout << "Default TV Power Consumption: " << defaultTV.getPowerConsumption() << std::endl;

    // Create a TV object with specific power rating and screen size
    TV myTV(150, 42.0);

    // Display TV power rating, screen size, and power consumption
    std::cout << "My TV Power Rating: " << myTV.getPowerRating() << std::endl;
    std::cout << "My TV Screen Size: " << myTV.getScreenSize() << " inches" << std::endl;
    std::cout << "My TV Power Consumption: " << myTV.getPowerConsumption() << std::endl;

    return 0;
}