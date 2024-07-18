// Напишете програма, която приема две естествени числа и връща най-малкото общо кратно.

#include <iostream>

int main() 
{

    int number1 = 0;
    int number2 = 0;

    std::cin >> number1 >> number2;

    if (number1 <= 0 || number2 <= 0)
    {

        std::cout << "Both numbers must be natural (greater than 0)." << std::endl;

    }
    else 
    {

        int a = number1;
        int b = number2;

        while (b != 0) 
        {

            int temp = b;
            b = a % b;
            a = temp;

        }

        int gcd = a;
        int lcm = (number1 * number2) / gcd;

        std::cout << "Least Common Multiple (LCM) is " << lcm << std::endl;

    }

    return 0;

}
