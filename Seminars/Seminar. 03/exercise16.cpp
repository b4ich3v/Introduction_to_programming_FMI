#include <iostream>

int main()
{

	int count;
	std::cin >> count;

	for (int i = 1; i <= count; i++)
	{

		for (int j = 0; j < count; j++)
		{

			if (j % 2 == 0)
			{

				std::cout << i + (count * j) << " ";

			}
			else
			{

				std::cout << (j + 1) * count - (i - 1) << " ";

			}

		}

		std::cout << std::endl;

	}

	return 0;

}
