#include <iostream>

int sizeOfString(char* string)
{

	int size = 0;

	while (*string != '\0') 
	{

		string++;
		size++;

	}

	return size;

}

void swap(char& a, char& b)
{

	char temp = a;
	a = b;
	b = temp;

}

void reversedString(char*& string)
{

	int size = sizeOfString(string);

	for (int i = 0; i < size / 2; i++)
	{

		swap(string[i], string[size - i - 1]);

	}

}

char* revandreplace(char* string) 
{

	int size = sizeOfString(string);

	if (string == nullptr || size < 0)
	{

		return nullptr;

	}

	reversedString(string);

	for (int i = 0; i < size; i++)
	{

		if (string[i] == 'e') 
		{

			string[i] = '!';

		}

		if (string[i] == 'y')
		{

			string[i] = '*';

		}

	}

	return string;

}

int main()
{

	char string[] = "I left you alone";
	std::cout << revandreplace(string);

	return 0;

}
