// Напишете програма, която приема две естествеи числа и връща най-големият им общ делител.

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

        std::cout << "Greatest Common Divider (GCD) is " << gcd << std::endl;

    }

    return 0;

}
