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

int getCountOfWordsStartsWithA(char* string)
{

    if (string == nullptr)
    {

        return -1;

    }

    int count = 0;

    while (*string != '\0')
    {

        while (*string == ' ' || *string == '\t')
        {

            string++;

        }

        if (*string != ' ' && *string != '\t' && *string != '\0' && *string == 'a')
        {

            count++;

        }

        while (*string != ' ' && *string != '\t' && *string != '\0')
        {

            string++;

        }

    }

    return count;

}

int getCountOfWords(char* string)
{

    if (string == nullptr)
    {

        return -1;

    }

    int count = 0;

    while (*string != '\0') 
    {

        while (*string == ' ' || *string == '\t')
        {

            string++;

        }

        if (*string != ' ' && *string != '\t' && *string != '\0') 
        {

            count++;

        }

        while (*string != ' ' && *string != '\t' && *string != '\0')
        {

            string++;

        }

    }

    return count;

}

int* GetWord(char string[])
{

    int size = sizeOfString(string);

    if (string == nullptr || size < 0)
    {

        return nullptr;

    }

    int countOfWords = getCountOfWords(string);
    int countOfWordsStartsWithA = getCountOfWordsStartsWithA(string);

    int* toReturn = new int[2];
    toReturn[0] = countOfWordsStartsWithA;
    toReturn[1] = countOfWords;

    return toReturn;

}

int main() 
{

    char string[] = " It took      about      an hour to                  answer all the questions.               ";

    int* result = GetWord(string);

    std::cout << "{" << result[0] << ",";
    std::cout << result[1] << "}";

    delete[] result;

    return 0;

}

