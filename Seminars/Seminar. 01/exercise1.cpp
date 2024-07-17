// Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.

#include <iostream>

int main()
{
    
	int number = 0;
	std::cin >> number;
	bool isEven = number % 2 == 0;
	std::cout << isEven;
	
	return 0;
	
}
