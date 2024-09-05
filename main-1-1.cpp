#include "Appliance.h"
#include <iostream>
using namespace std;
int main(){

    Appliance fridge = Appliance(5);
    cout << "the power rating is "<< fridge.getPowerRating() << "\nthe power consumption is "<< fridge.getPowerConsumption() << "\n";
    
    fridge.setPowerRating(10);
    cout << "the power rating is "<< fridge.getPowerRating() << "\nthe power consumption is "<< fridge.getPowerConsumption() << "\n";
    
}