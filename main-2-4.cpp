#include <iostream>


extern bool is_ascending(int [], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << is_ascending(array, 5) << std::endl;
    return 0;
}