#include <iostream>

void insertionSort(int* array, int size)
{

	for (int i = 1; i < size; i++)
	{

		int currentElement = array[i];
		int currentIndex = i - 1;

		while (currentIndex >= 0 && array[currentIndex] > currentElement)
		{

			array[currentIndex + 1] = array[currentIndex];
			currentIndex--;

		}

		array[currentIndex + 1] = currentElement;

	}

}

void printArray(const int* array, int size)
{

	for (int i = 0; i < size; i++)
	{

		std::cout << array[i] << " ";

	}
		
	std::cout << std::endl;

}

int main()
{

	constexpr int SIZE = 5;
	int arr[SIZE] = { 5,4,3,2,1 };

	insertionSort(arr, SIZE);
	printArray(arr, SIZE);

	return 0;

}
