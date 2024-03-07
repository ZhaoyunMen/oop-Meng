#include <iostream>
#include <cmath>
#include <algorithm> 
int binary_to_int(int binary_digits[], int number_of_digits) {
    

    int decimal = 0;
    int power = 0;
    for (int i = number_of_digits - 1; i >= 0; --i) {
        if (binary_digits[i] == '1') {
            decimal += pow(2, power);
        }
        ++power;
    }
    return decimal;
}