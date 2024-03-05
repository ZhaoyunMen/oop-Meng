#include <iostream>
int transform(int number){

    Array[] = [];
    if number < 1{
        return 0
    }
    
    
     
    while number >= 1 {
        if number >1{
            if number % 2 != 0
                Array[].insert(0,1)
            if number %2 == 0
                Array[].insert(0,0)
        }
        if number == 1{
            Array[].insert(0,0)
            Array[].insert(0,1)
            number = number - 1
        }
    }
    num = int(' '.join(map(str,Array[])))
    return num
    


int main(){
    Number = transform(9)
    std::cout << "The answer: " << Number << std::endl;
    return 0;
}
}
