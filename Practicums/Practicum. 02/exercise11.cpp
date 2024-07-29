#include <iostream>

int main() 
{
    
    int number = 0;
    int number1 = 0;
    int number2 = 0;

    std::cin >> number;

    if (number < 1000 || number > 9999) 
    {

        std::cout << "Error: The number must be a 4-digit number." << std::endl;
        return 0; 

    }

    int digit1 = number / 1000; 
    int digit2 = (number / 100) % 10; 
    int digit3 = (number / 10) % 10; 
    int digit4 = number % 10; 

    number1 = digit1 * 10 + digit4; 
    number2 = digit2 * 10 + digit3; 

    if (number1 < number2) 
    {

        std::cout << "The first number is less than the second number." << std::endl;

    }
    else if (number1 > number2)
    {

        std::cout << "The first number is greater than the second number." << std::endl;

    }
    else 
    {

        std::cout << "The first number is equal to the second number." << std::endl;

    }

    return 0;

}

