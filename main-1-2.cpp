#include <iostream>
extern void modifyArray(double* array, int size, double value);
int main(){
    int size = 10;
    double* array = new double[size];
    for (int i = 0; i<size; i++){
        array[i] = i;
        
    }
    modifyArray(array,size,value);
    return 0;
}