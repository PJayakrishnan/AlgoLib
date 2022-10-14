// AlgoLib_Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SearchingAlgos.h>
#include <SortingAlgos.h>

int main()
{

    int arr[] = { 1,2,33,54,98,34,56,23,0 };
    double dur = 0;
    AlgoLib::SortingAlgos::SelectionSort(arr, 9, dur);

    for (size_t i = 0; i < 9; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\nSorted in " << dur << " millisecond";
}

