// Да се напише програма, която приема 2 числа. Да се отпечатат всички общи делители сортиран наобратно.

#include <iostream>

int main() 
{

    int number1 = 0;
    int number2 = 0;

    std::cin >> number1 >> number2;
   
    if (number1 <= 0 || number2 <= 0) 
    {

        std::cout << "Invalid numbers" << std::endl;
        return 0;

    }

    int smallerNumber = (number1 > number2) ? number2 : number1;

    for (int i = smallerNumber; i >= 1; i--)
    {

        if (number1 % i == 0 && number2 % i == 0) 
        {

            std::cout << i << " ";

        }

    }

    return 0;

}
