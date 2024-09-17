/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 4
*
*/

#include <iostream>

const int MAX_SIZE = 100;

int longestLengthOfSequence(int matrix[MAX_SIZE][MAX_SIZE], int rows, int i, int j, int previousElement) 
{
                                       // We use recursion to find the length of an increasing subsequence starting at a particular element in the array.
    int len = 1;

    if (i < 0 || i >= rows || j < 0 || matrix[i][j] <= previousElement)
    {
        return 0;
    }

    int len1 = 1 + longestLengthOfSequence(matrix, rows, i + 1, j, matrix[i][j]); // On each recursive call, it checks in the eight possible directions (up, down, left, right,
                                                                                  // top-right, top-left, bottom-right, and bottom-left) and continues recursively searching in them.
    if (len1 > len)
    {
        len = len1;
    }
    int len2 = 1 + longestLengthOfSequence(matrix, rows, i, j + 1, matrix[i][j]);

    if (len2 > len)
    {
        len = len2;
    }
    int len3 = 1 + longestLengthOfSequence(matrix, rows, i + 1, j + 1, matrix[i][j]);

    if (len3 > len)
    {
        len = len3;
    }
    int len4 = 1 + longestLengthOfSequence(matrix, rows, i - 1, j - 1, matrix[i][j]);

    if (len4 > len)
    {
        len = len4;
    }
    int len5 = 1 + longestLengthOfSequence(matrix, rows, i - 1, j + 1, matrix[i][j]);

    if (len5 > len)
    {
        len = len5;
    }
    int len6 = 1 + longestLengthOfSequence(matrix, rows, i + 1, j - 1, matrix[i][j]);

    if (len6 > len)
    {
        len = len6;
    }
    int len7 = 1 + longestLengthOfSequence(matrix, rows, i, j - 1, matrix[i][j]);

    if (len7 > len)
    {
        len = len7;
    }
    int len8 = 1 + longestLengthOfSequence(matrix, rows, i - 1, j, matrix[i][j]);

    if (len8 > len)
    {
        len = len8;
    }

    return len; // Returns the length of the longest ascending array.

}

bool isRowsValidation(int rows) // Validation
{
    return rows > 0;
}

bool isColsValidation(int cols) // Validation
{
    return cols >= 0;
}

int main()
{

    int rows = 0;
    std::cin >> rows;

    if (isRowsValidation(rows))
    {
        int matrix[MAX_SIZE][MAX_SIZE];
        int cols[MAX_SIZE] = {};

        bool isCol = true;
        for (int i = 0; i < rows; i++)
        {
            std::cin >> cols[i];


            for (int j = 0; j < cols[i]; j++)
            {
                std::cin >> matrix[i][j];
            }

            isCol = isColsValidation(cols[i]);
            if (!isCol)
            {
                break;
            }
        }

        if (isCol)
        {

            int maxLen = 0;
            for (int i = 0; i < rows; i++) // Uses nested loops to iterate through each element in the array and calls the
            {                              // longestLengthOfSequence function to find the length of the ascending sequence starting at each element.
                for (int j = 0; j < cols[i]; j++)
                {
                    int len = longestLengthOfSequence(matrix, rows, i, j, matrix[i][j] - 1);

                    if (len > maxLen)
                    {
                        maxLen = len; // Stores the maximum length (maxLen) of all found string lengths.
                    }
                }
            }

            std::cout << maxLen << std::endl;
        }

        else
        {
            std::cout << "Invalid input" << std::endl;
        }
    }

    else
    {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;

}