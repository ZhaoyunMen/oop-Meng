#include <iostream>
#include <algorithm> 
#include <cmath>
extern int binary_to_int(int binary_digits[], int number_of_digits);
int main(){
    
    
    int binary_array[] = {1, 1, 1, 0}; 
     
    int decimal_value = binary_to_int(binary_array, 4);
    std::cout << "Decimal value: " << decimal_value << std::endl;
    return 0;
}
