#include <iostream>

int main() 
{
   
    int number = 0;
    std::cin >> number;

    switch (number)
    {

    case 1: std::cout << "I" << std::endl; break;
    case 2: std::cout << "II" << std::endl; break;
    case 3: std::cout << "III" << std::endl; break;
    case 4: std::cout << "IV" << std::endl; break;
    case 5: std::cout << "v" << std::endl; break;
    case 6: std::cout << "VI" << std::endl; break;
    case 7: std::cout << "VII" << std::endl; break;
    case 8: std::cout << "VIII" << std::endl; break;
    case 9: std::cout << "IX" << std::endl; break;
    default: std::cout << "Error" << std::endl; return 0; break;

    }

    return 0;

}

