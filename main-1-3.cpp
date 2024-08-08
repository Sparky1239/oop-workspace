#include <iostream>
using namespace std;
extern double* duplicateArray(double*, int);

int main(){
    double array[3] = {1.1, 3.3, 0.2};
    double* ptr = duplicateArray(array, 3);
    for (int i=0; i<3; i++){
        cout << ptr[i] << "\n";
    }
}