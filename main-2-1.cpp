#include "Car.h"
#include "Tesla.h"
#include <iostream>

using namespace std;

int main(){
    Car jenny = Tesla('E', 6000);
    jenny.drive(50);
    cout << "lola costs $" << jenny.get_price() << "\nit has produced " << jenny.get_emissions() << "kg of CO2 emissions \n";

}