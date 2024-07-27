// Напишете функция, която проверява дали два стринга са еднакви.

#include <iostream>

int customStrcmp(const char* string1, const char* string2) 
{
    
    while (*string1 != '\0' && *string2 != '\0') 
    {
       
        if (*string1 != *string2) 
        {

            return *string1 - *string2;

        }
        
        string1++;
        string2++;

    }

   
    return *string1 - *string2;

}

int main() 
{

    const char* string1 = "Hello";
    const char* string2 = "Hello";
    const char* string3 = "World";
    const char* string4 = "Hell";

    std::cout << customStrcmp(string1, string2) << std::endl;
    std::cout << customStrcmp(string1, string3) << std::endl;
    std::cout << customStrcmp(string1, string4) << std::endl;

    return 0;

}
