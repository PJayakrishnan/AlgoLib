# AlgoLib
A static C++ library contatining basic algorithms.

Content:
* [How to compile the library](#how-to-compile-the-library)
* [How to add AlgoLib library in a project using Visual Studio]()
* [SearchingAlgos](#searchingalgos)
* [SortingAlgos](#sortingalgos)

# How to compile the library
You can clone this github repo to your local system using Visual Studio and open the `.sln` file there. Thus you will be able to compile and build AlgoLib project to `.lib` file.

# How to add AlgoLib library in your project using Visual Studio

You can copy the required `.h` and `.lib` files to a folder inside the project you want this library to serve for and give both the file's relative paths in  project properties at  respective locations.
### You can add header file like,
````C++
#include "../include/SearchingAlgos.h"
````

when it is placed inside a folder, say `include` in the project directory.

# SearchingAlgos

## Functions
<details>

<summary><h3> 1. LinearSearch </h3></summary>

<br>

  ````
	Function   : LinearSearch
	Parameters : (4) - array, length of array, element to be searched,
			reference to duration to complete algorithm
	Retrun type: Position of element to be searched in the given array
	Note       : If the given elemet to be searched is not found, method
	             will return -1. Array and elemnt to be searched should
	             be of integers.
  ````
  
  To use this method:
  ````C++
  int position = AlgoLib::SearchingAlgos::LinearSearch(array, length, elementToBeSearched, duration);
  ````
  Note: `duration` is passed as reference and can be used further down the code when it have the time taken to complete the algorithm, in milli seconds.
  
| Time complexity | : O(n)  |
|-----------------|:--------|
| Auxiliary Space | : O(1)  |
</details>

<details>
<summary><h3> 2. BinarySearch </h3></summary>
<br>

  ````
	Function   : BinarySearch
	Parameters : (4) - array, length of array, element to be searched, 
			reference to duration to complete algorithm.
	Retrun type: Position of element to be searched in the given array
	Note       : If the given elemet to be searched is not found, method
	             will return -1. Array and elemnt to be searched should
	             be of integers and array should be sorted.
  ````
  
  To use this method:
  ````C++
  int position = AlgoLib::SearchingAlgos::BinarySearch(array, length, elementToBeSearched, duration);
  ````
  Note: `duration` is passed as reference and can be used further down the code when it have the time taken to complete the algorithm, in milli seconds.
  
| Time complexity | : O(logn)|
|-----------------|:---------|
| Auxiliary Space | : O(1)   |
</details>

# SortingAlgos

## Functions

<details>
<summary><h3> 1. SelectionSort </h3></summary>
<br>

  ````
	Function   : SelectionSort
	Parameters : (3) - array, length of array,
			reference to duration for 
			sorting.
	Retrun type: void
	Note       : Array should be of integers.
	
  ````
  
  To use this method:
  ````C++
  int position = AlgoLib::SortingAlgos::SelectionSort(array, length, duration);
  ````
  
| Time complexity | : O( $n^2$ )|
|-----------------|:------------|
| Auxiliary Space | : O(1)      |
</details>
