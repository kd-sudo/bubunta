#include <iostream>

void magicVectors(int n, int sum = 0, int prod = 1, std::string s = "") {
    if (sum > prod) return;
    if (sum == prod && sum > 1) std::cout << s << std::endl;
    for (int i = 1; i <= n; i++) magicVectors(n, sum + i, prod * i, s + std::to_string(i) + " ");
}

int main() {
    int n;
    std::cin >> n;
    magicVectors(n);
    return 0;
}

