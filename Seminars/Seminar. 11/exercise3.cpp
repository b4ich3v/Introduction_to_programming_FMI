#include <iostream>
#include <cstring>

#pragma warning(disable:4996)

int countSubstrings(const char* string, char separator) 
{

    int count = 0;
    bool inSubstring = false;

    for (int i = 0; string[i] != '\0'; i++) 
    {

        if (string[i] != separator) 
        {

            if (!inSubstring) 
            {

                inSubstring = true;
                count++;

            }

        }
        else 
        {

            inSubstring = false;

        }

    }

    return count;

}

char** split(const char* string, char separator) 
{

    int numSubstrings = countSubstrings(string, separator);

    char** result = new char* [numSubstrings + 1]; 
    int start = 0;
    int end = 0;
    int index = 0;
    bool inSubstring = false;

    for (int i = 0; string[i] != '\0'; i++)
    {

        if (string[i] != separator) 
        {

            if (!inSubstring) 
            {

                start = i;
                inSubstring = true;

            }

            end = i;

        }
        else 
        {

            if (inSubstring) 
            {

                int len = end - start + 1;
                result[index] = new char[len + 1];
                strncpy(result[index], &string[start], len);
                result[index][len] = '\0';
                index++;
                inSubstring = false;

            }

        }

    }
    if (inSubstring) 
    {

        int len = end - start + 1;
        result[index] = new char[len + 1];
        strncpy(result[index], &string[start], len);
        result[index][len] = '\0';
        index++;

    }

    result[numSubstrings] = nullptr; 
    return result;

}

void printSubstrings(char** substrings)
{

    for (int i = 0; substrings[i] != nullptr; i++) 
    {

        std::cout << substrings[i] << std::endl;

    }

}

void freeSubstrings(char** substrings) 
{

    for (int i = 0; substrings[i] != nullptr; i++) 
    {

        delete[] substrings[i];

    }

    delete[] substrings;

}

int main() 
{

    const char* string = "Hello world this is a test";
    char separator = ' ';

    char** substrings = split(string, separator);

    std::cout << "Substrings:" << std::endl;
    printSubstrings(substrings);

    freeSubstrings(substrings);

    return 0;

}
