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

int main()
{

	std::cout<<inversedNumber(123);

    return 0;

}
