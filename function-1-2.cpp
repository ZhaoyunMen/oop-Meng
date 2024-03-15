#include <iostream>
void modifyArray(double* array, int size, double value){
    double* array = new double[size];
    for (int i = 0; i < size; i++){
        array[i] = i;
    }
    for (int i = 0; i < size;i++){
        array[i] += value;
        std::cout<<array[i]<<std::endl;
    }
    
}
