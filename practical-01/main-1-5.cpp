#include <iostream>


extern int array_sum(int);

int main() {
    std::cout << "The total even numbers are: " << array_sum(21) << std::endl;
    return 0;
}
