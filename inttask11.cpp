#include <iostream>

int main() {
    int n, x[100], y[100];
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> x[i] >> y[i];
    std::cout << x[n / 2] << " " << y[n / 2];
    return 0;
}

