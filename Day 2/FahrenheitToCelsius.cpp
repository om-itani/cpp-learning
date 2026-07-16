#include <iostream>

int main() {
    double fahrenheit = 95.0;
    double celsius = ((fahrenheit - 32.0) * 5.0) / 9.0;

    std::cout << "Celsius: " << celsius << std::endl;
    return 0;
}