// Напишете функция, която приема цяло число и обръща най-десния бит в него, който е единица.

#include <iostream>

bool checkBit(int number, int index)
{

	int mask = 1;
	mask <<= index;

	return (mask & number) == mask;

}

void flipBit(int& number, int index)
{

	int mask = 1 << index;
	number ^= mask;

}

void flipRightmostSetBit(int& number)
{

	for (int index = 0; index < 32; index++)
	{

		if (checkBit(number, index))
		{

			flipBit(number, index);
			break;

		}

	}

}

int main()
{

	int number = 15;

	flipRightmostSetBit(number);

	std::cout << number;

	return 0;

}
