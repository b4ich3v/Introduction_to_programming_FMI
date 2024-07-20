// Напишете функция, която приема цяло число и връща модула му.

#include <iostream>

int absoluteOfNumber(int number)
{

	if (number < 0)
	{

		return -number;

	}

	return number;

}

int main()
{

	std::cout << absoluteOfNumber(-1);

	return 0;

}
