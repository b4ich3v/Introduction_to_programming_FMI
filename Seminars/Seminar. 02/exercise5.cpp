#include <iostream>

int main()
{

	int hours = 0;
	int minutes = 0;
	std::cin >> hours >> minutes;

	(minutes += 15) %= 60;

	if (minutes < 15)
	{

		(hours += 1) %= 24;

	}

	if (hours <= 9) 
	{

		std::cout << 0;
		std::cout << hours << ":";

	}

	if (minutes <= 9) 
	{

		std::cout << 0;
		std::cout << minutes << std::endl;

	}
		
	return 0;

}
