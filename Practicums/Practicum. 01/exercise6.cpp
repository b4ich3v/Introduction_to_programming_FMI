#include <iostream>

int main() 
{
    
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;

    std::cin >> number1 >> number2 >> number3 >> number4;

    int evenSum = 0;

    if (number1 % 2 == 0)
    {

        evenSum += number1;

    }
    if (number2 % 2 == 0) 
    {

        evenSum += number2;

    }
    if (number3 % 2 == 0) 
    {

        evenSum += number3;

    }
    if (number4 % 2 == 0) 
    {

        evenSum += number4;

    }

    std::cout << "The sum of the even numbers is: " << evenSum << std::endl;

    return 0;

}

