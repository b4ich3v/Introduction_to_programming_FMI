#include <iostream>

int main() 
{
    
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;

    std::cin >> digit1 >> digit2 >> digit3;

    if (digit1 < 0 || digit1 > 9 || digit2 < 0 || digit2 > 9 || digit3 < 0 || digit3 > 9)
    {

        std::cout << "Invalid input. Please enter only digits between 0 and 9." << std::endl;
        return 0;

    }

    int number1 = digit1 * 100 + digit2 * 10 + digit3;
    int number2 = digit1 * 100 + digit3 * 10 + digit2;
    int number3 = digit2 * 100 + digit1 * 10 + digit3;
    int number4 = digit2 * 100 + digit3 * 10 + digit1;
    int number5 = digit3 * 100 + digit1 * 10 + digit2;
    int number6 = digit3 * 100 + digit2 * 10 + digit1;

    int maxNumber = number1;

    if (number2 > maxNumber) maxNumber = number2;
    if (number3 > maxNumber) maxNumber = number3;
    if (number4 > maxNumber) maxNumber = number4;
    if (number5 > maxNumber) maxNumber = number5;
    if (number6 > maxNumber) maxNumber = number6;

    std::cout << "The largest number that can be formed is: " << maxNumber << std::endl;

    return 0;

}

