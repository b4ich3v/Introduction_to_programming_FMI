// Да се напише функция, която приема масив и връща най-малкото общо кратно на числата в масива.

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

int LCM(int n, int k) 
{

	return (n / GCD(n, k)) * k;

}

int LcmOfArray(int* array, int size)
{

	int lcm = array[0];

	for (int i = 1; i < size; i++)
	{

		lcm = LCM(lcm, array[i]);

	}

	return lcm;

}

int main()
{

	int array[5] = { 9 ,18 ,6 ,12 };

	std::cout << LcmOfArray(array, 4);

	return 0;

}
