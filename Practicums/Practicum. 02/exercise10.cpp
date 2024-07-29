#include <iostream>

int main() 
{
    
    double number1 = 0;
    int number2 = 0;
    char operation = 'a';

    std::cin >> number1;
    std::cin >> operation;
    std::cin >> number2;

    double result;

    switch (operation) 
    {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        
        if (number2 == 0) 
        {

            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 0; 

        }

        result = number1 / number2;
        break;

    default:

        std::cout << "Error: Invalid operation." << std::endl;
        return 0;

    }

    std::cout << "The result is: " << result << std::endl;

    return 0;

}

