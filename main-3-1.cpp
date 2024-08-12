#include <iostream>
using namespace std;

extern int *readNumbers(int) ;
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
    int* numbers1 = readNumbers(2);
    int* numbers2 = readNumbers(2);

    bool equal = equalsArray(numbers1, numbers2, 2);
    
    delete[] numbers1;
    delete[] numbers2;
    
    switch(equal){
        case 1:
        cout << "true" << "\n";
        break;
        case 0:
        cout << "false" << "\n";
        break;
    }

    return 0;
}