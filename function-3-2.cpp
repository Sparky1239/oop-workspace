#include <bits/stdc++.h>
using namespace std;

int median_array(int array[], int n) {
    int smallest = array[0]; 
    int sorted [n];
    if (n<=1 || n % 2 == 0){
        return 0;
    }
    sort(array, array + n);
    
    
    return array[(n)/2]; 
}