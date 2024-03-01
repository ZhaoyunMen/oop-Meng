#include <iostream>
extern double weighted_average(int[], int);
int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    
    std::cout<< "The average of weight is:"<<double weighted_average(array,6)<<std::endl;
    return 0;
    }

