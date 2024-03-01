#include <iostream>
extern bool is_descending(int array[], int n);
int main() {
    int array1[] = {5, 4, 3, 2, 1};
    int array2[] = {1, 2, 3, 4, 5};
    std::cout << "answer: " << is_descending(array1, 5) << std::endl;
    std::cout << "answer: " << is_descending(array2, 5) << std::endl;
    return 0;
}