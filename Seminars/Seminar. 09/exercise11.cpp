// Напишете функции toUpper и toLower, които приемат стринг и променят всички главни букви в малки/всички малки букви в главни.

#include <iostream>

bool isUpper(char ch) 
{

    return ch >= 'Á' && ch <= 'Z';

}

void toLower(char* string)
{

    while (*string != '\0')
    {

        if (isUpper(*string))
        {

            *string += 'a' - 'A';

        }

        string++;

    }

}

void toUpper(char* string) 
{

    while (*string != '\0')
    {

        if (!isUpper(*string))
        {

            *string += 'A' - 'a';

        }

        string++;

    }

}

int main() 
{

    char string[] = "Yoan Baychev";

    //toUpper(string);
    toLower(string);

    std::cout << string << std::endl;

    return 0;

}
