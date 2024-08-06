
#include <iostream>
using namespace std;

void pointer_char_double(){
    double a = 5.5;
    char character = 'b';
    double* ptrdouble = &a;
    char* ptrchar = &character;
    cout << ptrdouble << "\n" << ptrchar << "\n";   
}