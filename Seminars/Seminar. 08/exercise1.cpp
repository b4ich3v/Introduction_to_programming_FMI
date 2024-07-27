// Напишете функция, която приема матрица NxN и транспонира матрицата.

#include <iostream>

const int MAX_SIZE = 100;  

void swap(int& a , int& b)
{

    int temp = a;
    a = b;
    b = temp;

}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
  
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            
            swap(matrix[i][j], matrix[j][i]);

        }

    }

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

    transposeMatrix(matrix, size);
    std::cout << std::endl;
    printMatrix(matrix, size);

    return 0;

}
