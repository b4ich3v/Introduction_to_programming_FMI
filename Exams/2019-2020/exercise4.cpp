#include <iostream>

int sizeOfString(char* string)
{

    int size = 0;

    while (*string != '\0')
    {

        string++;
        size++;

    }

    return size;

}

bool isDigit(char ch) 
{

    return ch >= '0' && ch <= '9';

}

int CheckTimeStr(char string[]) 
{
    if (string == nullptr) 
    {

        return -1;

    }

    if (sizeOfString(string) != 8)
    {

        return -1;

    }

    if (string[2] != ':' || string[5] != ':') 
    {

        return -1;
    }

    for (int i = 0; i < 8; i++) 
    {

        if (i == 2 || i == 5) 
        {

            continue;

        }

        if (!isDigit(string[i]))
        {

            return -1;

        }

    }

    int hours = (string[0] - '0') * 10 + (string[1] - '0');
    int minutes = (string[3] - '0') * 10 + (string[4] - '0');
    int seconds = (string[6] - '0') * 10 + (string[7] - '0');

    if (hours < 0 || hours > 24)
    {

        return -1;

    }
    if (minutes < 0 || minutes >= 60) 
    {

        return -1;

    }
    if (seconds < 0 || seconds >= 60) 
    {

        return -1;

    }

    return 1;

}

int main() 
{

    char time1[] = "23:59:59";
    char time2[] = "24:00:00";
    char time3[] = "12:34:56";
    char time4[] = "25:00:00"; 
    char time5[] = "12:60:00"; 
    char time6[] = "12:00:60"; 
    char time7[] = "123:00:00"; 
    char* time8 = nullptr; 

    std::cout << CheckTimeStr(time1) << std::endl; 
    std::cout << CheckTimeStr(time2) << std::endl; 
    std::cout << CheckTimeStr(time3) << std::endl; 
    std::cout << CheckTimeStr(time4) << std::endl; 
    std::cout << CheckTimeStr(time5) << std::endl; 
    std::cout << CheckTimeStr(time6) << std::endl; 
    std::cout << CheckTimeStr(time7) << std::endl; 
    std::cout << CheckTimeStr(time8) << std::endl; 

    return 0;

}
