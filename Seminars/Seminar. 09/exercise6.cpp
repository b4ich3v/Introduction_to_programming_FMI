#include <iostream>
#include <climits> 

int customStrlen(const char* string)
{

	if (string == nullptr)
	{

		return -1;

	}

	int size = 0;

	while (*string != '\0')
	{

		string++;
		size++;

	}

	return size;

}

bool isPrefix(const char* pattern, const char* text)
{

	while (*text != '\0' && *pattern != '\0')
	{

		if (*text != *pattern) 
		{

			return false;

		}
		
		text++;
		pattern++;

	}

	return *pattern == '\0';

}

bool searchInText(const char* text, const char* pattern)
{

	int textLen = customStrlen(text);
	int patternLen = customStrlen(pattern);

	while (patternLen <= textLen)
	{

		if (isPrefix(pattern, text))
		{

			return true;

		}
	
		text++; 
		textLen--;

	}

	return false;

}

int main()
{

	char string[] = "My name is Yoan Baychev";
	char pattern[] = "Yoan";

	std::cout << searchInText(string, pattern);

	return 0;

}
