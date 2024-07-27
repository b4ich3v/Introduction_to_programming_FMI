// От даден масив от сортирани последнователни числа са премахнати някои числа.
// Напишете фунцкия, която приема такъв масив и връща най-малкото премахнато число.
// Решението ви трябва да работи с логартмична сложност(а не с линейно минаване през масива).

#include <iostream>

int findMissingNumber(int* array, int size)
{

	int left = 0;
	int right = size - 1;

	while (left <= right)
	{

		int middle = left + (right - left) / 2;

		
		if (array[middle] != array[0] + middle)
		{

			right = middle - 1;

		}
		else
		{

			left = middle + 1;

		}

	}

	return array[0] + left;

}

int main()
{

	int array[] = { 5 ,6 ,7 ,9 ,10 ,12 ,13 };

	std::cout << findMissingNumber(array, 7);	

	return 0;

}
