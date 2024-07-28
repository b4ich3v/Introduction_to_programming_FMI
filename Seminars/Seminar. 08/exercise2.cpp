#include <iostream>

const int MAX_SIZE = 100;  

bool isReflexive(int matrix[MAX_SIZE][MAX_SIZE], int size)
{

    for (int i = 0; i < size; i++) 
    {

        if (matrix[i][i] != 1)
        {

            return false;

        }

    }

    return true;

}

bool isSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int size)
{

    for (int i = 0; i < size; i++) 
    {

        for (int j = 0; j < size; j++) 
        {

            if (matrix[i][j] != matrix[j][i]) 
            {

                return false;

            }

        }

    }

    return true;

}

bool isTransitive(int matrix[MAX_SIZE][MAX_SIZE], int size)
{

    for (int i = 0; i < size; i++) 
    {

        for (int j = 0; j < size; j++) 
        {

            if (matrix[i][j] == 1) 
            {

                for (int k = 0; k < size; k++) 
                {

                    if (matrix[j][k] == 1 && matrix[i][k] != 1) 
                    {

                        return false;

                    }

                }

            }

        }

    }

    return true;

}

bool isEquivalenceRelation(int matrix[MAX_SIZE][MAX_SIZE], int N)
{

    return isReflexive(matrix, N) && isSymmetric(matrix, N) && isTransitive(matrix, N);

}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size)
{

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            std::cout << matrix[i][j] << " ";

        }

        std::cout << std::endl;

    }

}

int main() 
{

    int size = 0;
    std::cin >> size;

    if (size > MAX_SIZE) 
    {
        std::cout << "Error" << std::endl;
        return 0;

    }

    int matrix[MAX_SIZE][MAX_SIZE] = {0};

    for (int i = 0; i < size; i++) 
    {

        for (int j = 0; j < size; j++)
        {

            std::cin >> matrix[i][j];
        }
    }

    std::cout << isEquivalenceRelation(matrix,size);

    return 0;

}
