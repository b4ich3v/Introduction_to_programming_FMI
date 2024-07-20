// Напишете функция, която приема неотрицателни числа n и k и връща дали k е суфикс на n.

#include <iostream>

int inversedNumber(int number) 
{

	int result = 0;
	int countOfDigits = 0;
	int originalNumber = number;

	while (number != 0) 
	{

		number /= 10;
		countOfDigits++;

	}

	number = originalNumber;

	while (number != 0)
	{

		result = result + iter * (number % 10);
		iter /= 10;
		number /= 10;

	}

	return result;

}

bool isSufix(int n ,int k) 
{

	int countOfDigitsK = 0;
	int originalNumberK = k;
	int iter = 1;

	while (k != 0)
	{

		k /= 10;
		countOfDigitsK++;

	}

	k = originalNumberK;

	for (int i = 0; i < countOfDigitsK - 1; i++)
	{

		iter *= 10;

	}

	n = inversedNumber(n);
	
	for (int i = 0; i < countOfDigitsK - 1; i++)
	{

		n /= 10;

	}

	return n == k;

}

int main()
{

	std::cout<< isSufix(288, 88);

    return 0;

}
