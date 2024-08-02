#include <iostream>

int getCountOfDigits(long number) 
{

    int count = 0;

    while (number != 0) 
    {

        number /= 10;
        count++;

    }

    return count;

}

int* getDigits(long number, int count) 
{

    int* digits = new int[count];

    for (int i = 0; i < count; i++) 
    {

        digits[count - i - 1] = number % 10;
        number /= 10;

    }

    return digits;

}

int AnalyzeNum(long N) 
{

    if (N < 0) 
    {

        return -1;

    }

    int countOfDigits = getCountOfDigits(N);

    if (countOfDigits == 0) 
    {

        return -1;

    }

    int* digits = getDigits(N, countOfDigits);
    int digitCount[10] = { 0 };

    for (int i = 0; i < countOfDigits; i++) 
    {

        digitCount[digits[i]]++;

    }

    int result = -1;

    for (int i = 0; i < countOfDigits; i++) 
    {

        int current = digits[i];
        int smallerCount = 0;
        int largerCount = 0;

        for (int j = 0; j < 10; j++) 
        {

            if (j < current)
            {

                smallerCount += digitCount[j];

            }
            else if (j > current)
            {

                largerCount += digitCount[j];

            }

        }

        if (smallerCount == largerCount)
        {

            result = current;
            break;

        }

    }

    delete[] digits;
    return result;

}

int main() 
{

    long N = 314;
    std::cout << AnalyzeNum(N) << std::endl;

    N = 442;
    std::cout << AnalyzeNum(N) << std::endl;

    N = 546214;
    std::cout << AnalyzeNum(N) << std::endl;

    return 0;

}

