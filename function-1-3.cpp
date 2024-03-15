#include <iostream>
double* duplicateArray(double* array, int size){
    double* newArray = new double[size];

    for(int i = 0; i < size; i++){
        newArray[i] = array[i];
        std::cout<<newArray[i]<<" ";
    }
    std ::cout<<std::endl;
}