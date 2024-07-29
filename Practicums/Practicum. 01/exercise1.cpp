#include <iostream>

int main() 
{

    int number1 = 0;
    int number2 = 0;

    std::cin >> number1 >> number2;

    int remainder = number1 % number2;
    int especially = number1 / number2;

    std::cout << remainder << " " << especially;

    return 0;

}

