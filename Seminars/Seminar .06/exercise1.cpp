// FromBinaryToDecimal

#include <iostream>

unsigned int fromBinaryToDecimal(unsigned int number)
{

	unsigned int result = 0;

	unsigned int mult = 1;

	while (number != 0)
	{

		result += ((number % 10) * mult);
		mult *= 2;
		number /= 10;

	}

	return result;

}

int main()
{

	std::cout << fromBinaryToDecimal(10111) << std::endl;

	return 0;

}
