#include <iostream>
using namespace std;

extern void print_binary_str(std::string decimal_number);

int main() {
    string decimal_number = "162" ;
    print_binary_str(decimal_number) ;           
}