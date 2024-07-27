#include <iostream>


extern int sum_two_arrays(int [], int[], int);

int main() {
    int array_1[5] = {4,5,6,7,8};
    int array_2[5] = {4,5,6,7,8};
    std::cout << "The total of the two is: " << sum_two_arrays(array_1, array_2, 5) << std::endl;
    return 0;
}
