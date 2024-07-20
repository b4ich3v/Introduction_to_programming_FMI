// Напишете функция, която приема символ и дали символа е главна буква.

#include <iostream>

bool isUpper(char ch)
{

	return ch >= 'A' && ch <= 'Z';

}

int main()
{

	std::cout << isUpper('A');

	return 0;

}
