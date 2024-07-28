#include <iostream>

int factorial(int number)
{

	if (number < 0)
	{

		std::cout << "Error";
		return -1;

	}

	if (number == 0) 
	{

		return 1;

	}

	return number * factorial(number - 1);

}

int main()
{

	std::cout << factorial(5);

	return 0;

}
