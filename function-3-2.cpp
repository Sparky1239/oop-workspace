#include <iostream>
using namespace std;



int *readNumbers(){
    int* numbers = new int[10];
    for (int i=0; i<10; i++){
        cin >> numbers[i];
    }
    return numbers;
}


int *reverseArray(int *numbers1 ,int length){
    int* reverse = new int[length];
    for (int i=0; i<length; i++){
        reverse[i] = numbers1[length-1-i];
    }
    return reverse;
}