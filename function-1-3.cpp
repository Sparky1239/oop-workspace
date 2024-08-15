#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newList;
    newList.numPeople = pl.numPeople;
    newList.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; i++) {
        newList.people[i].name = pl.people[i].name;
        newList.people[i].age = pl.people[i].age;
    }

    return newList;
}


PersonList createPersonList (int n){
    PersonList list;
    list.numPeople= n;
    list.people = new Person[n];




    for(int i = 0; i < n; i++){
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }
    return list;
}