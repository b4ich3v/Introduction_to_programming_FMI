// Напишете програма, която приема цяло число и връща най-често срещаната цифра. 
// Ако има няколко най-често срещани, то да се отпечата най-малката.

#include <iostream>

int main() 
{

    int number = 0;
    std::cin >> number;

    int minDigit = 9; 
    int maxCount = 0; 

    for (int digit = 0; digit <= 9; digit++) 
    {

        int temp = number;
        int count = 0;

        while (temp > 0) 
        {

            if (temp % 10 == digit) 
            {

                count++;

            }

            temp /= 10;

        }

        if (count > maxCount)
        {

            maxCount = count;
            minDigit = digit;

        }
        else if (count == maxCount && digit < minDigit)
        {

            minDigit = digit;

        }

    }

    std::cout << minDigit << std::endl;

    return 0;

}
