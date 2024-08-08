#include <iostream>
#include <random>
#include <functional>
#include "single_include/Sorts.h"
#include <vector>

void print_values(std::vector<int>& values);

int main() 
{
    std::string all_sorts_names[8] = {
        "BubbleSort",
        "CombSort",
        "HeapSort",
        "InsertionSort",
        "MergeSort",
        "QuickSort",
        "SelectionSort",
        "ShakerSort",
    };

    Sorts::SortFunction *all_sorts[8] = {
        Sorts::BubbleSort, 
        Sorts::CombSort, 
        Sorts::HeapSort, 
        Sorts::InsertionSort, 
        Sorts::MergeSort, 
        Sorts::QuickSort, 
        Sorts::SelectionSort, 
        Sorts::ShakerSort
    };

    for (int i : {0, 1, 2, 3, 4, 5, 6, 7})
    {
        std::cout << all_sorts_names[i] << std::endl;
        std::vector<int> values;
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 100);

        for (size_t i = 0; i < 10; i++)
        {
            values.push_back(dist6(rng));
        }

        print_values(values);

        all_sorts[i](values);

        print_values(values);
    }

    return 0;
}

void print_values(std::vector<int>& values)
{
    std::cout << "[ ";
    for (auto i : values)
    {
        std::cout << i << " ";
    }
    std::cout << "]\n";
}