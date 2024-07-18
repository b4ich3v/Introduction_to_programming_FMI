// Напишете програма, която приема естествено число и връща дали числото е просто.

#include <iostream>

int main() 
{

    int number = 0;
    std::cin >> number;

	for (int i = 2; i < number; i++)
	{

		if (number % i == 0) 
		{

			std::cout << "The number is not prime" << std::endl;
			return 0;
			break;

		}

	}

	std::cout << "The number is prime" << std::endl;

    return 0;

}
