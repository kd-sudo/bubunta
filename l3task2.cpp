#include <iostream>

int main() {
    int m, n, k;
    std::cin >> m >> n >> k;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i < k || i >= m - k || j < k || j >= n - k) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

