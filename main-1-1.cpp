#include "Car.h"
#include <iostream>

using namespace std;

int main(){
    Car lola = Car(5700);
    lola.drive(1000);
    cout << "lola costs $" << lola.get_price() << "\nit has produced " << lola.get_emissions() << "kg of CO2 emissions \n";

}