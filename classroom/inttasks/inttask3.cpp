#include <iostream>

void eratosthenesSieve(int n) {
    bool prime[1001] = {true};
    for (int i = 2; i <= n; i++) prime[i] = true;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i]) std::cout << i << " ";
    }
}

int main() {
    eratosthenesSieve(1000);
    return 0;
}

