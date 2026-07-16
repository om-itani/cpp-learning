#include <iostream>

int main() {
    double celsius = 25.0; // Allocates 8 bytes on the Stack
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0; // Allocates another 8 bytes 

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    return 0;
}