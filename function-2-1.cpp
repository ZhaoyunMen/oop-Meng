#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

void print_binary_str(std::string decimal_number) {

    int number = std::stoi(decimal_number);
    std::string binary = "";

    if (number == 0) {

        binary = "0";
    } else {
        while (number > 0) {

            binary += std::to_string(number % 2);
            number /= 2;
        }
    }

    std::reverse(binary.begin(), binary.end());
    std::cout << binary << std::endl;
}