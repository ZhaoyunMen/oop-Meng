#include <iostream>
extern bool is_descending(int[], int )

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    

    int array2[] = {5, 4, 3, 2, 1};
    

    
    std::cout << "arr1 is descending? " << std::boolalpha << is_descending(array1, 5) << std::endl;
    std::cout << "arr2 is descending? " << std::boolalpha << is_descending(array2, 5) << std::endl;

    return 0;
}