// Въвежа се символ. Да се отпечата 1, ако е английска гласна буква, и 0, ако не е.

#include <iostream>

int main()
{

	char ch;
	std::cin >> ch;

	bool isVowel = ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i'
		|| ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I';

	std::cout << isVowel << std::endl;

	return 0;
	
}
