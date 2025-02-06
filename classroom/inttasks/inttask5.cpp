#include <iostream>

bool isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    for (int i = 1; i < 100; i++) {
        if (isPalindrome(i) && isPalindrome(i * i)) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

