#include <iostream>
using namespace std;
extern double duplicateArray(double*, int);

int main(){
    double array[3] = {1.1, 3.3, 0.2};
    duplicateArray(array, 3);
}