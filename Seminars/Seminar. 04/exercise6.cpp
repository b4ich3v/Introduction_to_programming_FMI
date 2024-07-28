#include <iostream>

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

bool isInfix(int n, int k)
{

	int countOfDigitsK = countOfDigits(k);
	int countOfDigitsN = countOfDigits(n);

	if (countOfDigitsN < countOfDigitsK)
	{

		return false;

	}

	int iter = 1;

	for (int i = 0; i < countOfDigitsK; i++)
	{

		iter *= 10;

	}

	for (int i = 0; i <= countOfDigitsN - countOfDigitsK; i++)
	{

		if (n % iter == k)
		{

			return true;

		}

		n /= 10;

	}

	return false;

}

int main()
{

	std::cout << isInfix(2831, 83);

	return 0;

}
