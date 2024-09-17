/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 3
*
*/

#include <iostream>

const int MAX_LENGTH = 1000; // Defines the maximum length of the character string that can be entered.

void swap(char& a, char& b) // A helper function that swaps the values ??of two variables.
{
    char temp = a;
    a = b;
    b = temp;
}

void sortingFunc(char* str, int size) // It is used to sort the character string in ascending order using a selection sort algorithm.
{

    for (int step = 0; step < size - 1; step++)
    {
        int minIdx = step;

        for (int i = step + 1; i < size; i++)
        {
            if (str[i] < str[minIdx])
                minIdx = i;
        }
        swap(str[minIdx], str[step]);
    }

}

int dimOfString(char* str, int length) // Calculates the length of a character string by counting the characters until it reaches the terminating character '\0'.
{

    while (str[length] != '\0')
    {
        length++;
    }

    return length;

}

bool permutation(char* str, int length) // Used to generate the next permutation of the character string using the next permutation algorithm
{

    int i = length - 2;
    while (i >= 0 && str[i] >= str[i + 1]) // Iterates the string backwards, finds the first pair (i, i+1) for which str[i] < str[i+1]. It then finds the largest number j such that str[j] > str[i]. Swaps str[i] and str[j].
    {
        i--;
    }

    if (i < 0)
    {
        return false;
    }

    int j = length - 1;
    while (str[j] <= str[i])
    {
        j--;
    }

    swap(str[i], str[j]); // Swaps the elements to the left of i and to the right of i.

    int left = i + 1;
    int right = length - 1;

    while (left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }

    return true; // Returns true if there is a next permutation, and false otherwise.

}

bool isNValid(int n) // Validation.
{
    return n > 0;
}

int main()
{

    char str[MAX_LENGTH + 1]; // We add the terminating zero
    std::cin >> str;
    int length = 0;

    int n;
    std::cin >> n;

    if (isNValid(n))
    {

        length = dimOfString(str, length);
        sortingFunc(str, length);

        for (int i = 0; i < n; i++) // We use a loop to output n permutations, calling the permutation function at each step.
        {
            std::cout << str << std::endl;
            permutation(str, length);
        }

    }

    else
    {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;

}
