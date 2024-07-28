#include <iostream>

int countOfApp(char* string, char ch)
{

	int cout = 0;

	while (*string != '\0') 
	{

		if (*string == ch)
		{

			cout++;

		}

		string++;

	}

	return cout;

}

int main()
{

	char string[] = "My name is Yoan Baychev";
	char ch = 'a';

	std::cout << countOfApp(string, ch);

	return 0;

}
