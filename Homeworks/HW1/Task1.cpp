/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 1
*
*/


#include <iostream>

int sumDividersFunc(int number);

int main()
{

	int divSum = 0;
	int n = 0;
	int k = 0;

	std::cin >> n;
	std::cin >> k;

	if (1 > n || k < 0) // Validation
	{

		std::cout << "Incorrect input";
		return -1;

	}

	for (int x = 1; x <= n; x++) // We fixing y <= x, then we walk trough the values of x and y
	{

		for (int y = 1; y <= x; y++)
		{

			if (x * y == sumDividersFunc(x) * sumDividersFunc(y) * k)
			{

				divSum = divSum + 1;

			}

		}

	}

	std::cout << divSum;

	return 0;

}

int sumDividersFunc(int number)
{

	int sumDividers = 0;

	for (int i = 1; i <= number; i++)
	{

		if (number % i == 0)
		{

			sumDividers = sumDividers + 1;

		}

	}

	return sumDividers;

}
