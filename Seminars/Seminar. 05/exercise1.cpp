// Да се напише функция, която приема масив и връща дали е палиндром.

#include <iostream>

bool isPalindrome(int* array, int size)
{

	if (size < 0) 
	{

		return false;

	}

	for (int i = 0; i < size; i++)
	{

		if (array[i] != array[size - i - 1])
		{

			return false;

		}

	}

	return true;

}

int main()
{

	int array[5] = { 1 ,2 ,3 , 2 ,1 };

	std::cout << isPalindrome(array, 5);

	return 0;

}
