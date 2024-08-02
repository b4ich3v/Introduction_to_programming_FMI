#include <iostream>

int* mergeArrays(int array1[], int array2[], int m) 
{

    if (array1 == nullptr || array2 == nullptr || m < 0)
    {

        return nullptr;

    }

    int* toReturn = new int[m];

    for (int i = 0; i < m; i++)
    {

        toReturn[i] = array1[i] + array2[m - i - 1];

    }

    return toReturn;

}

int main()
{

    int array1[] = { 1, 2, 3, 4 };
    int array2[] = { 2, 5, 7, 11 };

    int* result = mergeArrays(array1, array2, 4);

    for (int i = 0; i < 4; i++)
    {

        std::cout << result[i] << " ";

    }

    delete[] result;
    return 0;

}

