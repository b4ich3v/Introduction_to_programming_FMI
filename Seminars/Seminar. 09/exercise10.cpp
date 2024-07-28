#include <iostream>

int countOfWords(char* string)
{

    int count = 0;
    bool inWord = false;

    while (*string != '\0')
    {

        while (*string == '\t' || *string == ' ' && *string != '\0')
        {

            string++;

        }

        if (*string != '\t' && *string != ' ' && *string != '\0')
        {

            inWord = true;
            count++;

        }

        inWord = false;

        while (*string != '\t' && *string != ' ' && *string != '\0')
        {

            string++;

        }

    }

    return count;

}

int main() 
{

    char string[] = "Me? Why always me?";

    std::cout << countOfWords(string) << std::endl;

    return 0;

}
