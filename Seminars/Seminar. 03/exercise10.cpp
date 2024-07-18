// Да се напише програма, която приема число и премахва среднaта цифра , 
// ако числото има нечетен брой цифри или премахва средните две цифри, 
// ако числото има четен брой цифри. След това да се отпечата числото увеличено с 1-ца.

#include <iostream>

int main() 
{

    int number;
    std::cin >> number;

    int temp = number;
    int numDigits = 0;

    while (temp > 0) 
    {

        numDigits++;
        temp /= 10;

    }

    if (numDigits == 1) 
    {

        std::cout << "Result: " << number + 1 << std::endl;
        return 0;

    }

    int leftPart = number;
    int rightPart = 0;
    int divisor = 1;

    if (numDigits % 2 == 0)
    {
       
        int middle = numDigits / 2;

        for (int i = 0; i < middle - 1; i++) 
        {

            divisor *= 10;

        }

        leftPart = number / (divisor * 100);
        rightPart = number % divisor;
        number = leftPart * divisor + rightPart;

    }
    else
    {
        
        int middle = numDigits / 2;

        for (int i = 0; i <= middle; i++) 
        {

            divisor *= 10;

        }

        leftPart = number / divisor;
        rightPart = number % (divisor / 10);
        number = leftPart * (divisor / 10) + rightPart;

    }

    number += 1;

    std::cout << "Result: " << number << std::endl;

    return 0;

}
