#include <iostream>

void swap(long& a, long& b)
{

    long temp = a;
    a = b;
    b = temp;

}

void reverseArr(long* array, int size)
{

    if(array == nullptr || size < 0)
    {

        std::cout << "Error";
        return;

    }

    for (int i = 0; i < size / 2; i++)
    {

        swap(array[i], array[size - i - 1]);

    }

}

void ConvertArr(long arr[], long S, long E)
{

    if (S < 0 || E < 0 || E < S || arr == nullptr)
    {

        std::cout << "Error";
        return;

    }

    reverseArr(arr + S, E - S + 1);

}

int main() 
{

    long arr[] = {4, 5, 6, 7, 8, 9, 0, 1};
    long S = 2;
    long E = 5;

    ConvertArr(arr, S, E);

    for (int i = 0; i < 8; i++)
    {

        std::cout << arr[i] << " ";

    }

    return 0;

}


