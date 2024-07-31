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

void reverseTheString(char*& string)
{

    int size = sizeOfString(string);

    if (string == nullptr || size < 0)
    {

        std::cout << "Error";
        return;

    }

    for (int i = 0; i < size / 2; i++)
    {

        swap(string[i], string[size - i - 1]);

    }

}

bool doExist(char* symbols, char* word)
{

    int sizeOfSymbols = sizeOfString(symbols);
    int sizeOfWord = sizeOfString(word);

    if (symbols == nullptr || word == nullptr || sizeOfWord < 0 || sizeOfSymbols < 0)
    {

        return false;

    }

    reverseTheString(symbols);

    while (*symbols != '\0') 
    {

        while (*symbols == ' ' || *symbols == '\t')
        {

            symbols++;

        }

        if (*symbols != ' ' && *symbols != '\t' && *symbols != '\0')
        {

            int specCount = 0;

            for (int i = 0; i < sizeOfWord; i++)
            {

                specCount++;

                if (symbols[i] != word[i])
                {

                    break;

                }

            }

            if (specCount == sizeOfWord) 
            {

                return true;

            }

        }

        while (*symbols != ' ' && *symbols != '\t' && *symbols != '\0')
        {

            symbols++;

        }

    }

    return false;

}

int main() 
{

    char symbols[] = "I am Yoan Baychev!";
    char word[] = "naoY";

    std::cout << doExist(symbols, word);

    return 0;

}
