#include <iostream>
#include <string>

int main() {
    std::string text;
    int n;
    std::getline(std::cin, text);
    std::cin >> n;
    int spaces = n - text.length();
    if (spaces > 0) text.insert(text.find(' '), spaces, ' ');
    std::cout << text;
    return 0;
}

