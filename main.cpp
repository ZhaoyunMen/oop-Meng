#include "workshop.h"
#include <iostream>

int main() {
    
    double value = 10.5;
    std::cout << "Original value: " << value << std::endl;
    changeValue(&value);
    std::cout << "Changed value: " << value << std::endl;

    
    double arr[] = {1.2,3.4,2.2,5.6,0.8};
    
    std::cout << "Array elements: ";
    printArray(arr, 5);
    std::cout << std::endl;

  
    double max = arrayMax(arr, 5);
    std::cout << "Max value in the array: " << max << std::endl;

    
    int arraySize = 5;
    double initValue = 3.14;
    double *dynamicArr = dynamicArray(arraySize, initValue);
    std::cout << "Dynamic array elements initialized with " << initValue << ": ";
    printArray(dynamicArr, arraySize);
    std::cout << std::endl;

    
    delete[] dynamicArr;

    return 0;
}