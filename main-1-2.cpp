#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main(){
    int n = 3;
    PersonList list = createPersonList(n);

    for (int i = 0; i<n; i++){
        cout << i << " " << list.people[i].name << " " << list.people[i].age << "\n"; 
    }
    delete[] list.people;

    return 0;
}