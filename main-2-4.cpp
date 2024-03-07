#include <iostream>


extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    
    int test_array[] = {5, 3, 9, 1, 7};

    
    

    
    std::cout << "Minimum value in the array: " << array_min(test_array, 5) << std::endl;

    
    std::cout << "Maximum value in the array: " << array_max(test_array, 5) << std::endl;

    
    std::cout << "Sum of minimum and maximum values in the array: " << sum_min_max(test_array, 5) << std::endl;

    return 0;
}