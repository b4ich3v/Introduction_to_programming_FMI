#include <iostream>

int main()
{

	int number = 0;
	std::cin >> number;

	int thirdDigit = number % 10;
	number /= 10; 

	int secondDigit = number % 10;
	number /= 10; 

	int firstDigit = number % 10;

	int reversed = thirdDigit * 100 + secondDigit * 10 + firstDigit;
	reversed++;

	std::cout << reversed << std::endl;

	return 0;

}
