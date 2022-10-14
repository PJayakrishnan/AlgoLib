//***********************************************************
// Header file for SortingAlgos class
// Author	   : Jayakrishnan. P
// Last updated: 14/10/2022
//***********************************************************
#pragma once
#include <chrono>

namespace AlgoLib 
{
	class SortingAlgos
	{
	public:
		

		static void SelectionSort(int* arr, int length, double& duration);

	private:
		SortingAlgos();
		~SortingAlgos();
		static void SelectionSort_inside(int* arr, int length);
	};
}



