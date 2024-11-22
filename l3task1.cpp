#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

