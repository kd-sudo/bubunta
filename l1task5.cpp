#include <iostream>
#include <iomanip>

int main() {
    double R;
    const double pi = 3.14;
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> R;
    
    double area = pi * R * R;
    double circumference = 2 * pi * R;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;
    
    return 0;
}

