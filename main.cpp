#include "workshop.h"
#include <iostream>
using namespace std;

extern void changeValue(double*);


int main(){
    double a = 5.5;
    double* ptra = &a;


    cout << a << "\n" ;


    changeValue(ptra);

    cout << a << "\n" ;
    
    return 0;
}
