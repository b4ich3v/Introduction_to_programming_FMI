// Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). Да се отпечатат броя на инверсиите в масива.
// Инверсия ще наричаме двойка индекси(i, j), където i < j и arr[i] > arr[j]

#include <iostream>

const int MAX_SIZE = 1000;

int countOfInverses(int* array, int size)
{

	int count = 0;

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{

			if (i<j && array[i] > array[j])
			{

				count++;

			}

		}

	}

	return count;

}

int main()
{

	int array[MAX_SIZE] = { 0 };
	int size = 0;
	std::cin >> size;

	if (size > 1000 || size < 0) 
	{

		return 0;

	}

	for (int i = 0; i < size; i++)
	{

		std::cin >> array[i];

	}

	std::cout << countOfInverses(array, size);

	return 0;

}
