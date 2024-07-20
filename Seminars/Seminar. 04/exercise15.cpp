// Да се напише функция, която приема три естествени числа a и b и k и 
// връща броя на числата в интервата [a...b], които имат точно k различни прости делитела.

#include <iostream>

int countDistinctPrimeFactors(int number) 
{

    int count = 0;

    for (int i = 2; i <= sqrt(number); ++i) 
    {

        if (number % i == 0)
        {

            count++;

            while (number % i == 0)
            {

                number /= i;

            }

        }

    }

    if (number > 1)
    {

        count++;

    }

    return count;

}

int countNumbersWithKPrimeFactors(int a, int b, int k)
{

    int count = 0;

    for (int i = a; i <= b; i++) 
    {

        if (countDistinctPrimeFactors(i) == k)
        {

            count++;

        }

    }

    return count;

}

int main()
{

	std::cout << countNumbersWithKPrimeFactors(19, 42 ,3);

	return 0;

}
