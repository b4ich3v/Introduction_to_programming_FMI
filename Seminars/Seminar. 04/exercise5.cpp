#include <iostream>

int countOfDigits(int number)
{

	int count = 0;

	while(number != 0)
	{

		count++;
		number /= 10;

	}

	return count;

}

bool isPrefix(int n ,int k) 
{

	int countOfDigitsK = countOfDigits(k);
	int originalNumberK = k;

	int countOfDigitsN = countOfDigits(n);
	int originalNumberN = n;


	if(countOfDigitsN < countOfDigitsK)
	{

		return false;

	}

	int iter = countOfDigitsN - countOfDigitsK;

	for (int i = 0; i < iter; i++)
	{

		n /= 10;

	}

	return n == k;

}

int main()
{

	std::cout<< isPrefix(288, 28);

    return 0;

}
