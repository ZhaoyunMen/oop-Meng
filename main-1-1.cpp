#include <iostream>
extern double arrayMin(double* array, int size);
int main(){
    double array[5] ={1,2,3,4,5};
    delete[] arrayMin(array,5);
    std::cout<<arrayMin(array,5)<<std::endl;
    
    return 0;
}