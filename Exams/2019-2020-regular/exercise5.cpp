#include <iostream>

int sizeOfString(char* string)
{

    int size = 0;

    while (*string != '\0')
    {

        string++;
        size++;

    }

    return size;

}

char* CheckStr(char string[])
{

    int size = sizeOfString(string);

    if (size < 0 || string == nullptr) 
    {

        return nullptr;

    }

    bool app[256] = { false };

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {

            if (string[i] == string[j])
            {

                app[(int)string[i]] = true;
                break;

            }

        }

    }

    int newSize = 0;

    for (int i = 0; i < 256; i++)
    {

        if (app[i]) 
        {

            newSize++;

        }

    }

    char* toReturn = new char[newSize + 1];
    int index = 0;

    for (int i = 0; i < 256; i++)
    {

        if (app[i])
        {

            toReturn[index] = (char)i;
            index++;

        }

    }

    toReturn[newSize] = '\0';
    return toReturn;

}

int main() 
{

    char string[] = "aif8sltt8f";

    char* result = CheckStr(string);
    std::cout << result;

    return 0;

}
