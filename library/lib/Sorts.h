#ifndef SORTS_H
#define SORTS_H

#include <vector>
#include <algorithm>

class Sorts
{
public:
    typedef void (SortFunction) (std::vector<int>& values);
//-------------------------- Bubblesort -----------------------------------------------
    static void BubbleSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------

//----------------------- CombSort ----------------------------------------------------
    static void CombSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------

//-------------------- HeapSort -------------------------------------------------------
    static void HeapSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------

//------------------------ InsertionSort ----------------------------------------------
    static void InsertionSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------

//------------------------- MergeSort -------------------------------------------------
    static void MergeSortImpl(std::vector<int> &values, std::vector<int> &buffer, int l, int r);

    static void MergeSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------

//---------------------------- QuickSort ----------------------------------------------
    static int Partition(std::vector<int> &values, int l, int r);

    static void QuickSortImpl(std::vector<int> &values, int l, int r);

    static void QuickSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------

//------------------ SelectionSort ----------------------------------------------------
    static void SelectionSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------

//---------------------- ShakerSort ---------------------------------------------------
    static void ShakerSort(std::vector<int> &values);
//-------------------------------------------------------------------------------------
}; // Sorts

#endif // SORTS_H
