// Да се напише програма, която приема поток от числа. Числата се събират, докато не се въведе числото 0. 
// Тогава трябва да се отпечата акумулираният резултат и да програмата да приключи.

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
