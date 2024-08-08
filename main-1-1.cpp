#include <iostream>

extern double arrayMin(double*, int);

int main(){
    double array[3] = {1.1, 3.3, 0.2};
    arrayMin(array, 3);

}