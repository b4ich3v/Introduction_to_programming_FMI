// (Between 100 and 200): Да се напише програма, която въвежда цяло число и проверява дали е под 100, 
// между 100 и 200 или над 200. 

#include <iostream>

int main()
{

	int number = 0;
	std::cin >> number;

	if (number < 100) 
	{

		std::cout << "Less than 100" << std::endl;

	}
	else if (number >= 100 && number <= 200)
	{

		std::cout << "Between 100 and 200"<< std::endl;

	}
	else
	{

		std::cout << "Greater than 200"<< std::endl;

	}

	return 0;

}
