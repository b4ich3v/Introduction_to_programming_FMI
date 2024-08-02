#include <iostream>

int* numOfWords(char string[]) 
{

    if (string == nullptr) 
    {

        return nullptr;

    }

    int counter = 0;
    int countOfEven = 0;
    int countOfOdd = 0;

    while (*string != '\0')
    {

        while (*string == ' ' || *string == '\t')
        {

            string++;

        }

        while (*string != ' ' && *string != '\t' && *string != '\0') 
        {

            counter++;
            string++;

        }

        while (*string == ' ' || *string == '\t')
        {

            string++;

        }

        if (counter % 2 == 0) 
        {

            countOfEven++;

        }

        if (counter % 2 == 1)
        {

            countOfOdd++;

        }

        counter = 0;

    }

    int* toReturn = new int[2];
    toReturn[0] = countOfEven;
    toReturn[1] = countOfOdd;

    return toReturn;

}

int main()
{

    char string[] = " This is an example string ";
    int* result = numOfWords(string);

    std::cout << "{" << result[0] << "," << result[1] << "}";
    delete[] result;

    return 0;

}

