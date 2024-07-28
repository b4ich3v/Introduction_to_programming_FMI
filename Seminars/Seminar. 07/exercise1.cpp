#include <iostream>

int findSpecialNumber(int* array, int size)
{

	if (size < 0) 
	{

		return -1;

	}

	int result = 0;

	for (int i = 0; i < size; i++)
	{

		result ^= array[i];

	}

	return result;

}

int main()
{

	int array[] = { 9 ,18 ,9 ,12 ,18 ,15 ,12 };

	std::cout << findSpecialNumber(array, 7);

	return 0;

}
