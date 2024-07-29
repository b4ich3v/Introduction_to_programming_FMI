#include <iostream>

int main() 
{

    char ch = 'а';
    std::cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
       
        if (ch >= 'a' && ch <= 'z') 
        {
            
            char upperCh = ch - 'a' + 'A';
            std::cout << "The uppercase version is: " << upperCh << std::endl;

        }
        else if (ch >= 'A' && ch <= 'Z') 
        {
           
            char lowerCh = ch - 'A' + 'a';
            std::cout << "The lowercase version is: " << lowerCh << std::endl;

        }

        char lowerCh = (ch >= 'A' && ch <= 'Z') ? (ch - 'A' + 'a') : ch; 

        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
        {

            std::cout << ch << " is a vowel." << std::endl;

        }
        else 
        {

            std::cout << ch << " is a consonant." << std::endl;

        }

    }
    else 
    {
        
        std::cout << "Invalid character." << std::endl;

    }

    return 0;

}

