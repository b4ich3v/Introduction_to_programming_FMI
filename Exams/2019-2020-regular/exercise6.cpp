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

int NumCalc(long num, int k, int l)
{

    int originalNumber = num;
    int size = countOfDigits(num);

    if (k > size || l > size || k < 0 || l < 0 || size < 0)
    {

        return -1;

    }

    int iterK = size - k;
    int newK = 0;

    int iterL = size - l;
    int newL = 0;

    for (int i = 0; i < iterK; i++)
    {

        num /= 10;

    }

    newK = num % 10;
    num = originalNumber;

    for (int i = 0; i < iterL; i++)
    {

        num /= 10;

    }

    newL = num % 10;

    int sum = newK + newL;
    return sum;

}

int main() 
{

    long number = 123415;
    int k = 2;
    int l = 3;

    std::cout << NumCalc(number, k, l);

    return 0;

}
