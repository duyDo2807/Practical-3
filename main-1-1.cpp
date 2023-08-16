#include <iostream>

#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
  int n = 3;
  Person* persons = createPersonArray(n);
  for (int i = 0; i < n; i++) {
    std::cout << persons[i].name << " " << persons[i].age << std::endl;
  }
  delete[] persons;
  return 0;
}