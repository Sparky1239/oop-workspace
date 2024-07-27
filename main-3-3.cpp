#include <iostream>
#include <bits/stdc++.h>

extern double weighted_average(int [], int);

int main() {
    int array[5] = {4,5,6,7,4};
    std::cout << "The weight average is: " << weighted_average(array, 5) << std::endl;
    return 0;
}