#include <iostream>

int main() 
{

    int number = 0;
    std::cin >> number;

    if (number <= 0)
    {

        std::cout << "The number must be a positive integer." << std::endl;
        return 0;

    }

    for (int i = 0; i < number; i++)
    {
     
        for (int j = 0; j < number; j++) 
        {

            if (i == j || i == number - j - 1) 
            {

                std::cout << ". ";

            } else 
            {

                std::cout << "  ";

            }

        }

        std::cout << std::endl;

    }

    return 0;

}
