#include "Tesla.h"
#include <iostream>

using namespace std;

int main(){
    Tesla jenny = Tesla('E', 6000);
    jenny.drive(50);
    cout << "jenny costs $" << jenny.get_price() << "\nit has produced " << jenny.get_emissions() << "kg of CO2 emissions \n";

}