#include <iostream>


double sum_even(double array[], int n);

int main() {
    double array[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    

    
    std::cout << "Sum of elements in even positions: " << sum_even(array, 5) << std::endl;

    return 0;
}