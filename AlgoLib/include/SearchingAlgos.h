//***********************************************************
// Header file for SearchingAlgos class
// Author	   : Jayakrishnan. P
// Last updated: 23/09/2022
//***********************************************************
#pragma once

namespace AlgoLib
{
	class SearchingAlgos
	{
	public:
		
		static int LinearSearch(int* arr, int length, int k);
		static int BinarySearch(int arr[], int n, int k);

	private:
		SearchingAlgos();
		~SearchingAlgos();

	};

	
}
