#include <iostream>

void swap(int& a, int& b) 
{

    int temp = a;
    a = b;
    b = temp;

}

void reverseTheArray(int*& array, int size) 
{

    for (int i = 0; i < size / 2; i++)
    {

        swap(array[i], array[size - i - 1]);

    }

}

void convertMax(int* array, int N) 
{

    if (array == nullptr || N < 0)
    {

        std::cout << "Error";
        return;

    }

    int maxElement = 0;
    int indexOfMaxElement = 0;

    for (int i = 0; i < N; i++)
    {

        if (array[i] > maxElement)
        {

            maxElement = array[i];
            indexOfMaxElement = i;

        }

    }

    reverseTheArray(array, N);

    for (int i = 0; i < N; i++)
    {

        if (i != indexOfMaxElement) 
        {

            array[i] += maxElement;

        }
        else
        {

            continue;

        }

    }

}

int main()
{

    int array[] = { 11, 5, 2, 27, 4, 8, 2 };
    
    convertMax(array, 7);

    for (int i = 0; i < 7; i++)
    {

        std::cout << array[i] << " ";

    }
    
    return 0;

}

