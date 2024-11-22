#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    int arr[100][100];
    int num = 0;

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = num++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                arr[i][j] = num++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

