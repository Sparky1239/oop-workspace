#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    int n = 4;
    PersonList originalList = createPersonList(n);
    PersonList copiedList = shallowCopyPersonList(originalList);

    originalList.people[0].name = "Changed Name";
    originalList.people[0].age = 99;

    for (int i = 0; i<n; i++){
        cout << "original" << i << " " << originalList.people[i].name << " " << originalList.people[i].age << "\n"; 
    }

    for (int i = 0; i<n; i++){
        cout << "copy" << i << " " << copiedList.people[i].name << " " << copiedList.people[i].age << "\n"; 
    }
    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}