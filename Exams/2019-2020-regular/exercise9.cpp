#include <iostream>

double calculateMatrix(int** matr, int m)
{

    if (matr == nullptr || m < 0)
    {

        return -1;

    }

    double sum = 0;

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (i == j)
            {

                sum += matr[i][j];

            }

            if (i == m - j - 1)
            {

                sum += matr[i][j];

            }

        }

    }

    return sum;

}


int main() 
{

    int m = 3;
    int** matrix = new int* [m];

    for (int i = 0; i < m; i++) 
    {

        matrix[i] = new int[m];

    }

    int exampleMatrix[3][3] = 
    {

        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };

    for (int i = 0; i < m; i++) 
    {

        for (int j = 0; j < m; j++) 
        {

            matrix[i][j] = exampleMatrix[i][j];

        }

    }

    double result = calculateMatrix(matrix, m);
    std::cout << result << std::endl;

    for (int i = 0; i < m; i++)
    {

        delete[] matrix[i];

    }

    delete[] matrix;

    return 0;

}
