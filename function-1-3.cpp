#include <iostream>
using namespace std;
double* duplicateArray(double* array, int size){
    double copy[size];
    for (int i=0; i<size; i++){
        copy[i] = array[i];
    }

    
    return &copy[size];
}