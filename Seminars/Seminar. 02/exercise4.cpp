#include <iostream>

const double PI = 3.14;

int main()
{

	char figure = 'a';
	std::cin >> figure;

	if (figure == 's')
	{

		double side = 0;
		std::cin >> side;
		std::cout << side * side << std::endl;

	}
	else if (figure == 'r')
	{

		double sideA, sideB;
		std::cin >> sideA >> sideB;
		std::cout << sideA * sideB << std::endl;

	}
	else if (figure == 'c')
	{

		double R = 0;
		std::cin >> R;
		std::cout << PI * R * R << std::endl;

	}
	else if (figure == 't')
	{

		double width = 0;
		double height = 0;
		std::cin >> width >> height;
		std::cout << width * height / 2 << std::endl;

	}
	else
	{

		std::cout << "Invalid figure!" << std::endl;

	}

	return 0;

}
