// Да се напише функция, която приема стринг и връща нов стринг с точна големина, 
// който е съставен от малките латински букви на подадения, но в сортиран вид.

#include <iostream>

bool isLower(char ch)
{

    return ch >= 'a' && ch <= 'z';

}

unsigned getLowerCount(const char* string)
{
    if (!string)
    {

        return 0;

    }

    unsigned count = 0;

    while (*string)
    {

        if (isLower(*string))
        {

            count++;

        }

        string++;

    }

    return count;

}

void concatLettersAtBack(char* string, unsigned firstIndex, char ch, int count)
{

    for (int i = 0; i < count; i++) 
    {

        string[firstIndex + i] = ch;

    }
       
}

char* sortLower(const char* string)
{

    int lower = getLowerCount(string);
    char* result = new char[lower + 1];

    constexpr unsigned alphabet_size = 26;
    constexpr char first_letter = 'a';

    result[lower] = '\0';

    unsigned resultIndex = 0;
    int countLower[alphabet_size]{ 0 };

    while (*string)
    {

        if (isLower(*string))
        {

            countLower[*string - 'a']++;

        }
            
        string++;

    }

    for (int i = 0; i < alphabet_size; i++)
    {

        concatLettersAtBack(result, resultIndex, first_letter + i, countLower[i]);
        resultIndex += countLower[i]; 

    }

    return result;

}

int main()
{

    char* string = sortLower("zAzAbbzazQc");

    std::cout << string << std::endl;
    delete[] string;

    return 0;

}
