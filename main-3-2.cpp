#include <iostream>
using namespace std;

extern int *readNumbers() ;
extern int *reverseArray(int *numbers1,int length) ;

int main() {
    int* numbers1 = readNumbers();


    int* reverse1 = reverseArray(numbers1, 10);
    
    for (int i=0; i<10; i++){
        cout << i << " "<< reverse1[i] << "\n";
    }


    delete[] numbers1;
    delete[] reverse1;

    

    return 0;
}