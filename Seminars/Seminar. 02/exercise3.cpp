// (Speed trap): Да се напише програма, която въвежда скорост (десетично число) и отпечатва информация за скоростта.
// При скорост до 10 (включително) отпечатайте “slow”. При скорост над 10 и до 50 отпечатайте “average”. При скорост над 50 и до 150 отпечатайте “fast”.
// При скорост над 150 и до 1000 отпечатайте “ultra fast”. При по-висока скорост отпечатайте “extremely fast”

#include <iostream>

int main()
{
	double speed = 0;
	std::cin >> speed;

	if (speed <= 10)
	{

		std::cout << "Slow" << std::endl;

	}	
	else if (speed < 50)
	{

		std::cout << "Average" << std::endl;

	}
	else if (speed < 150)
	{

		std::cout << "Fast" << std::endl;

	}
	else if (speed < 1000)
	{

		std::cout << "Ultra fast" << std::endl;

	}
	else 
	{

		std::cout << "Extremely fast" << std::endl;

	}
		
	return 0;

}
