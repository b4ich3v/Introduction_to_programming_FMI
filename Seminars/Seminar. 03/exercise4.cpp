// Напишете програма, която приема естествено число и отпечатва разбиването му на прости множители, сортирани низходящо.

#include <iostream>

int main() 
{

    int number = 0;
    std::cin >> number;

	for (int i = number - 1; i >= 2; i--)
	{

		int counter = 0;
		bool isPrime = true;

		for (int j = 2; j < i; j++)
		{

			if (i % j == 0)
			{

				isPrime = false;
				break;

			}

		}
		
		int temp = number;

		while (temp > 0 && temp % i == 0)
		{

			temp /= i;
			counter++;

		}

		if (isPrime && (number % i == 0))
		{

			std::cout << i << "^" << counter << " ";

		}

	}

    return 0;

}
