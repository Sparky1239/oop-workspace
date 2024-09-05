#include "Car.h"
#include <iostream>

using namespace std;

int main(){
    Car lola = Car(5700);
    lola.drive(1000);
    cout << "lola costs $" << lola.get_Price() << "\nit has produced " << lola.get_Emissions() << "kg of CO2 emissions \n";

}