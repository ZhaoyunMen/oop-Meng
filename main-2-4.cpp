#include <iostream>
extern bool is_ascending(int[], int )

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    

    int arr2[] = {5, 4, 3, 2, 1};
    

    
    std::cout << "arr1 is ascending? " << std::boolalpha << is_ascending(arr1, 5) << std::endl;
    std::cout << "arr2 is ascending? " << std::boolalpha << is_ascending(arr2, 5) << std::endl;

    return 0;
}