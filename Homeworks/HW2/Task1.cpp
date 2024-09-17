/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 1
*
*/

#include <iostream>

const int MAX_LENGTH = 64;

void codingFunc(char* str, char* coded) // It is used to encode the character string str into binary format and write the result to the string coded.
{

    int indexOfStr = 0;
    int indexOfCoded = 0;

    while (str[indexOfStr] != '\0')
    {
        char currentChar = str[indexOfStr];

        for (int k = 7; k >= 0; k--) // Eight block.
        {
            if ((currentChar & (1 << k)) != 0)
            {
                coded[indexOfCoded] = '1';
                coded[indexOfCoded + 1] = '0';
            }
            else
            {
                coded[indexOfCoded] = '0';
                coded[indexOfCoded + 1] = '1';
            }

            indexOfCoded = indexOfCoded + 2;
        }

        indexOfStr++;
    }

    coded[indexOfCoded] = '\0';

}

int dimOfString(char* str, int length)
{

    while (str[length] != '\0') // It is used to find the length of a character string by traversing it until the end (null terminator) is reached.
    {
        length++;
    }

    return length;

}

void toSymbol(char* binaryNumber)
{

    int length = 0;
    length = dimOfString(binaryNumber, length);

    for (int i = 0; i < length; i = i + 8)
    {
        char codedElementValue = 'a';

        for (int j = 0; j < 8 && (i + j) < length; j++) // The binary string is divided into blocks of 8 bits each, which are converted to symbols and output.
        {
            codedElementValue = (codedElementValue << 1) | (binaryNumber[i + j] - '0');
        }

        std::cout << codedElementValue;
    }

}

int main()
{
    const int eightBlockNumber = 8;
    char str[MAX_LENGTH + 1] = {};
    char* coded = new char[MAX_LENGTH * eightBlockNumber * 2 + 1]; // Declare a dynamic array coded of sufficient size
                                                                   // to store the binary representation of all characters in str.
    std::cin.getline(str, MAX_LENGTH + 1);

    codingFunc(str, coded);
    toSymbol(coded);

    delete[] coded; // Clears the dynamically allocated memory for the coded array.

    return 0;

}
