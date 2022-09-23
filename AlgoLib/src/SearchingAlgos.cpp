//***********************************************************
// Implementation file for SearchingAlgos class
// Author	   : Jayakrishnan. P
// Last updated: 23/09/2022
//***********************************************************
#include "../include/SearchingAlgos.h"

namespace AlgoLib
{
	SearchingAlgos::SearchingAlgos()
	{
	}

	SearchingAlgos::~SearchingAlgos()
	{
	}
	//*********************************************************************
	// Function   : LinearSearch
	// Parameters : (3) - array, length of array, element to be searched
	// Retrun type: Position of element to be searched in the given array
	// Note       : If the given elemet to be searched is not found, method
	//				will return -1. array and elemnt to be searched should
	//				be of integers.
	//*********************************************************************
	int SearchingAlgos::LinearSearch(int* arr, int length, int k)
	{
		for (int i = 0; i < length; i++)
		{
			if (arr[i] == k)
			{
				return i;
			}
		}
		return -1;
	}
}