#include <iostream>

char* GetWord(char str[])
{

    if (str == nullptr) 
    {

        return nullptr;

    }

    int maxLength = 0;
    int maxStart = 0;

    int currentLength = 0;
    int currentStart = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) 
    {

        if (str[i] == ' ' || str[i] == '\t') 
        {

            if (inWord) 
            {

                inWord = false;

                if (currentLength > maxLength) 
                {

                    maxLength = currentLength;
                    maxStart = currentStart;

                }

                currentLength = 0;

            }

        }
        else 
        {

            if (!inWord) 
            {

                inWord = true;
                currentStart = i;

            }

            currentLength++;

        }

    }

    if (inWord && currentLength > maxLength) 
    {

        maxLength = currentLength;
        maxStart = currentStart;

    }

    if (maxLength == 0) 
    {

        return nullptr; 

    }

    char* longestWord = new char[maxLength + 1];

    for (int i = 0; i < maxLength; i++) 
    {

        longestWord[i] = str[maxStart + i];

    }

    longestWord[maxLength] = '\0';
    return longestWord;

}

int main()
{

    char str[] = "  This is    an example string with some  long words  ";
    char* longestWord = GetWord(str);

    std::cout << longestWord;

    return 0;

}
