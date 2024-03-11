
#include <iostream>


void changeValue(double* ptr) {
    *ptr = 42.0;
}


void printArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}


double arrayMax(double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


double* dynamicArray(int size, double value) {
    double* arr = new double[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = value;
    }
    return arr;
}