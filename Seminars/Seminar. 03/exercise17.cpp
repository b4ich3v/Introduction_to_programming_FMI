#include <iostream>

int main() 
{

    int number = 0;
    std::cin >> number;

    if (number <= 0)
    {

        std::cout << "The number must be a positive integer" << std::endl;
        return 0;

    }

    std::cout << "+";

    for (int i = 0; i < number - 2; i++)
    {

        std::cout << " -";

    }

    std::cout << " +" << std::endl;

    for (int i = 0; i < number - 2; i++) 
    {

        std::cout << "|";

        for (int j = 0; j < number - 2; j++)
        {

            std::cout << "  ";

        }

        std::cout << " |" << std::endl;

    }

    std::cout << "+";

    for (int i = 0; i < number - 2; i++)
    {

        std::cout << " -";

    }

    std::cout << " +" << std::endl;

    return 0;

}
