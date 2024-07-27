// Напишете функция, която приема 3 стринга - text, where и what и земства в text всяко срещане на where с what. 
// Да се реши без допълнителна памет(in - place).

#include <iostream>

int customStrlen(const char* string)
{

    if (string == nullptr)
    {

        return -1;

    }

    int size = 0;

    while (*string != '\0')
    {

        string++;
        size++;

    }

    return size;

}

int customStrncmp(const char* string1, const char* string2, int number) 
{

    int index = 0;

    while (index < number && string1[index] != '\0' && string2[index] != '\0')
    {

        if (string1[index] != string2[index]) 
        {

            return (unsigned char)string1[index] - (unsigned char)string2[index];

        }

        index++;

    }

    if (index < number) 
    {

        if (string1[index] != string2[index]) 
        {

            return (unsigned char)string1[index] - (unsigned char)string2[index];

        }

    }

    return 0;

}

void replaceInPlace(char* text, const char* where, const char* what) 
{

    int textLen = customStrlen(text);
    int whereLen = customStrlen(where);
    int whatLen = customStrlen(what);

    if (whereLen == 0) 
    {

        return;

    }

    for (int i = 0; i <= textLen - whereLen; )
    {
        
        if (customStrncmp(&text[i], where, whereLen) == 0)
        {
            
            if (whatLen > whereLen) 
            {

                int shiftLen = whatLen - whereLen;

                for (int j = textLen; j >= i + whereLen; j--) 
                {

                    text[j + shiftLen] = text[j];

                }

                textLen += shiftLen;

            }

            if (whatLen < whereLen) 
            {

                int shiftLen = whereLen - whatLen;

                for (int j = i + whereLen; j <= textLen; j++) 
                {

                    text[j - shiftLen] = text[j];

                }

                textLen -= shiftLen;

            }

            for (int k = 0; k < whatLen; k++) 
            {

                text[i + k] = what[k];

            }

            i += whatLen;

        }
        else 
        {

            i++;

        }

    }

}

int main() 
{

    char text[100] = "I am the best of the best";
    const char* where = "best";
    const char* what = "worst";

    replaceInPlace(text, where, what);

    std::cout << text << std::endl;

    return 0;

}
