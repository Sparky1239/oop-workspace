#include <iostream>
#include <bits/stdc++.h>

extern double sum_even(double [], int);

int main() {
    double array[5] = {4,5,6,7,4};
    std::cout << "The even total is " << sum_even(array, 5) << std::endl;
    return 0;
}