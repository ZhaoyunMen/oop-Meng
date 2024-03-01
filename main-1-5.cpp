#include <iostream>
extern int count_evens(int number);
int main(){
    int number = 7;
    std ::cout << "the numberof even numbers is:" <<number<<":"<< count_evens(number)<< std :: endl;
    return 0;
}
#include <iostream>
int count_evens(int number);

