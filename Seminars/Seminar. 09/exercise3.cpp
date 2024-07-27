// Напишете функция, която конкатенира два стринга.

#include <iostream>

char* customStrcat(char* destination, const char* source) 
{
   
    char* originalDest = destination;

    while (*destination != '\0') 
    {

        destination++;

    }

    while (*source != '\0') 
    {

        *destination = *source;
        destination++;
        source++;

    }

    *destination = '\0';

    return originalDest;

}

int main() 
{

    char string1[50] = "Hello, ";
    const char* string2 = "world!";

    customStrcat(string1, string2);
    std::cout <<  string1 << std::endl;

    return 0;

}
