#include <iostream>

#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
  int n = 3;
  PersonList originList;
  originList.people = new Person[n];
  originList.numPeople = n;
  for (int i = 0; i < n; i++) {
    originList.people[i].name = "John Lee";
    originList.people[i].age = 6000;
  }
  PersonList copyList = shallowCopyPersonList(originList);
  for (int i = 0; i < n; i++) {
    std::cout << copyList.people[i].name << " " << copyList.people[i].age
              << std::endl;
  }
  delete[] originList.people;
  delete[] copyList.people;
  return 0;
}