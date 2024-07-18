// Да се напише програма, която приема цяло число и отпечатва дали е степен на 2-ката.

#include <iostream>

int main() 
{

    int number = 0;
    std::cin >> number;

    bool pred = true;

    while (true) 
    {

        if (number % 2 != 0 && number != 1)
        {

            pred = false;
            break;

        }

        if (number == 1)
        {

            break;

        }

        number /= 2;

    }

    if(pred)
    {

        std::cout << "It is a power of two" << std::endl;

    }
    else
    {

        std::cout << "It is not a power of two" << std::endl;

    }

    return 0;

}
