#include <iostream>
using namespace std;



int *readNumbers(){
    int* numbers = new int[10];
    for (int i=0; i<10; i++){
        cin >> numbers[i];
    }
    return numbers;
}


bool equalsArray(int *numbers1,int *numbers2,int length){
    bool same = 1;
    for (int i=0; i<length; i++){
        if (numbers1[i] != numbers2[i])
        same= 0;
    }
    return same;
}