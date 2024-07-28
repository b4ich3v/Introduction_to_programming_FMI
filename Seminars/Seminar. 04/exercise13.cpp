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

int main()
{

	std::cout << concatOfTwoNumbers(19, 32);

	return 0;

}
