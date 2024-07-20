// Напишете функция, която приема естествено число и връща дали цифрите му са сортирани (във възходящ или в низходящ ред).

#include <iostream>

bool areDigitsSorted(int number)
{

	while (number != 0) 
	{

		int currentLastDigit = number % 10;
		number /= 10;
		int newLastDigit = number % 10;

		if (currentLastDigit < newLastDigit) 
		{

			return false;
			break;

		}

	}

	return true;

}

int main()
{

	std::cout << areDigitsSorted(122239);

	return 0;

}
