#include <iostream>
extern int array_sum(int[], int);

int main() {
    int arr[] = {4,5,6,7,8};
    std::cout << "The number is: " << array_sum(arr, 5) << std::endl;
    return 0;
}