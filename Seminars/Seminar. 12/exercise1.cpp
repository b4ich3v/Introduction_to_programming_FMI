#include <iostream>

void swap(int& a, int& b)
{

	int temp = a;
	a = b;
	b = temp;

}

void bubbleSort(int* array, int size)
{

	unsigned lastSwapedIndex = size - 1;

	for (int i = 0; i < size - 1; i++)
	{
		int currentIterLastSwapped = 0;

		for (int j = 0; j < lastSwapedIndex; j++)
		{

			if (array[j] > array[j + 1])
			{

				swap(array[j], array[j + 1]);
				currentIterLastSwapped = j;

			}

		}

		if (currentIterLastSwapped == 0) 
		{

			return;

		}
			
		lastSwapedIndex = currentIterLastSwapped;

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
	int arr[SIZE] = { 5, 4, 3, 2, 1 };

	bubbleSort(arr, SIZE);
	printArray(arr, SIZE);

	return 0;

}
