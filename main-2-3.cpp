#include <iostream>
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);
int main(){
    int main() {
    
    int arr1[] = {1, 2, 3, 2, 1}; 
    int arr2[] = {1, 2, 3, 4, 5}; 

    int sum1 = sum_if_palindrome(arr1, 5);
    int sum2 = sum_if_palindrome(arr2, 5);

    std::cout << "Sum of palindrome array: " << sum1 << std::endl;
    std::cout << "Sum of non-palindrome array: " << sum2 << std::endl;

    return 0;
}
}