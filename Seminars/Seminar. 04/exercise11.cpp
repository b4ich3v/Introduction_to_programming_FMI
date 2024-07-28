#include <iostream>

int countOfDigits(int number)
{

	if (number < 0) 
	{

		std::cout << "Error";
		return - 1;

	}

	int count = 0;

	while (number != 0) 
	{

		count++;
		number /= 10;

	}

	return count;

}


int main()
{

	std::cout << countOfDigits(123);

	return 0;

}
