#include <iostream>
#include <iomanip>

int main() {
    int num;
    
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "Even: ТАК" << std::endl;
    } else {
        std::cout << "Even: НІ" << std::endl;
    }

    if (num % 8 == 0) {
        std::cout << "Divisible by 8: ТАК" << std::endl;
    } else {
        std::cout << "Divisible by 8: НІ" << std::endl;
    }

    if (num % 16 == 0) {
        std::cout << "Divisible by 16: ТАК" << std::endl;
    } else {
        std::cout << "Divisible by 16: НІ" << std::endl;
    }

    std::cout << "Octal: " << std::oct << num << std::endl;
    std::cout << "Hexadecimal: " << std::hex << num << std::endl;

    return 0;
}

