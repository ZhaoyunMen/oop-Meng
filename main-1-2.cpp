#include <iostream>
#include "Person.h"
extern PersonList createPersonList(int n);
extern Person* createPersonArray(int n);
int main() {
    int n = 3; 
    PersonList personList = createPersonList(n);
    
    
    std::cout << "Number of People: " << personList.numPeople << std::endl;
    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person : " << personList.people[i].name << ", " << personList.people[i].age << std::endl;
    }
    
    
    delete[] personList.people;
    
    return 0;
}