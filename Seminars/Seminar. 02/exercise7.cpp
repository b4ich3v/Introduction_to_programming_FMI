#include <iostream>

int main()
{

	int x = 0;
	int y = 0;
	int radius = 0;

	std::cin >> x >> y >> radius;

	if (x * x + y * y < radius * radius)
	{

		std::cout << "In the circle" << std::endl;

	}
	else if (x * x + y * y == radius * radius)
	{

		std::cout << "On the circle" << std::endl;

	}
	else
	{

		std::cout << "Out of the circle" << std::endl;

	}

	return 0;

}
