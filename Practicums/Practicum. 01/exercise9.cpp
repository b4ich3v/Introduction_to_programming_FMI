#include <iostream>

int main() 
{
    
    int number1 = 0;
    int number2 = 0;

    std::cin >> number1 >> number2;

    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;

    std::cout << number1 << " " << number2;

    return 0;

}

