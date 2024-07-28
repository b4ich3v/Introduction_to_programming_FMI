#include <iostream>

int main()
{

	char ch = 'a';
	std::cin >> ch;

	bool isVowel = ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i'
		|| ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I';

	std::cout << isVowel << std::endl;

	return 0;
	
}
