#include <iostream>

int main() 
{
    
    int year = 0;
    std::cin >> year;

    if (year % 400 == 0) 
    {

        std::cout << year << " is a leap year." << std::endl;

    }
    else if (year % 100 == 0)
    {

        std::cout << year << " is not a leap year." << std::endl;

    }
    else if (year % 4 == 0) 
    {

        std::cout << year << " is a leap year." << std::endl;

    }
    else 
    {

        std::cout << year << " is not a leap year." << std::endl;

    }

    return 0;

}

