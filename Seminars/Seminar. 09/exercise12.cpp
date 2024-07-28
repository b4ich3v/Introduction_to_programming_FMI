#include <iostream>

const int MAX_WORDS = 100;
const int MAX_WORD_LENGTH = 100;

int customStrlen(char* string)
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

int customStrcmp(const char* string1, const char* string2)
{

    while (*string1 != '\0' && *string2 != '\0')
    {

        if (*string1 != *string2)
        {

            return *string1 - *string2;

        }

        string1++;
        string2++;

    }


    return *string1 - *string2;

}

char* customStrcpy(char* destination, const char* source)
{

    char* originalDestination = destination;

    while (*source != '\0')
    {

        *destination = *source;
        destination++;
        source++;

    }

    *destination = '\0';

    return originalDestination;

}

char toLower(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {

        return ch - 'A' + 'a';

    }

    return ch;

}

void toLowerCase(char* string)
{

    for (int i = 0; string[i]; i++)
    {

        string[i] = toLower(string[i]);

    }

}

bool isWhitespaceOrPunctuation(char ch)
{

    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' ||
        ch == '.' || ch == ',' || ch == ';' || ch == ':' ||
        ch == '!' || ch == '?' || ch == '-' || ch == '\'' ||
        ch == '"' || ch == '(' || ch == ')' || ch == '[' ||
        ch == ']' || ch == '{' || ch == '}' || ch == '/' ||
        ch == '\\' || ch == '<' || ch == '>' || ch == '|');

}

void cleanString(char* string)
{

    int writePosition = 0;
    bool inSpace = false;

    for (int readPosition = 0; string[readPosition]; readPosition++)
    {

        if (isWhitespaceOrPunctuation(string[readPosition]))
        {

            if (!inSpace)
            {

                string[writePosition++] = ' ';
                inSpace = true;

            }

        }
        else
        {

            string[writePosition++] = string[readPosition];
            inSpace = false;

        }

    }

    string[writePosition] = '\0';

}

const char* findLexicographicallySmallestWord(char* text)
{

    char words[MAX_WORDS][MAX_WORD_LENGTH] = { 0 };
    int wordCountSize = 0;

    int length = customStrlen(text);
    char word[MAX_WORD_LENGTH] = { 0 };
    int wordIndex = 0;

    for (int i = 0; i <= length; i++)
    {

        if (text[i] == ' ' || text[i] == '\0')
        {

            if (wordIndex > 0)
            {

                word[wordIndex] = '\0';
                customStrcpy(words[wordCountSize], word);
                wordCountSize++;
                wordIndex = 0;

            }

        }
        else
        {

            word[wordIndex++] = text[i];

        }

    }

    const char* smallestWord = words[0];

    for (int i = 1; i < wordCountSize; i++)
    {

        if (customStrcmp(words[i], smallestWord) < 0)
        {

            smallestWord = words[i];

        }

    }

    return smallestWord;

}

int main()
{

    char text[] = "Me? Why always me?";

    toLowerCase(text);
    cleanString(text);

    const char* smallestWord = findLexicographicallySmallestWord(text);

    std::cout << smallestWord << std::endl;

    return 0;

}
