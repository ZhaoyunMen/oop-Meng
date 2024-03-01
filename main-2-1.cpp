#include <iostream>
extern int min_element(int array[], int n);
int main() {
    int array1[] = {1, 2, 3, 4, 5};
    
    std::cout << "minimum element is: " << min_element(array1, 5) << std::endl;
    
    return 0;
}