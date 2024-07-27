// Напишете функция, която приема матрица NxM и матрица MxK и умножава първата матрица по втората.

#include <iostream>

const int MAX_ROWS = 100;  
const int MAX_COLS = 100;

void multiplicationOfMatrixes(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2)
{

    if (cols1 != rows2)
    {

        std::cout << "Error" << std::endl;
        return;

    }

    for (int i = 0; i < rows1; i++)
    {

        for (int j = 0; j < cols2; j++)
        {

            result[i][j] = 0;

        }

    }

    for (int i = 0; i < rows1; i++)
    {

        for (int j = 0; j < cols2; j++)
        {

            for (int k = 0; k < cols1; k++)
            {

                result[i][j] += matrix1[i][k] * matrix2[k][j];

            }

        }

    }

}

void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) 
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++) 
        {

            std::cout << matrix[i][j] << " ";

        }

        std::cout << std::endl;

    }

}

int main() 
{

    int rows1 = 0;
    int cols1 = 0;
    int rows2 = 0;
    int cols2 = 0;

    std::cin >> rows1 >> cols1;

    if (rows1 > MAX_ROWS || cols1 > MAX_COLS) 
    {

        std::cout << "Error: Matrix dimensions exceed the maximum allowed size!" << std::endl;
        return 0;

    }

    int matrix1[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < rows1; ++i) 
    {

        for (int j = 0; j < cols1; ++j) 
        {

            std::cin >> matrix1[i][j];

        }

    }

    std::cin >> rows2 >> cols2;

    if (cols1 != rows2) 
    {
        
        std::cout << "Error: The number of columns in the first matrix must equal the number of rows in the second matrix for multiplication!" << std::endl;
        return 0;
    }

    if (rows2 > MAX_ROWS || cols2 > MAX_COLS)
    {

        std::cout << "Error: Matrix dimensions exceed the maximum allowed size!" << std::endl;
        return 0;
    }

    int matrix2[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < rows2; i++)
    {

        for (int j = 0; j < cols2; j++)
        {

            std::cin >> matrix2[i][j];

        }

    }

    int result[MAX_ROWS][MAX_COLS];

    multiplicationOfMatrixes(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
    printMatrix(result, rows1, cols2);

    return 0;

}
