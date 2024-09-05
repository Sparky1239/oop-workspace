#include "Ford.h"
#include <iostream>

using namespace std;

int main(){
    Ford jake = Ford(1, 6000);
    jake.drive(50);
    cout << "jenny costs $" << jake.get_price() << "\nit has produced " << jake.get_emissions() << "kg of CO2 emissions \n";

}