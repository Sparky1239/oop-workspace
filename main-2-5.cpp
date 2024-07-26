#include <iostream>


extern bool is_descending(int [], int);

int main() {
    int array[5] = {10,9,8,7,6};
    std::cout << is_descending(array, 5) << std::endl;
    return 0;
}