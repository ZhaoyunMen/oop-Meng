#include <iostream>
extern int min_element(int array[], int n);
int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {3, 4, 8, 9, 10};
    std::cout << "Minimum element is: " << min_element(array1, 5) << std::endl;
    std::cout << "Minimum element is: " << min_element(array2, 5) << std::endl;
    return 0;
}