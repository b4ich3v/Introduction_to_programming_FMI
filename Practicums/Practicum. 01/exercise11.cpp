#include <iostream>

int main() 
{
   
    int number = 0;

    std::cin >> number;

    if ((number >= 10 && number <= 99) || (number <= -10 && number >= -99)) 
    {

        std::cout << "The number is two - digit: " << number << std::endl;

    }
    else 
    {

        if (number < 0)
        {

            number = -number;

        }

        int lastDigit = number % 10;
        std::cout << "The last digit of the number is: " << lastDigit << std::endl;

    }

    return 0;

}

