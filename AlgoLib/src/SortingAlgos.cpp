//***********************************************************
// Implementation file for SortingAlgos class
// Author	   : Jayakrishnan. P
// Last updated: 14/10/2022
//***********************************************************
#include "../include/SortingAlgos.h"

namespace AlgoLib
{
	SortingAlgos::SortingAlgos()
	{
	}

	SortingAlgos::~SortingAlgos()
	{
	}

	//*********************************************************************
	// Function   : SelectionSort
	// Parameters : (3) - array, length of array, duration to sort as reference.
	// Retrun type: void
	// Note       : Array should be of integers.
	//*********************************************************************
	void SortingAlgos::SelectionSort(int* array, int length, double& duration)
	{
		
		auto start = std::chrono::high_resolution_clock::now();
		SelectionSort_inside(array, length);
		auto end = std::chrono::high_resolution_clock::now();

		duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

	}

	//*********************************************************************
	// Function   : SelectionSort_inside
	// Parameters : (2) - array, length of array
	// Retrun type: void
	// Note       : Array should be of integers.
	//*********************************************************************
	void SortingAlgos::SelectionSort_inside(int* array, int length)
	{
		int lowest;
		int temp = 0;
		if (length >= 2)
		{
			for (int i = 0; i < (length - 1); i++)
			{
				lowest = i;
				for (int j = i + 1; j < length; j++)
				{
					if (array[j] < array[lowest])
					{
						lowest = j;
					}
				}
				temp = array[lowest];
				array[lowest] = array[i];
				array[i] = temp;
			}
		}
	}
}