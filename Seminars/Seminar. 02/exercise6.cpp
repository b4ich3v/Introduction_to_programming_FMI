#include <iostream>

int main()
{

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	std::cin >> a >> b >> c >> d >> e;

	if ((a <= b && b >= c && c <= d && d >= e)
		|| (a >= b && b <= c && c >= d && d <= e))
	{

		std::cout << "Yes" << std::endl;

	}
	else
	{

		std::cout << "No" << std::endl;

	}

	return 0;

}
