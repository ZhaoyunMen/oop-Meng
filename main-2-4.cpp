#include <iostream>
extern bool is_ascending(int[], int )

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    

    int array2[] = {5, 4, 3, 2, 1};
    

    
    std::cout << "arr1 is ascending? " << std::boolalpha << is_ascending(array1, 5) << std::endl;
    std::cout << "arr2 is ascending? " << std::boolalpha << is_ascending(array2, 5) << std::endl;

    return 0;
}