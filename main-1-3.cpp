#include <iostream>
extern int num_count(int array[], int n, int number);
int main() {
    int array[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int number = 3;
    std::cout << "Number of 3 are: " << num_count(array, 9, number) << std::endl;
    return 0;
}