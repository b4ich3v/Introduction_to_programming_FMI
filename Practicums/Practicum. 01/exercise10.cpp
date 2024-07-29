#include <iostream>

int main() 
{
    
    int number1 = 0;
    int number2 = 0;

    std::cin >> number1 >> number2;

    if (number1 > number2)
    {

        std::cout << "The larger number is: " << number1 << std::endl;

    }
    else if (number2 > number1) 
    {

        std::cout << "The larger number is: " << number2 << std::endl;

    }
    else 
    {

        std::cout << "Both numbers are equal." << std::endl;

    }

    return 0;

}

