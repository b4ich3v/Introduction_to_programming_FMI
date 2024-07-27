// Да се напише функция, която приема стринг и връща нов стринг с ТОЧНА ГОЛЕМИНА, в който всички числа са цензурирани. (Всяко число е заменено с '*')

#include <iostream>

char* censorNumbers(const char* string)
{

    int len = strlen(string);
    char* censored = new char[len + 1];  

    int i = 0;
    int j = 0;

    while (i < len)
    {

        if (string[i] >= '0' && string[i] <= '9')
        {
           
            while (i < len && string[i] >= '0' && string[i] <= '9')
            {

                censored[j++] = '*';
                i++;

            }

        }
        else
        {

            censored[j++] = string[i++];

        }

    }

    censored[j] = '\0';  
    return censored;  

}

int main()
{

    const char* text = "My phone number is 123-456-7890 and my age is 30.";
    char* censoredText = censorNumbers(text);

    std::cout << censoredText << std::endl;

    delete[] censoredText;  
    return 0;

}
