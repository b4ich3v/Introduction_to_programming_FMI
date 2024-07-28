#include <iostream>

void merge(const int* array1, int size1, const int* array2, int size2, int* result)
{

	unsigned array1Index = 0;
	int array2Index = 0;
	int resultIndex = 0;

	while (array1Index < size1 && array2Index < size2)
	{

		if (array1[array1Index] <= array2[array2Index])
		{

			result[resultIndex++] = array1[array1Index++];

		}
		else
		{

			result[resultIndex++] = array2[array2Index++];

		}
			
	}

	while (array1Index < size1) 
	{

		result[resultIndex++] = array1[array1Index++];

	}
		

	while (array2Index < size2) 
	{

		result[resultIndex++] = array2[array2Index++];

	}
		
}

int getBound(const int* array, int size)
{

	if (!array)
	{
		
		return -1;

	}

	for (int i = 0; i < size - 1; i++)
	{

		if (array[i] > array[i + 1]) 
		{

			return i + 1;

		}
			
	}

	return -1;

}

void sortArrayConcatOfTwoSortedArrays(int* array, int size)
{

	if (!array) 
	{

		return;

	}

	int secondArrayStartIndex = getBound(array, size);

	if (secondArrayStartIndex == -1)
	{

		return;

	}

	int* temp = new int[size];
	merge(array, secondArrayStartIndex, array + secondArrayStartIndex, size - secondArrayStartIndex,temp);

	for (int i = 0; i < size; i++)
	{

		array[i] = temp[i];

	}
		
	delete[] temp;

}

int main()
{

	constexpr int size = 6;
	int array[size] = { 1,5,9, 12, 4, 7 };

	sortArrayConcatOfTwoSortedArrays(array, size);

	for (int i = 0; i < size; i++) 
	{

		std::cout << array[i] << " ";

	}
		
	return 0;

}
