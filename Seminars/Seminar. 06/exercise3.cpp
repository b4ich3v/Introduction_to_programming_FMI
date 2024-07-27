// FromRandomToDecimal

#include <iostream>

int getIndexOfSymbol(char ch)
{

	if (ch >= '0' && ch <= '9')
	{

		return ch - '0';

	}
	else if (ch >= 'A' && ch <= 'Z')
	{

		return 10 + (ch - 'A');

	}
	else
	{

		return -1;

	}
		
}

char getSymbolFromIndex(int index)
{

	if (index >= 0 && index <= 9)
	{

		return index + '0';

	}

	if (index >= 10) 
	{

		return (index - 10) + 'A';

	}
		
	return 0;

}

void print(const char* array, int size)
{

	for (int i = 0; i < size; i++)
	{

		std::cout << array[i] << " ";
		std::cout << std::endl;

	}
		
}

unsigned int fromRandomToDecimal(const char* from, int size, unsigned k)
{
	int result = 0;

	for (int i = size - 1, mult = 1; i >= 0; i--, mult *= k)
	{

		result += getIndexOfSymbol(from[i]) * mult;

	}
		
	return result;

}

void fromDecimalToRandom(unsigned n, char* to, int size, unsigned k)
{

	for (int arrayIter = size - 1; arrayIter >= 0; arrayIter--) 
	{

		int ind = n % k;
		char current = getSymbolFromIndex(ind);
		to[arrayIter] = current;
		n /= k;

	}

}

void fromRandomToRandom(const char from[], int fromSize, int k, char to[], int toSize, int n)
{

	unsigned int decimal = fromRandomToDecimal(from, fromSize, k);

	fromDecimalToRandom(decimal, to, toSize, n);

}


int main()
{

	constexpr int SIZE = 5;
	{
		char from[] = { '0', 'A', 'A','B', '3' };
		unsigned n = fromRandomToDecimal(from, SIZE, 16); 
		std::cout << n << std::endl;;

	}

	{

		char to[SIZE] = {};
		fromDecimalToRandom(1234, to, SIZE, 16); 
		print(to, SIZE);

	}

	{

		char from[SIZE] = { '0', '0', 'A','B', '3' };

		char to[SIZE];

		fromRandomToRandom(from, SIZE, 16, to, SIZE, 10);

		print(to, SIZE);

	}

	return 0;

}
