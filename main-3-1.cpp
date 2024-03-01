#include <iostream>
extern bool is_fanarray(int[], int )

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    

    int array2[] = {5, 4, 3, 2, 1};
    

    
    std::cout << "arr1 is fanarray? " <<  is_fanarray(array1, 5) << std::endl;
    std::cout << "arr2 is fanarray? " <<  is_fanarray(array2, 5) << std::endl;
    
    return 0;
}