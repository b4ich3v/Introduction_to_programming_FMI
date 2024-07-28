#include <iostream>

int GCD(int n, int k)
{

	while (k != 0)
	{

		int temp = k;
		k = n % k;
		n = temp;

	}

	return n;

}

int GcdOfArray(int* array, int size)
{

	int gcd = array[0];

	for (int i = 1; i < size; i++)
	{

		gcd = GCD(gcd, array[i]);

	}

	return gcd;

}

int main()
{

	int array[5] = { 9 ,18 ,6 ,12 };

	std::cout << GcdOfArray(array, 4);

	return 0;

}
