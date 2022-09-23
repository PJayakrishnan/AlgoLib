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
	//				will return -1. Array and elemnt to be searched should
	//				be of type integers.
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

	//*********************************************************************
	// Function   : BinarySearch
	// Parameters : (3) - array, length of array, element to be searched
	// Retrun type: Position of element to be searched in the given array
	// Note       : If the given elemet to be searched is not found, method
	//				will return -1. Array and elemnt to be searched should
	//				be of type integers.
	//*********************************************************************
	int SearchingAlgos::BinarySearch(int arr[], int n, int k) 
	{
		int i = 0;
		int j = (n - 1);
		int mid;
		while (i <= j)
		{
			mid = (i + j) / 2;

			if (k == arr[mid])
			{
				return mid;
			}
			else if (k > arr[mid])
			{
				i = mid + 1;
			}
			else if (k < arr[mid])
			{
				j = mid - 1;
			}
		}
		return -1;
	}
}