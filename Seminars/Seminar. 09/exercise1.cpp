// Напишете функция, която пресмята дължината на даден стринг (без '\0').

#include <iostream>

int customStrlen(char* string)
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

int main() 
{
    
    char string[] = "Yoan";

    std::cout << customStrlen(string) << std::endl;

    return 0;

}
