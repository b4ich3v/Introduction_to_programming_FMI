#include <iostream>

int main() 
{
    
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;

    std::cin >> number1 >> number2 >> number3 >> number4;

    if ((number2 - number1 == number3 - number2) && (number3 - number2 == number4 - number3)) 
    {

        std::cout << 1 << std::endl; 

    }
    else 
    {

        std::cout << 0 << std::endl; 

    }

    return 0;

}

