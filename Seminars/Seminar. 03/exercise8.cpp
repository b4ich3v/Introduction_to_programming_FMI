#include <iostream>

int main() 
{

    int number = 1;
    int result = 0;

    while (number != 0)
    {

        std::cin >> number;
        result += number;

    }

    std::cout << result << std::endl;

    return 0;

}
