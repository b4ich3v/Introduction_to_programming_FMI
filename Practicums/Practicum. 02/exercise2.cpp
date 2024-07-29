#include <iostream>

int main()
{

    char ch = 'a';
    std::cin >> ch;

    switch (ch) 
    {

    case 'I':
    case 'V':
    case 'X':
    case 'L':
    case 'C':
    case 'D':
    case 'M':
        std::cout << "The ASCII code of '" << ch << "' is: " << (int)(ch) << std::endl;
        break;
    default:
        std::cout << "-1" << std::endl; 
        break;

    }

    return 0;

}

