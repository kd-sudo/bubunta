#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    int arr[100][100];
    int num = 0;

    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            arr[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            arr[i][right] = num++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                arr[bottom][i] = num++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[i][left] = num++;
            }
            left++;
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

