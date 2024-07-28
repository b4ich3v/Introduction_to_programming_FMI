#include <iostream>
#include <cctype> 

bool isUpper(char ch) 
{

    return ch >= 'A' && ch <= 'Z';

}

bool isLower(char ch) 
{

    return ch >= 'a' && ch <= 'z';

}

void countLetters(const char* string, int& lowercaseCount, int& uppercaseCount)
{
    
    if (*string == '\0')
    {

        return;

    }

    if (isLower(*string))
    {

        lowercaseCount++;

    }
    
    else if (isUpper(*string))
    {

        uppercaseCount++;

    }

    
    countLetters(string + 1, lowercaseCount, uppercaseCount);

}

int main() 
{

    char string[1024];
    std::cin.getline(string, 1024);

    int lowercaseCount = 0;
    int uppercaseCount = 0;

    countLetters(string, lowercaseCount, uppercaseCount);

    std::cout << lowercaseCount << std::endl;
    std::cout << uppercaseCount << std::endl;

    return 0;

}
