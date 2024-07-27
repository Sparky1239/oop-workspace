#include <iostream>


extern int count_evens(int);

int main() {
    std::cout << "The total even numbers are: " << count_evens(21) << std::endl;
    return 0;
}