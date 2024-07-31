#include <iostream>

int CheckStr(char string[]) 
{
   
    if (string == nullptr)
    {

        return -1;

    }

    int size = 0;
    char* scan = string;

    while (*scan != '\0') 
    {

        size++;
        scan++;

    }

    scan = nullptr;

    if (size < 2)
    {

        return -1;

    }

    int charCount[256] = { 0 };

    for (int i = 0; string[i] != '\0'; i++) 
    {

        charCount[(char)string[i]]++;

    }

    int count = 0;

    for (int i = 0; i < 256; i++) 
    {

        if (charCount[i] % 2 != 0) 
        {

            count++;

        }

    }

    if (count > 1)
    {

        return 0;

    }
    else 
    {

        return 1;

    }

}

int main() 
{

    char string1[] = "beblehl";
    char string2[] = "asdfgjk";
    char* string3 = nullptr;

    std::cout << CheckStr(string1) << std::endl; 
    std::cout << CheckStr(string2) << std::endl; 
    std::cout << CheckStr(string3) << std::endl; 

    return 0;

}
