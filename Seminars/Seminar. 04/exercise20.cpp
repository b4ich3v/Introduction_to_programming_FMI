// Напишете функция, която приема символ и връща съответната главна буква (ако подадения символ е малък символ)

#include <iostream>

bool isUpper(char ch)
{

	return ch >= 'A' && ch <= 'Z';

}

char toUpper(char ch)
{

	if (isUpper(ch)) 
	{

		return ch;

	}
	else
	{

		return ch - 'a' + 'A';

	}

}

int main()
{

	std::cout << toUpper('a');

	return 0;

}
