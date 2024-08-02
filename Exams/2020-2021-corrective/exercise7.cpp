#include <iostream>

int sizeOfString(char* string)
{

    int size = 0;

    while (*string != '\0')
    {

        size++;
        string++;

    }

    return size;

}

long convertNumber(char* num) 
{

    if (num == nullptr) 
    {

        return -1;

    }

    long sum = 0;
    int length = sizeOfString(num);

    for (int i = 0; i < length; i++) 
    {

        if (num[i] < '0' || num[i] > '9') 
        {

            return -1;  

        }

        sum += num[i];  

    }

    return sum;

}

int main() 
{

    char num1[] = "314";
    char num2[] = "442a";
    char num3[] = "5462141";

    std::cout << convertNumber(num1) << std::endl;  
    std::cout << convertNumber(num2) << std::endl;  
    std::cout << convertNumber(num3) << std::endl;  

    return 0;

}

