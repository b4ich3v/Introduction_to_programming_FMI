#include <iostream>

int sizeOfString(const char* string)
{

    int size = 0;

    while (*string != '\0')
    {

        string++;
        size++;

    }

    return size;

}

char* Encode(const char* string) 
{

    if (string == nullptr) 
    {

        return nullptr;

    }

    int size = sizeOfString(string);
    int newSize = 0;

    for (int i = 0; i < size; i++)
    {

        if (string[i] < 10) 
        {

            newSize += 1;

        }
        else if (string[i] < 100) 
        {

            newSize += 2; 

        }
        else 
        {

            newSize += 3; 

        }
        if (i < size - 1) 
        {

            newSize += 1; 

        }

    }

    char* encoded = new char[newSize + 1]; 
    int position = 0;

    for (int i = 0; i < size; i++) 
    {

        int value = (int)(string[i]);

        if (value >= 100)
        {

            encoded[position++] = '0' + value / 100;
            value %= 100;
            encoded[position++] = '0' + value / 10;
            value %= 10;

        }
        else if (value >= 10) 
        {

            encoded[position++] = '0' + value / 10;
            value %= 10;

        }

        encoded[position++] = '0' + value;

        if (i < size - 1) 
        {

            encoded[position++] = '_';

        }

    }

    encoded[position] = '\0'; 
    return encoded;

}

int main()
{

    const char* str = "abc";
    char* encoded = Encode(str);

    if (encoded != nullptr) 
    {

        std::cout << encoded << std::endl;
        delete[] encoded;

    }

    return 0;

}
