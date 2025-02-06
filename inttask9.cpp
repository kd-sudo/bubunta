#include <iostream>
#include <bitset>
#include <sstream>

std::string encode(std::string text, char c) {
    std::bitset<8> bits(c);
    std::stringstream result;
    int idx = 0;
    for (char &word : text) {
        result << word << (bits[idx++] ? "  " : " ");
        if (idx == 8) break;
    }
    return result.str();
}

int main() {
    std::string text = "Секретне повідомлення";
    char c = 'A';
    std::cout << encode(text, c);
    return 0;
}

