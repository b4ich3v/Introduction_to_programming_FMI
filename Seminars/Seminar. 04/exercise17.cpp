// Напишете функция, която приема естествено число и връща дали цифрите му са еднакви.

#include <iostream>

bool areAllDigitsEqual(int number)
{

	int lastDigit = number % 10;

	while (number != 0) 
	{

		int currentLastDigit = number % 10;
		number /= 10;

		if (currentLastDigit != lastDigit)
		{

			return false;
			break;

		}

	}

	return true;

}

int main()
{

	std::cout << areAllDigitsEqual(11111);

	return 0;

}
