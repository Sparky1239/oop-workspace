#include <iostream>

extern double modifyArray(double*, int, double);

int main(){
    double array[3] = {1.1, 3.3, 0.2};
    modifyArray(array, 3, 1.4);

}