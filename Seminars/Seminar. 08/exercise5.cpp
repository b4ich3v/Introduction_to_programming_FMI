// Напишете функция, която приема матрица NxN и връща обратната матрица (ако дадената е обратима). Ако матрицата не е обратима, да се отпечата подходящо съобщение.

#include <iostream>

const int MAX_SIZE = 100;

void swap(int& a, int& b)
{

    int temp = a;
    a = b;
    b = temp;

}

int determinant(int matrix[MAX_SIZE][MAX_SIZE], int size) 
{

    int det = 1;
    int temp[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; i++) 
    {

        for (int j = 0; j < size; j++) 
        {

            temp[i][j] = matrix[i][j];

        }

    }

    for (int i = 0; i < size; i++)
    {

        if (temp[i][i] == 0) 
        {

            bool swapped = false;

            for (int k = i + 1; k < size; k++) 
            {

                if (temp[k][i] != 0) 
                {

                    for (int j = 0; j < size; j++) 
                    {

                        swap(temp[i][j], temp[k][j]);

                    }

                    det *= -1;  
                    swapped = true;
                    break;

                }

            }
            if (!swapped) 
            {

                return 0;  

            }

        }

        for (int j = i + 1; j < size; j++) 
        {

            int factor = (int)(temp[j][i]) / temp[i][i];

            for (int k = i; k < size; k++) 
            {

                temp[j][k] -= factor * temp[i][k];

            }

        }

    }

    for (int i = 0; i < size; ++i) 
    {

        det *= temp[i][i];

    }

    return det;

}

void adjoint(int matrix[MAX_SIZE][MAX_SIZE], int adj[MAX_SIZE][MAX_SIZE], int size) 
{

    if (size == 1) 
    {

        adj[0][0] = 1;
        return;

    }

    int sign = 1;
    int temp[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++) 
        {

            int subIndex_i = 0;

            for (int row = 0; row < size; row++) 
            {

                if (row == i) 
                {

                    continue;

                }

                int subIndex_j = 0;

                for (int col = 0; col < size; col++) 
                {

                    if (col == j) 
                    {

                        continue;

                    }

                    temp[subIndex_i][subIndex_j++] = matrix[row][col];

                }

                subIndex_i++;

            }

            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, size - 1);

        }

    }

}

bool inverseMatrix(int matrix[MAX_SIZE][MAX_SIZE], int inverse[MAX_SIZE][MAX_SIZE], int size) 
{

    int det = determinant(matrix, size);

    if (det == 0)
    {

        std::cout << "The matrix is not invertible." << std::endl;
        return false;

    }

    int adj[MAX_SIZE][MAX_SIZE];
    adjoint(matrix, adj, size);

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++) 
        {

            inverse[i][j] = adj[i][j] / (int)(det);

        }

    }

    return true;

}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size)
{

    for (int i = 0; i < size; ++i)
    {

        for (int j = 0; j < size; ++j) 
        {

            std::cout << matrix[i][j] << " ";

        }

        std::cout << std::endl;

    }

}

int main() 
{

    int size;
    std::cin >> size;

    if (size > MAX_SIZE) 
    {

        std::cout << "Error: Matrix size exceeds maximum allowed size!" << std::endl;
        return 0;

    }

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++) 
        {

            std::cin >> matrix[i][j];

        }

    }

    int inverse[MAX_SIZE][MAX_SIZE];

    if (inverseMatrix(matrix, inverse, size)) 
    {

        printMatrix(inverse, size);

    }

    return 0;

}
