#include <iostream>

int sizeOfString(char* string)
{

    int size = 0;

    while (*string != '\0') 
    {

        size++;
        string++;

    }

    return size;

}

bool isLower(char ch) 
{

    return ch >= 'a' && ch <= 'z';

}

bool isUpper(char ch)
{

    return ch >= 'A' && ch <= 'Z';

}

bool checkstr(char* string)
{

    int size = sizeOfString(string);

    if (string == nullptr || size < 0)
    {

        return false;

    }

    bool firstIsLower = (string[0] >= 'a' && string[0] <= 'z');

    if (firstIsLower) 
    {

        for (int i = 0; i < size; i++)
        {

            if (i % 2 == 0 && !isLower(string[i]))
            {

                return false;

            }

            if (i % 2 == 1 && !isUpper(string[i]))
            {

                return false;

            }

        }

    }
    else
    {

        for (int i = 0; i < size; i++)
        {

            if (i % 2 == 0 && !isUpper(string[i]))
            {

                return false;

            }

            if (i % 2 == 1 && !isLower(string[i]))
            {

                return false;

            }

        }

    }

    return true;

}

int main() 
{

    char string[] = "aZaAaCfEa";
    std::cout << checkstr(string);

    return 0;

}

