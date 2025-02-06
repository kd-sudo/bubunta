#include <iostream>
#include <string>

std::string numToWords(int n) {
    std::string units[] = {"", "один", "два", "три", "чотири", "п'ять", "шість", "сім", "вісім", "дев'ять"};
    std::string teens[] = {"десять", "одинадцять", "дванадцять", "тринадцять", "чотирнадцять", "п’ятнадцять"};
    std::string tens[] = {"", "", "двадцять", "тридцять", "сорок", "п’ятдесят", "шістдесят"};
    if (n < 10) return units[n];
    if (n < 16) return teens[n - 10];
    return tens[n / 10] + (n % 10 ? " " + units[n % 10] : "");
}

int main() {
    int n;
    std::cin >> n;
    std::cout << numToWords(n);
    return 0;
}

