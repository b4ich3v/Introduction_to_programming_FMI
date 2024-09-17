/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 2
*
*/

#include <iostream>

const int MAX_LENGTH = 1000;

bool isTextValidation(char* text, int lenText)
{
	for (int i = 0; i < lenText; i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			continue;
		}

		if (text[i] >= 'a' && text[i] <= 'z')
		{
			continue;
		}

		if (text[i] >= '0' && text[i] <= '9')
		{
			continue;
		}

		if (text[i] == ' ')
		{
			continue;
		}

		return false;
	}

	return true;
}

bool isTempValidation(char* temp, int lenTemp) // Checks that the character string passed as a parameter
{                                              // contains only letters (upper and lower case), numbers, spaces,
	for (int i = 0; i < lenTemp; i++)          // and certain special characters for the isTempValidation function ('%', '@', '*', and space).
	{
		if (temp[i] >= 'A' && temp[i] <= 'Z')
		{
			continue;
		}

		if (temp[i] >= 'a' && temp[i] <= 'z')
		{
			continue;
		}

		if (temp[i] >= '0' && temp[i] <= '9')
		{
			continue;
		}

		if (temp[i] == ' ' || temp[i] == '%' || temp[i] == '@' || temp[i] == '*')
		{
			continue;
		}

		return false;
	}

	return true;
}

int dimOfString(int length, char* str) // Calculates the length of a character string by counting the characters until it reaches the terminating character '\0'.
{

	while (str[length] != '\0')
	{
		length++;
	}

	return length;

}

void matchSearch(char* text, char* temp, int lenText, int lenTemp, int idxText, int idxTemp, int& counter, int& prevFoundMatchIndex)
{

	if (idxTemp >= lenTemp && prevFoundMatchIndex != idxText) // We use indices (idxText and idxTemp) to track the current position in the two strings.
	{                                                         // When different characters are encountered, it interrupts the current search and continues
		prevFoundMatchIndex = idxText;
		counter++;
		idxTemp = 0;
		return;
	}

	if (text[idxText] != '\0') // We support the characters '*', '%', and '@' as special patterns.
	{

		if (text[idxText] == temp[idxTemp])
		{
			++idxText;
			++idxTemp;
			matchSearch(text, temp, lenText, lenTemp, idxText, idxTemp, counter, prevFoundMatchIndex);

		}

		else if (temp[idxTemp] == '*')
		{
			++idxText;
			++idxTemp;
			matchSearch(text, temp, lenText, lenTemp, idxText, idxTemp, counter, prevFoundMatchIndex);
		}

		else if (temp[idxTemp] == '%')
		{
			if ((text[idxText] >= '0' && text[idxText] <= '9'))
			{

				++idxText;
				++idxTemp;

				if (idxText == lenText - 1)
				{
					matchSearch(text, temp, lenText, lenTemp, idxText + 1, idxTemp, counter, prevFoundMatchIndex);
				}

				else if (text[idxText + 1] >= '0' && text[idxText] <= '9')
				{
					matchSearch(text, temp, lenText, lenTemp, idxText + 1, idxTemp, counter, prevFoundMatchIndex);
				}

				matchSearch(text, temp, lenText, lenTemp, idxText, idxTemp, counter, prevFoundMatchIndex);
			}
			else
			{
				return;
			}
		}

		else if (temp[idxTemp] == '@')
		{
			if ((text[idxText] >= 'A' && text[idxText] <= 'Z')
				|| (text[idxText] >= 'a' && text[idxText] <= 'z'))
			{
				++idxText;
				++idxTemp;
				matchSearch(text, temp, lenText, lenTemp, idxText, idxTemp, counter, prevFoundMatchIndex);
			}

			else
			{
				return;
			}
		}

		else
		{
			return;
		}
	}
}

int strStartSearch(char* text, char* temp, int lenText, int lenTemp, int idxText, int idxTemp, int& counter) // Searches for all possible matches between the two character strings
{                                                                                                            // using matchSearch and returns the number of matches.

	for (int i = 0; i <= lenText - lenTemp; i++)
	{
		int idxText = i;
		int idxTemp = 0;
		int prevFoundIndex = -1;
		matchSearch(text, temp, lenText, lenTemp, idxText, idxTemp, counter, prevFoundIndex);

	}

	return counter;
}

int main()
{

	char text[MAX_LENGTH] = "";
	char temp[MAX_LENGTH] = "";

	std::cin.getline(text, MAX_LENGTH);
	std::cin.getline(temp, MAX_LENGTH);



	int lenText = dimOfString(0, text);
	int lenTemp = dimOfString(0, temp);


	if (isTextValidation(text, lenText) && isTempValidation(temp, lenTemp)) // We use the functions dimOfString, isTextValidation, and isTempValidation to validate input strings.
	{                                                                       // If the input is valid, calls the strStartSearch function to perform the search and outputs the result to standard output.

		int idxText = 0;
		int idxTemp = 0;
		int counter = 0;

		std::cout << strStartSearch(text, temp, lenText, lenTemp, idxText, idxTemp, counter);
	}

	else
	{
		std::cout << "Invalid input" << std::endl;
	}

	return 0;

}

