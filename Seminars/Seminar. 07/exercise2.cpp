// Напишете функция, която приема цяло число и връща броя на 1-ците в двоичния му запис.

#include <iostream>

int countOfUpperBits(int number) 
{

	int mask = 1;
	int count = 0;

	while (number != 0) 
	{

		if (number & mask)
		{

			count++;

		}

		number >>= 1;

	}

	return count;

}

int main()
{

	std::cout << countOfUpperBits(189);

	return 0;

}
