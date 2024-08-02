#include <iostream>

void swap(long& a, long& b) 
{

    long temp = a;
    a = b;
    b = temp;

}

void bubbleSort(long* array, int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {

            if (array[j + 1] > array[j])
            {

                swap(array[j + 1], array[j]);

            }

        }

    }

}

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

    int size = sizeOfString(num);

    if (size < 3) 
    {

        return -1; 

    }

    long* array = new long[size];

    for (int i = 0; i < size; i++)
    {

        array[i] = num[i] - '0';

    }

    bubbleSort(array, size);
    long result = array[0] + array[1] + array[2];
    delete[] array;

    return result ;

}

int main()
{

    char num[] = "131151491498";
    std::cout << convertNumber(num);

    return 0;

}

