#include <iostream>
#include <bits/stdc++.h>

extern double even_total(int [], int);

int main() {
    int array[5] = {4,5,6,7,4};
    std::cout << "The even total is " << even_total(array, 5) << std::endl;
    return 0;
}