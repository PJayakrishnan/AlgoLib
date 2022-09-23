# AlgoLib
A static C++ library contatining basic algorithms.

Content:
* [How to compile the library](#how-to-compile-the-library)
* [How to add AlgoLib library in a project using Visual Studio]()
* [SearchingAlgos](#searchingalgos)

# How to compile the library
You can clone this github repo to your local system using Visual Studio and open the `.sln` file there. Thus you will be able to compile and build `.lib` file.

# How to add AlgoLib library in your project using Visual Studio

You can copy the required `.h` and `.lib` files to a folder inside the project you want this library to serve for and give both the file's relative paths in  project properties at  respective locations.
### You can add header file like,
````C++
#include "../include/SearchingAlgos.h"
````

when it is placed inside a folder, say `include` in the project directory.

# SearchingAlgos

# Functions
## 1. LinearSearch
  ````
	Function   : LinearSearch
	Parameters : (3) - array, length of array, element to be searched
	Retrun type: Position of element to be searched in the given array
	Note       : If the given elemet to be searched is not found, method
	             will return -1. Array and elemnt to be searched should
	             be of integers.
  ````
  
  To use this method:
  ````C++
  int position = AlgoLib::SearchingAlgos::LinearSearch(array, length, elementToBeSearched);
  ````
