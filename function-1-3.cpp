#include <iostream>

#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
  PersonList newList;
  newList.numPeople = pl.numPeople;
  newList.people = new Person[newList.numPeople];
  for (int i = 0; i < newList.numPeople; i++) {
    newList.people[i].name = pl.people[i].name;
    newList.people[i].age = pl.people[i].age;
  }
  return newList;
}