#include <iostream>
extern void modifyArray(double* array, int size, double value);
int main(){
    int size = 5;
    double array[5] = {1,2,3,4,5};
    for (int i = 0; i < size; i++){
        array[i] = i;
    }
    modifyArray(array,size,100);
    delete[] void modifyArray(array,size,100);
    return 0;
}