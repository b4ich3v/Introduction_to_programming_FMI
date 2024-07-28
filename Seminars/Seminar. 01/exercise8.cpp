#include <iostream>

int main()
{

	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	bool isFirstBigger = a > b;

	std::cout << a * isFirstBigger + b * !isFirstBigger;

	return 0;

}
