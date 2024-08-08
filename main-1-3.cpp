#include <iostream>
using namespace std;
extern double* duplicateArray(double*, int);

int main(){
    double array[5] = {1.1, 3.3, 0.2, 6.3, 3.9};
    double* ptr = duplicateArray(array, 5);
    for (int i=0; i<5; i++){
        cout << ptr[i] << "\n";
    }
}