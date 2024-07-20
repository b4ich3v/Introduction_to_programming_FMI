// Напишете функция, която приема неотрицателни числа n и k и връща дали k е суфикс на n.

#include <iostream>

int inversedNumber(int number)
{

	int result = 0;
	int iter = 1;
	int countOfDigits = 0;
	int originalNumber = number;

	while (number != 0)
	{

		number /= 10;
		countOfDigits++;

	}

	for (int i = 0; i < countOfDigits - 1; i++)
	{

		iter *= 10;

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

int countOfDigits(int number)
{

	int count = 0;

	while (number != 0)
	{

		count++;
		number /= 10;

	}

	return count;

}

bool isSufix(int n, int k)
{

	int countOfDigitsK = countOfDigits(k);
	int countOfDigitsN = countOfDigits(n);

	if (countOfDigitsN < countOfDigitsK)
	{

		return false;

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

	std::cout << isSufix(288, 88);

	return 0;

}
