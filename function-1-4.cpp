#include <iostream>
using namespace std;

void print_scaled(int array[3][3] , int multiplier) {
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++) {
            array[i][j]= array[i][j] * multiplier;
            cout << array[i][j]<< " ";
        }
        cout << "\n";
    }


}