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
