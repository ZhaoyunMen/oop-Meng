#include <iostream>
double array_mean(int array[], int n);
int main() {
    int arr[] = {1, 2, 5, 4, 8};
    std::cout << "Mean of array elements: " << array_mean(arr, 5) << std::endl;
    return 0;
    
}