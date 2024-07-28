#include <iostream>

int main() 
{

    int number = 0;
    std::cin >> number;

    if (number % 2 == 0 || number <= 0)
    {

        std::cout << "Invalid number" << std::endl;
        return 0;

    }

    std::cout << std::endl;

    for (int i = 0; i <= number / 2; i++) 
    {

        for (int j = 0; j < i; j++) 
        {

            std::cout << " ";

        }

        for (int j = 0; j < number - 2 * i; j++) 
        {

            std::cout << "*";

        }

        std::cout << std::endl;

    }

    for (int i = number / 2 - 1; i >= 0; i--) 
    {

        for (int j = 0; j < i; j++)
        {

            std::cout << " ";

        }

        for (int j = 0; j < number - 2 * i; j++)
        {

            std::cout << "*";

        }

        std::cout << std::endl;

    }

    return 0;

}
