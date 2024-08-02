#include <iostream>

int countOfDigits(long number)
{

    int size = 0;

    while (number != 0) 
    {

        size++;
        number /= 10;

    }

    return size;

}

void ConvertNum(long& number)
{

    int count = countOfDigits(number);

    if (count < 0 || number < 0)
    {

        std::cout << "Error";
        return;

    }

    int* digits = new int[count];

    for (int i = 0; i < count; i++)
    {

        digits[i] = number % 10;
        number /= 10;

    }

    int iter = 1;

    for (int i = 0; i < count - 1; i++)
    {

        iter *= 10;

    }

    int result = 0;

    for (int i = 0; i < count; i++)
    {

        result += digits[i] * iter;
        iter /= 10;

    }

    delete[] digits;
    digits = nullptr;
    number = result;

}

int main() 
{

    long number = 1234;
    ConvertNum(number);

    std::cout << number;

    return 0;

}
