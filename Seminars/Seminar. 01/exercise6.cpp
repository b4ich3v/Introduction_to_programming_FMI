// Напишете програма, която въвежда две числа - a и b и извежда като резултат (a + b)^4 - (a-b)^2.

#include <iostream>

int main()
{

	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	int expr1 = a + b;
	int expr2 = a - b;

	int result = expr1 * expr1 * expr1 * expr1 - expr2 * expr2;

	std::cout << result;

	return 0;

}
