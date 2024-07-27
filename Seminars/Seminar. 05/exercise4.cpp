// Да се напише функция, която приема масив и връща дали е конкатенация на два масива, които са палиндроми.

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

bool concatedArrays(int* array, int size)
{

	if (size < 0)
	{

		return false;

	}
	
	for (int i = 0; i < size; i++)
	{

		if (isPalindrome(array, i) && isPalindrome(array + i, size - i)) 
		{

			return true;
			break;

		}

	}

	return false;

}

int main()
{

	int array[] = { 1, 2 ,3 ,2 ,1 ,4 ,5 ,5 ,4 };

	std::cout << concatedArrays(array, 9);

	return 0;

}
