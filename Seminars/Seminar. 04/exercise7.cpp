// Напишете функция, която приема две естествени числа и връща n^k.

#include <iostream>

int powerOfNumber(int n, int k) 
{

	if(k < 0)
	{

		std::cout << "Error";
		return -1;

	}

	int result = 1;

	while(k > 0)
	{

		result *= n;
		k--;

	}

	return result;

}

int main()
{

	std::cout << powerOfNumber(2, 0);

	return 0;

}
