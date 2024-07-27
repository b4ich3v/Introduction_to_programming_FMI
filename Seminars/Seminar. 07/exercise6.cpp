// Напишете функция, която приема масив(разглеждаме го като множество) и отпечатва всички негови подмножества.

#include <iostream>

void printSubset(int* array, int size, int mask)
{

	std::cout << "{ ";

	for (int i = 0; i < size; i++)
	{

		if (mask & (1 << i))
		{

			std::cout << array[i] << " ";

		}

	}

	std::cout << "} ";

}

void generateSubsets(int* array, int size)
{

    int countOfSubsets = 1 << size;

	for (int i = 0; i < countOfSubsets; i++)
	{

		printSubset(array, size, i);

	}

}

int main() 
{

	int array[] = { 1 , 2 ,3 };

	generateSubsets(array, 3);

    return 0;

}

