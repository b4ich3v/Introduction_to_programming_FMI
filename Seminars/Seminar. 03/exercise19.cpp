#include <iostream>

int main()
{

    int number;
    std::cin >> number;

    if (number <= 0)
    {

        std::cout << "The number must be a positive integer" << std::endl;
        return 0;

    }

    int width = 2 * number - 1; 

    std::cout << std::endl;

    for (int i = 1; i <= number; i++) 
    {

        int numChars = 2 * i - 1;
        int spaces = (width - numChars) / 2; 

        for (int s = 0; s < spaces; s++) 
        {

            std::cout << " ";

        }

        for (int j = 1; j <= i; j++) 
        {

            std::cout << j;

        }

        for (int j = i - 1; j >= 1; j--) 
        {

            std::cout << j;

        }

        std::cout << std::endl;

    }

    for (int i = number; i >= 1; i--) 
    {

        int spaces = (width - 1) / 2; 

        for (int s = 0; s < spaces; s++)
        {

            std::cout << " ";

        }

        std::cout << i << std::endl;

    }

    return 0;

}
