#include <iostream>
#include <iomanip>

int main() {
    double score;
    
    std::cout << "Enter the score (0.0 - 9.0): ";
    std::cin >> score;

    if (score >= 0.0 && score <= 4.4) {
        std::cout << "Grade: 2.0 (Unsatisfactory)" << std::endl;
    } else if (score >= 4.5 && score <= 5.2) {
        std::cout << "Grade: 3.0 (Satisfactory)" << std::endl;
    } else if (score >= 5.3 && score <= 6.2) {
        std::cout << "Grade: 3.5 (Above Satisfactory)" << std::endl;
    } else if (score >= 6.3 && score <= 7.2) {
        std::cout << "Grade: 4.0 (Good)" << std::endl;
    } else if (score >= 7.3 && score <= 8.2) {
        std::cout << "Grade: 4.5 (Above Good)" << std::endl;
    } else if (score >= 8.3 && score <= 9.0) {
        std::cout << "Grade: 5.0 (Excellent)" << std::endl;
    } else {
        std::cout << "Incorrect number of points!" << std::endl;
    }

    return 0;
}

