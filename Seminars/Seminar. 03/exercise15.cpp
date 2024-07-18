// Да се напише програма, която приема цяло положително число n и отпечатва пирамида от числа (подравнена надясно)

#include <iostream>

int main()
{

    int number;
    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {

        for (int k = number - i - 1; k >= 0; k--)
        {

            std::cout << " "; 

        }
            
        for (int j = i; j >= 1; j--)
        {

            std::cout << j; 

        }

        std::cout << std::endl;

    }

    for (int i = number - 1; i >= 1; i--)
    {

        for (int k = number - i - 1; k >= 0; k--)
        {

            std::cout << " ";

        }
            
        for (int j = i; j >= 1; j--) 
        {

            std::cout << j;

        }
           
        std::cout << std::endl;

    }

    return 0;

}
