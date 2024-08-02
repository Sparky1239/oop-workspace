#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number){
    int n = stoi(decimal_number);
    int i = 0;
    int binaryNum[32];
    while (n > 0){
        binaryNum[i] = n % 2;
        n = n / 2;
        i++ ;
    }
    for (int j= i-1; j>=0; j--){
        cout << binaryNum[j];
    }
    cout << "\n";
}