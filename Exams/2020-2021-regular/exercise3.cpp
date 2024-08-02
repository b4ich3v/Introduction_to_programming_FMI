#include <iostream>

bool CheckDate(char date[]) 
{
   
    if (date[4] != ' ' || date[5] != 'g' || date[6] != '.' || date[7] != '\0')
    {

        return false;

    }

    int year = 0;

    for (int i = 0; i < 4; i++) 
    {

        if (date[i] < '0' || date[i] > '9') 
        {

            return false; 

        }

        year = year * 10 + (date[i] - '0');

    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {

        return true;

    }
    else 
    {

        return false;

    }

}

int main() 
{

    char date1[] = "2024 g.";
    char date2[] = "2023 g.";

    std::cout << "Date: " << date1 << " - Is leap year: " << (CheckDate(date1) ? "Yes" : "No") << std::endl;
    std::cout << "Date: " << date2 << " - Is leap year: " << (CheckDate(date2) ? "Yes" : "No") << std::endl;

    return 0;

}

