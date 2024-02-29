#include <iostream>

void two_five_nine(int array[], int n) {
    
    int num_twos = 0;
    int num_fives = 0;
    int num_nines = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] == 2){
            ++num_twos;
        }else if (array[i]==5){
            ++numbers_fives;
        }else if (array[i]==9){
            ++num_nines;
        }
    }
    std::cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";" << std::endl;

    }