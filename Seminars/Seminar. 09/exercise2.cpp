// Напишете функция, която копира даден стринг.

#include <iostream>

char* customStrcpy(char* destination, const char* source) 
{
    
    char* originalDestination = destination;

    while (*source != '\0') 
    {

        *destination = *source;
        destination++;
        source++;

    }

    *destination = '\0';

    return originalDestination;

}

int main() 
{
    
    char string[] = "Yoan";
    char result[50];

    customStrcpy(result, string);

    std::cout << result;

    return 0;

}
