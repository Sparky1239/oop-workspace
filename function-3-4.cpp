#include <iostream>
#include <bits/stdc++.h>


void print_pass_fail(char grade) {
bool pass_fail;
    switch(grade){
            case 'A':
            pass_fail = 1;
            break;
            case 'B':
            pass_fail = 1;
            break;
            case 'C':
            pass_fail = 1;
            break;
            case 'D':
            pass_fail = 0;
            break;
            case 'E':
            pass_fail = 0;
            break;
        }
        if (pass_fail==1){
            std::cout << "Pass" << std::endl;
        }
        else{
            std::cout << "Fail" << std::endl;
        }
}