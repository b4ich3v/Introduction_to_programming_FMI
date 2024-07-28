#include <iostream>

void splitByCase(const char* string, char*& lower, char*& upper)
{

    int lowercaseCount = 0;
    int uppercaseCount = 0;
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {

        if (string[i] >= 'a' && string[i] <= 'z')
        {

            lowercaseCount++;

        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {

            uppercaseCount++;

        }

    }

    lower = new char[lowercaseCount + 1];
    upper = new char[uppercaseCount + 1];

    int lowercaseIndex = 0;
    int uppercaseIndex = 0;

    for (int i = 0; i < length; i++)
    {

        if (string[i] >= 'a' && string[i] <= 'z')
        {

            lower[lowercaseIndex++] = string[i];

        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {

            upper[uppercaseIndex++] = string[i];

        }

    }

    lower[lowercaseIndex] = '\0';
    upper[uppercaseIndex] = '\0';

}

int main()
{

    const char* string = "My name is Yoan Baychev.";

    char* lowercase = nullptr;
    char* uppercase = nullptr;

    splitByCase(string, lowercase, uppercase);

    std::cout << lowercase << std::endl;
    std::cout << uppercase << std::endl;

    delete[] lowercase;
    delete[] uppercase;

    return 0;
}
