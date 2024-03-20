#include <iostream>
#include "Person.h"
extern PersonList createPersonList(int n);
extern Person* createPersonArray(int n);
extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList shallowCopyPersonList(PersonList pl);
int main() {
    
    PersonList originalList;
    originalList.numPeople = 3;
    originalList.people = new Person[3];
    for (int i = 0; i < 3; ++i) {
        originalList.people[i].name = "Original";
        originalList.people[i].age = 30;
    }
    
    
    PersonList copiedList = shallowCopyPersonList(originalList);
    
    
    copiedList.people[0].name = "Modified";
    copiedList.people[0].age = 40;
    
    
    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i+1 << ": " << originalList.people[i].name << ", " << originalList.people[i].age << std::endl;
    }
    
    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i+1 << ": " << copiedList.people[i].name << ", " << copiedList.people[i].age << std::endl;
    }
    
   
    delete[] originalList.people;
    
    return 0;
}