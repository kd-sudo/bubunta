#include <iostream>
#include <ctime>
#include <cstdlib>

int rand_range(int low, int high)
{
    return std::rand() % (high - low + 1) + low;
}

int main()
{
    std::srand(time(0)); // Fixed extra parenthesis and removed unnecessary cast

    int low = 0;
    int high = 50;
    std::cout << rand_range(low, high) << std::endl;

    return 0;
}
