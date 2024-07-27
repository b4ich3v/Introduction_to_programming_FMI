// Напишете функция, която конвертира низ, представляващ число, в цяло число.

#include <iostream>
#include <climits> 

int customAtoi(const char* string)
{
    
    if (string == nullptr) 
    {

        return 0;

    }

    int result = 0;
    int sign = 1; 
    int i = 0;

    while (string[i] == ' ') 
    {

        i++;

    }

    if (string[i] == '-' || string[i] == '+')
    {

        if (string[i] == '-') 
        {

            sign = -1;

        }

        i++;

    }

    while (string[i] >= '0' && string[i] <= '9') 
    {
        
        if (result > (INT_MAX - (string[i] - '0')) / 10)
        {

            return sign == 1 ? INT_MAX : INT_MIN;

        }

        result = result * 10 + (string[i] - '0');
        i++;

    }

    return result * sign;

}

int main() 
{

    const char* str1 = "12345";
    const char* str2 = "-12345";
    const char* str3 = "   54321";
    const char* str4 = "4193 with words";
    const char* str5 = "words and 987";

    std::cout << customAtoi(str1) << std::endl;
    std::cout <<  customAtoi(str2) << std::endl;
    std::cout << customAtoi(str3) << std::endl;
    std::cout << customAtoi(str4) << std::endl;
    std::cout << customAtoi(str5) << std::endl;

    return 0;

}
