#include <iostream>
#include <iomanip>

int main() {
    double num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    std::cout << std::fixed << std::setprecision(12);
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Difference: " << num1 - num2 << std::endl;
    std::cout << "Product: " << num1 * num2 << std::endl;
    
    if (num2 != 0) {
        std::cout << "Quotient: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Quotient: Undefined (division by zero)" << std::endl;
    }

    return 0;
}

