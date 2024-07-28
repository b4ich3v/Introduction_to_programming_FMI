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

    int size = 2 * number + 1;

    for (int i = 0; i < size; i++) 
    {

        std::cout << "#";

    }

    std::cout << std::endl;

    for (int i = 1; i <= number; i++) 
    {

        std::cout << "#";

        for (int j = 0; j < number; j++) 
        {

            std::cout << (j + i - 1) % number + 1;

        }

        std::cout << "#";
        std::cout << std::endl;

    }

    std::cout << "# ";

    for (int i = 0; i < number - 1; i++) 
    {

        std::cout << "X ";

    }

    std::cout << "X #";
    std::cout << std::endl;


    for (int i = number; i >= 1; i--) 
    {

        std::cout << "#";

        for (int j = 0; j < number; j++) 
        {

            std::cout << (j + i - 1) % number + 1;

        }

        std::cout << "#";
        std::cout << std::endl;

    }

    for (int i = 0; i < size; i++)
    {

        std::cout << "#";

    }

    std::cout << std::endl;


    return 0;

}
