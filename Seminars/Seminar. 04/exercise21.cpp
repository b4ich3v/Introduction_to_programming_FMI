// Напишете функция, която приема символ и ако символът е цифра, да върне съответната цифра. 
// Ако символът не е цифра, то да върне -1

#include <iostream>

int toDigit(char ch)
{

	switch (ch)
	{

	case '0': return 0; break;
	case '1': return 1; break;
	case '2': return 2; break;
	case '3': return 3; break;
	case '4': return 4; break;
	case '5': return 5; break;
	case '6': return 6; break;
	case '7': return 7; break;
	case '8': return 8; break;
	case '9': return 9; break;
	default: return -1; break;

	}

}

int main()
{

	std::cout << toDigit('2');

	return 0;

}
