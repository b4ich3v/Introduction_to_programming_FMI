#include <iostream>

bool isEven(int number)
{

    int mask = 1;
    return !((number & mask) == mask);

}

int main() 
{

    std::cout << isEven(3);

    return 0;

}
