#include <iostream>
#include <iomanip>

int main() {
    char ch;
    
    std::cout << "Enter a character: ";
    std::cin >> ch;
    
    int ascii_value = static_cast<int>(ch);
    
    std::cout << "Character: " << ch << std::endl;
    std::cout << "ASCII (Decimal): " << ascii_value << std::endl;
    std::cout << "ASCII (Hexadecimal): " << std::hex << ascii_value << std::endl;
    
    return 0;
}

