// Напишете функция, която приема матрица NxN и пресмята детерминантата й.

#include <iostream>

const int MAX_SIZE = 100;

void swap(int& a, int& b)
{

    int temp = a;
    a = b;
    b = temp;

}

double determinant(int matrix[MAX_SIZE][MAX_SIZE], int size) 
{

    double det = 1.0;
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

            double factor = (double)(temp[j][i]) / temp[i][i];

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

    double det = determinant(matrix, size);
    std::cout << det << std::endl;

    return 0;

}
