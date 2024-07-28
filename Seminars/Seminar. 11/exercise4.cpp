// Използваме strcpy, strcmp, strlen, strcat на готово.

#include <iostream>
#include <cstring>

#pragma warning(disable:4996)

const int MAX_TEXT_LENGTH = 2048;
const int MAX_WORDS = 500; 

void splitTextIntoWords(const char* text, char** words, int& wordCount) 
{

    wordCount = 0;
    int length = strlen(text);
    int start = 0;

    for (int i = 0; i <= length; i++)
    {

        if (text[i] == ' ' || text[i] == '\0') 
        {

            int wordLength = i - start;
            if (wordLength > 0)
            {

                words[wordCount] = new char[wordLength + 1];
                strncpy(words[wordCount], text + start, wordLength);
                words[wordCount][wordLength] = '\0';
                wordCount++;

            }

            start = i + 1;

        }

    }

}

void censorWord(char** words, int wordCount, int index) 
{

    if (index >= 0 && index < wordCount) 
    {

        delete[] words[index];
        words[index] = new char[2];
        words[index][0] = '*';
        words[index][1] = '\0';

    }

}

void uncensorWord(char** words, int wordCount, int index, const char* originalWord) 
{

    if (index >= 0 && index < wordCount) 
    {

        delete[] words[index];
        words[index] = new char[strlen(originalWord) + 1];
        strcpy(words[index], originalWord);

    }

}

void changeWord(char** words, int wordCount, int index, const char* newWord) 
{

    if (index >= 0 && index < wordCount)
    {

        delete[] words[index];
        words[index] = new char[strlen(newWord) + 1];
        strcpy(words[index], newWord);

    }

}

char* createTextFromWords(char** words, int wordCount)
{

    int totalLength = 0;

    for (int i = 0; i < wordCount; i++)
    {

        totalLength += strlen(words[i]) + 1; 

    }

    char* result = new char[totalLength];
    result[0] = '\0';

    for (int i = 0; i < wordCount; i++) 
    {

        strcat(result, words[i]);
        if (i < wordCount - 1) 
        {

            strcat(result, " ");

        }

    }

    return result;

}

int main()
{

    char text[MAX_TEXT_LENGTH] = "Hello my 320 friends how are you";
    char* words[MAX_WORDS];
    int wordCount = 0;

    splitTextIntoWords(text, words, wordCount);

    std::cout << createTextFromWords(words, wordCount) << std::endl;

    censorWord(words, wordCount, 2);
    std::cout << createTextFromWords(words, wordCount) << std::endl;

    censorWord(words, wordCount, 4);
    std::cout << createTextFromWords(words, wordCount) << std::endl;

    uncensorWord(words, wordCount, 2, "320");
    std::cout << createTextFromWords(words, wordCount) << std::endl;

    changeWord(words, wordCount, 3, "enemies");
    std::cout << createTextFromWords(words, wordCount) << std::endl;

    for (int i = 0; i < wordCount; i++) 
    {

        delete[] words[i];

    }

    return 0;

}
