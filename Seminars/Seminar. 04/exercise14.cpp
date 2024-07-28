#include <iostream>

int countOfDigits(int number) 
{

	if(number < 0)
	{

		std::cout << "Error";
		return -1;

	}

	int count = 0;

	while (number != 0) 
	{

		count++;
		number /= 10;

	}

	return count;

}

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

int concatOfTwoNumbers(int n, int k)
{

	int countOfDigitsN = countOfDigits(n);
	int countOfDigitsK = countOfDigits(k);
	int newCountOfDigits = countOfDigitsN + countOfDigitsK - 1;

	if (countOfDigitsK == -1 || countOfDigitsN == -1)
	{

		return -1;

	}

	int iter = 1;

	for (int i = 0; i < newCountOfDigits - 1; i++)
	{

		iter *= 10;

	}

	int result = n * iter + k;

	return result;

}

int contcatOfInversedNumberAndNumber(int number) 
{

	return concatOfTwoNumbers(number, inversedNumber(number));

}

int main()
{

	std::cout << contcatOfInversedNumberAndNumber(12);

	return 0;

}
