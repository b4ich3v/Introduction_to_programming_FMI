#include <iostream>

bool isPrime(int number) 
{

	for (int i = 2; i < number; i++)
	{

		if (number % i == 0)
		{

			return false;
			break;

		}

	}

	return true;

}

void printSpecialPrimes(int number)
{

	for (int i = 1; i < number; i++)
	{

		if (isPrime(i) && ((i-1) % 6 == 0 || (i + 1) % 6 == 0))
		{

			std::cout << i << " ";

		}

	}

}

int main()
{

	printSpecialPrimes(123);

    return 0;

}
