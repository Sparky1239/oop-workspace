#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newList;

    newList.numPeople = pl.numPeople;
    newList.people = pl.people;

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