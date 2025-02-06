#include <iostream>

void primeFactorization(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            std::cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) std::cout << n;
}

int main() {
    int n;
    std::cin >> n;
    primeFactorization(n);
    return 0;
}

