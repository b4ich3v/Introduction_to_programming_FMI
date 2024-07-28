#include <iostream>

int sortedNumber(int number)
{

	int countOfZeros = 0;
	int countOfOnes = 0;
	int countOfTwos = 0;
	int countOfThrees = 0;
	int countOfFours = 0;
	int countOfFives = 0;
	int countOfSixes = 0;
	int countOfSevens = 0;
	int countOfEights = 0;
	int countOfNines = 0;

	while (number != 0)
	{

		int lastDigit = number % 10;

		switch (lastDigit) 
		{

		case 0: countOfZeros++; break;
		case 1: countOfOnes++; break;
		case 2: countOfTwos++; break;
		case 3: countOfThrees++; break;
		case 4: countOfFours++; break;
		case 5: countOfFives++; break;
		case 6: countOfSixes++; break;
		case 7: countOfSevens++; break;
		case 8: countOfEights++; break;
		case 9: countOfNines++; break;
		default: return -1; break;

		}

		number /= 10;

	}

	int sortedNumber = 0;

	for (int i = 0; i < countOfZeros; i++) sortedNumber = sortedNumber * 10 + 0;
	for (int i = 0; i < countOfOnes; i++) sortedNumber = sortedNumber * 10 + 1;
	for (int i = 0; i < countOfTwos; i++) sortedNumber = sortedNumber * 10 + 2;
	for (int i = 0; i < countOfThrees; i++) sortedNumber = sortedNumber * 10 + 3;
	for (int i = 0; i < countOfFours; i++) sortedNumber = sortedNumber * 10 + 4;
	for (int i = 0; i < countOfFives; i++) sortedNumber = sortedNumber * 10 + 5;
	for (int i = 0; i < countOfSixes; i++) sortedNumber = sortedNumber * 10 + 6;
	for (int i = 0; i < countOfSevens; i++) sortedNumber = sortedNumber * 10 + 7;
	for (int i = 0; i < countOfEights; i++) sortedNumber = sortedNumber * 10 + 8;
	for (int i = 0; i < countOfNines; i++) sortedNumber = sortedNumber * 10 + 9;

	return sortedNumber;

}


int main()
{

	std::cout << sortedNumber(531261);

	return 0;

}
