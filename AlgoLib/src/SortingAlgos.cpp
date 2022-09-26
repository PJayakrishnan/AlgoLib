//***********************************************************
// Implementation file for SortingAlgos class
// Author	   : Jayakrishnan. P
// Last updated: 26/09/2022
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
	// Parameters : (2) - array, length of array.
	// Retrun type: void
	// Note       : Array should be of integers.
	//*********************************************************************
	void SortingAlgos::SelectionSort(int* array, int length)
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