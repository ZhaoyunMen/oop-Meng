#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    
    PersonList newList = pl;
    return newList;
}