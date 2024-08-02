#include <iostream>

bool isUpper(char ch) 
{

    return ch >= 'A' && ch <= 'Z';

}

bool islower(char ch)
{

    return ch >= 'a' && ch <= 'z';

}

bool allUpper(char* string)
{

    while (*string != '\0' && *string != ' ' && *string != '\t')
    {

        if (!isUpper(*string))
        {

            return false;

        }

        string++;

    }

    return true;

}

bool allLower(char* string)
{

    while (*string != '\0' && *string != ' ' && *string != '\t')
    {

        if (!islower(*string))
        {

            return false;

        }

        string++;

    }

    return true;

}

int* cntWords(char string[])
{

    if (string == nullptr)
    {

        return nullptr;

    }

    int countOfLower = 0;
    int countOfUpper = 0;

    while (*string != '\0') 
    {

        while (*string == ' ' || *string == '\t')
        {

            string++;

        }

        if (*string != ' ' && *string != '\t' && *string != '\0') 
        {

            if (allUpper(string))
            {

                countOfUpper++;

            }

            if (allLower(string))
            {

                countOfLower++;

            }

        }

        while (*string != ' ' && *string != '\t' && *string != '\0')
        {

            string++;

        }

    }

    int* toReturn = new int[2];
    toReturn[0] = countOfLower;
    toReturn[1] = countOfUpper;

    return toReturn;

}

int main()
{

    char string[] = " This IS an exAMple STRING F&OR this eXErcise. ";
    int* result = cntWords(string);

    std::cout << "{" << result[0] << "," << result[1] << "}";
    delete[] result;

    return 0;

}

