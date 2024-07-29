#include <iostream>

int main() 
{
    
    int day = 0;
    int month = 0;
    int year = 0;

    std::cin >> day >> month >> year;

    if (month < 1 || month > 12) 
    {

        std::cout << "0" << std::endl;
        return 0; 

    }

    int daysInMonth;

    switch (month) 
    {
    case 1:  
    case 3:  
    case 5:  
    case 7:  
    case 8: 
    case 10: 
    case 12: 
        daysInMonth = 31;
        break;
    case 4:  
    case 6:  
    case 9:  
    case 11: 
        daysInMonth = 30;
        break;
    case 2:  
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {

            daysInMonth = 29;

        }
        else 
        {

            daysInMonth = 28;

        }

        break;

    default:

        std::cout << "0" << std::endl;
        return 0; 

    }

    if (day >= 1 && day <= daysInMonth) 
    {

        std::cout << "1" << std::endl;

    }
    else 
    {

        std::cout << "0" << std::endl;

    }

    return 0;

}

