#include <iostream>


extern int two_array_sum(int [], int[], int);

int main() {
    int array_1[5] = {4,5,6,7,8};
    int array_2[5] = {4,5,6,7,8};
    std::cout << "The total of the two is: " << two_array_sum(array_1, array_2, 5) << std::endl;
    return 0;
}
