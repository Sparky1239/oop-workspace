#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main() {
    int array[4][4] = {
    {1,2,3,4},
    {5,1,6,7},
    {8,9,1,10},
    {11,12,13,14}
    };
    count_digits(array);             
}