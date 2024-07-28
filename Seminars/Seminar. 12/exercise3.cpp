#include <iostream>

void swap(int& a, int& b)
{

	int temp = a;
	a = b;
	b = temp;

}

void selectionSort(int* array, int size)
{

	for (int i = 0; i < size - 1; i++)
	{

		int minElementIndex = i;

		for (int j = i + 1; j < size; j++)
		{

			if (array[j] < array[minElementIndex])
			{

				minElementIndex = j;

			}
				
		}

		if (minElementIndex != i) 
		{

			swap(array[i], array[minElementIndex]);

		}
			
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

	selectionSort(arr, SIZE);
	printArray(arr, SIZE);

	return 0;

}
