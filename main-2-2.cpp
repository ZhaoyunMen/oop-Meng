#include <iostream>
extern int max_element(int[], int) ;
int main(){
    int array1[] = {1,2,3,4,5}
    int array2[] = {5,6,7,8,9}
    std::cout <<"the Maxmum element is" << max_element(array1,5) << std ::endl;
    std::cout << "Maxmum element is: " << max_element(array2, 5) << std::endl;
    return 0;
}
