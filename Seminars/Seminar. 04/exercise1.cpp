// Въвежда се неотрицателно число n. 
// Да се отпечатат всички двойки прости числа, които са във вида 6k-1 и 6k+1.

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
