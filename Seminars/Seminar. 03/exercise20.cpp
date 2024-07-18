// Да се напише програма, която приема цяло положително число n и отпечатва следната папионка

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

    for (int i = 1; i <= number; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {

            std::cout << j << " ";

        }
     
        int dashes = 2 * (number - i);

        for (int s = 0; s < dashes; s++) 
        {

            std::cout << "-";

        }
      
        for (int j = i; j >= 1; j--) 
        {

            std::cout << " " << j;

        }

        std::cout << std::endl;

    }

    for (int i = number - 1; i >= 1; i--) 
    {
      
        for (int j = 1; j <= i; j++)
        {

            std::cout << j << " ";

        }
        
        int dashes = 2 * (number - i);

        for (int s = 0; s < dashes; s++) 
        {

            std::cout << "-";

        }
        
        for (int j = i; j >= 1; j--) 
        {

            std::cout << " " << j;

        }

        std::cout << std::endl;

    }

    return 0;

}
