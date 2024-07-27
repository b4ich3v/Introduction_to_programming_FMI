// BinarySearch

#include <iostream>

int binaraySearch(int* array, int size, int element)
{

	if (size < 0)
	{

		std::cout << "Error";
		return -1;

	}

	int left = 0;
	int right = size - 1;

	while (left != right) 
	{

		int middle = left + (right - left) / 2;

		if (array[middle] > element)
		{

			right = middle - 1;

		}
		else if (array[middle] < element) 
		{

			left = middle + 1;

		}
		else
		{

			return middle;

		}

	}

	return -1;

}

int main()
{

	int array[] = { 5 ,6 ,7 ,9 ,10 ,12 ,13 };

	std::cout << binaraySearch(array, 7, 8);

	return 0;

}
