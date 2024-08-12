#include <iostream>
using namespace std;



int *readNumbers(){
    int* numbers = new int[10];
    for (int i=0; i<10; i++){
        cin >> numbers[i];
    }
    return numbers;
}


void hexDigits(int *numbers,int length){
    char hexadecimal;
    
    if(length > 0){
        for (int i=0; i<length; i++){
            switch (numbers[i]){
                case 10:
                hexadecimal = 'A';
                break;
                case 11:
                hexadecimal = 'B';
                break;
                case 12:
                hexadecimal = 'C';
                break;
                case 13:
                hexadecimal = 'D';
                break;
                case 14:
                hexadecimal = 'E';
                break;
                case 15:
                hexadecimal = 'F';
                break;
                default:
                hexadecimal = numbers[i] + '0';
                break;
    }
            cout << i << " "<< numbers[i] <<" " << hexadecimal << "\n";
        }
    }
}