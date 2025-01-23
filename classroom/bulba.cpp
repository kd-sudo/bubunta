#include <iostream>
#include <ctime>
#include <cstdlib>

int rand_range(int a, int b)
{
        return rand() % (b - a) + a;
}

int rand_range()
{
        return rand();
}

void bubble_sort(int* arr, int lenght)
{
        for(int j = 0; j < lenght; j++)
        {
                bool sorted = true;
                for(int i = 0; i < lenght - j - 1; i++)
                {
                        if(arr[i] > arr[i + 1])
                        {
                                int a = 0;
                                a = arr[i];
                                arr[i] = arr[i + 1];
                                arr[i + 1] = a;
                                sorted = false;
                        }
                }

                if(sorted)
                        break;
        }
}

int main()
{
        srand((int)time(0));

        int n = 0;
        std::cin >> n;

        int* arr = new int[n];

        for(int i = 0; i < n; i++)
                arr[i] = rand_range(0, 101);

        for(int i = 0; i < n; i++)
                std::cout << arr[i] << "\t";

        std::cout << std::endl;


        bubble_sort(arr, n);

        for(int i = 0; i < n; i++)
                std::cout << arr[i] << "\t";

        std::cout << std::endl;

        std::cout << rand() << std::endl;
        delete[] arr;
        return 0;
}
