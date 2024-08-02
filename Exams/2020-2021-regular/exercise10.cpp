#include <iostream>

int** mergearrays(int* array1, int* array2, int m)
{

    if (array1 == nullptr || array2 == nullptr || m < 0)
    {

        std::cout << "Error";
        return nullptr;

    }

    int** toReturn = new int* [2];

    toReturn[0] = new int[m];
    toReturn[1] = new int[m];

    for (int i = 0; i < m; i++)
    {

        toReturn[0][i] = array1[i];
        toReturn[1][i] = array2[i];

    }

    return toReturn;

}

int main()
{

    int array1[] = { 3, 5, 11, 2, 9 };
    int array2[] = { 1, 4, 32, 71, 5 };

    int** result = mergearrays(array1, array2, 5);

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            std::cout << result[i][j] << " ";

        }

        std::cout << std::endl;

    }

    for (int i = 0; i < 2; i++)
    {

        delete[] result[i];

    }

    delete[] result;

    return 0;

}
