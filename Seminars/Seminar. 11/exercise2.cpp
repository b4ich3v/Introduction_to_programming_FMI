// Използваме strcpy, strcmp, strlen, isalpha на готово.

#include <iostream>
#include <cstring>

#pragma warning(disable:4996)

char** splitSentence(const char* sentence, int& wordCount)
{

    wordCount = 0;

    int length = strlen(sentence);
    char** words = new char* [length / 2 + 1]; 
    char* word = new char[length + 1];
    int wordIndex = 0;

    for (int i = 0; i <= length; i++) 
    {

        if (isalpha(sentence[i])) 
        {

            word[wordIndex++] = sentence[i];

        }
        else 
        {

            if (wordIndex > 0) 
            {

                word[wordIndex] = '\0';
                words[wordCount] = new char[wordIndex + 1];
                strcpy(words[wordCount], word);
                wordCount++;
                wordIndex = 0;

            }

        }

    }

    delete[] word;
    return words;

}

void removeWord(char**& words, int& wordCount, int index) 
{

    if (index < 0 || index >= wordCount)
    {

        return;

    }

    delete[] words[index];

    for (int i = index; i < wordCount - 1; i++) 
    {

        words[i] = words[i + 1];

    }

    wordCount--;

}

void swapWords(char** words, int index1, int index2) 
{

    if (index1 < 0 || index2 < 0)
    {

        return;

    }

    char* temp = words[index1];
    words[index1] = words[index2];
    words[index2] = temp;

}

void sortWords(char** words, int wordCount)
{

    for (int i = 0; i < wordCount - 1; i++) 
    {

        for (int j = 0; j < wordCount - 1 - i; j++) 
        {

            if (strcmp(words[j], words[j + 1]) > 0) 
            {

                swapWords(words, j, j + 1);

            }

        }

    }

}

bool areAnagrams(const char* sentence1, const char* sentence2) 
{

    int wordCount1, wordCount2;

    char** words1 = splitSentence(sentence1, wordCount1);
    char** words2 = splitSentence(sentence2, wordCount2);

    if (wordCount1 != wordCount2) 
    {

        return false;

    }

    sortWords(words1, wordCount1);
    sortWords(words2, wordCount2);

    for (int i = 0; i < wordCount1; i++) 
    {

        if (strcmp(words1[i], words2[i]) != 0)
        {

            return false;

        }

    }

    return true;

}

void printWords(char** words, int wordCount) 
{

    for (int i = 0; i < wordCount; i++)
    {

        std::cout << words[i] << " ";

    }

    std::cout << std::endl;

}

int main() 
{

    char sentence[] = "Hello world this is a test";
    int wordCount;
    char** words = splitSentence(sentence, wordCount);

    std::cout << "Original words: ";
    printWords(words, wordCount);

    removeWord(words, wordCount, 2);
    std::cout << "After removing word at index 2: ";
    printWords(words, wordCount);

    swapWords(words, 0, 1);
    std::cout << "After swapping words at index 0 and 1: ";
    printWords(words, wordCount);

    char sentence1[] = "Listen";
    char sentence2[] = "Silent";

    if (areAnagrams(sentence1, sentence2)) 
    {

        std::cout << "\"" << sentence1 << "\" and \"" << sentence2 << "\" are anagrams." << std::endl;

    }
    else 
    {

        std::cout << "\"" << sentence1 << "\" and \"" << sentence2 << "\" are not anagrams." << std::endl;

    }

    for (int i = 0; i < wordCount; i++) 
    {

        delete[] words[i];

    }

    delete[] words;

    return 0;

}
