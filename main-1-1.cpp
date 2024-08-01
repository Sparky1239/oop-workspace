#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = {
    {4,3,8,9},
    {5,8,6,7},
    {6,6,38,5},
    {5,65,32,85}
    };
    cout << "the total of the main diagonal is " << sum_diagonal(array) <<"\n" ;
    return 0;                
}