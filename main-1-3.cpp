
#include <iostream>
int num_count(int array[], int n, int number);
int main() {
    int array[] = {1, 3, 3, 4, 4, 5, 4, 6, 7, 8, 4};
    int desiredNumber = 3;
    int result = num_count(array,11 , desiredNumber);
    std::cout << "Number of occurrences of " << desiredNumber << ": " << result << std::endl;
    return 0;
}