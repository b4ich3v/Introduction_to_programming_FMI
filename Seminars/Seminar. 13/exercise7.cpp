#include <iostream>
#include <cstring>

bool isPalindrome(const char* string, int left, int right) 
{
    
    if (left >= right)
    {

        return true;

    }

    if (string[left] != string[right]) 
    {

        return false;

    }

    return isPalindrome(string, left + 1, right - 1);

}

int main() 
{

    char string[1024];
    std::cin.getline(string, 1024);

    int len = strlen(string);

    if (isPalindrome(string, 0, len - 1))
    {

        std::cout << "The string \"" << string << "\" is a palindrome." << std::endl;

    }
    else 
    {

        std::cout << "The string \"" << string << "\" is not a palindrome." << std::endl;

    }

    return 0;

}
