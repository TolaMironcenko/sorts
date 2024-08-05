#include <iostream>
#include <random>
#include "ShackerSort.h"

void print_values(std::vector<int>& values)
{
    std::cout << "[ ";
    for (auto i : values)
    {
        std::cout << i << " ";
    }
    std::cout << "]\n";
}

int main()
{
    std::vector<int> values;
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 100);

    for (size_t i = 0; i < 10; i++)
    {
        values.push_back(dist6(rng));
    }

    print_values(values);

    ShakerSort(values);

    print_values(values);

    return 0;
}
