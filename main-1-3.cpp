#include <iostream>


extern int num_count(int [], int, int);

int main() {
    int array[5] = {4,5,6,7,7};
    std::cout << "The total is: " << num_count(array, 5, 7) << std::endl;
    return 0;
}
