//***********************************************************
// Header file for SearchingAlgos class
// Author	   : Jayakrishnan. P
// Last updated: 14/10/2022
//***********************************************************
#pragma once
#include <chrono>

namespace AlgoLib
{
	class SearchingAlgos
	{
	public:
		
		static int LinearSearch(int* arr, int length, int k, double& duration);
		static int BinarySearch(int arr[], int n, int k, double& duration);

	private:
		SearchingAlgos();
		~SearchingAlgos();

		static int LinearSearch_inside(int* arr, int length, int k);
		static int BinarySearch_inside(int arr[], int n, int k);

	};

	
}
