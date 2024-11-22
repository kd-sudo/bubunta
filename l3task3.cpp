#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    int num = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << num;
            if (j < n - 1) {
                std::cout << " ";
            }
            num++;
        }
        std::cout << std::endl;
    }

    return 0;
}

