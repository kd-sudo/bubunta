#include <iostream>
#include <iomanip>

int main() {
    int option;
    double temperature;

    std::cout << "Enter option (1 for Celsius to Fahrenheit, 2 for Fahrenheit to Celsius): ";
    std::cin >> option;

    std::cout << "Enter temperature: ";
    std::cin >> temperature;

    if (temperature < -273.15) {
        std::cout << "Занадто холодно для підрахунку!" << std::endl;
    } else {
        if (option == 1) {
            double fahrenheit = (temperature * 9/5) + 32;
            std::cout << std::fixed << std::setprecision(2) << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
        } else if (option == 2) {
            double celsius = (temperature - 32) * 5/9;
            std::cout << std::fixed << std::setprecision(2) << "Temperature in Celsius: " << celsius << std::endl;
        } else {
            std::cout << "Invalid option!" << std::endl;
        }
    }

    return 0;
}

