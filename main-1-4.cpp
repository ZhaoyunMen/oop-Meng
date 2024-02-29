#include <iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main(){
    int array[] = {1,2,3,4,5};
    int secondarray[] = {6,7,8,9,10};
    std ::"the sum of two arrays is:" << sum_two_arrays(array,secondarray,5) << std ::endl;
    return 0;
}