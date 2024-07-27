// ToBinaryFromDecimal

#include <iostream>

unsigned int toBinaryFromDecimal(unsigned int number)
{

	int result = 0;
	int mult = 1;

	while (number != 0)
	{

		if (number % 2 == 1)
		{

			result += mult;

		}
			
		mult *= 10;
		number /= 2;

	}

	return result;

}

int main()
{

	std::cout << toBinaryFromDecimal(55) << std::endl;

	return 0;

}
