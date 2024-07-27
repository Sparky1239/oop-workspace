#include <iostream>


extern bool is_fanarray(int [], int);

int main() {
    int array[5] = {1,2,3,4,1};
    std::cout << is_fanarray(array, 5) << std::endl;
    return 0;
}