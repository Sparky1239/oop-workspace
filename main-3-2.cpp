#include <iostream>
#include <bits/stdc++.h>

extern int median_array(int [], int);

int main() {
    int array[5] = {4,5,6,7,4};
    std::cout << "The median is: " << median_array(array, 5) << std::endl;
    return 0;
}