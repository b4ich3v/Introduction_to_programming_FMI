// Да се напише програма, която приема цяло положително число n (n>=2) и след това n цели числа. 
// Да се отпечатат най-голямато и второто по големина.

#include <iostream>

int main()
{

    int number = 0;
    std::cin >> number;

    if (number < 2) 
    {

        std::cout << "The number must be at least 2" << std::endl;
        return 0;

    }

    int max1 = INT_MIN, max2 = INT_MIN;  

    for (int i = 0; i < number; ++i)
    {

        int numbers;
        std::cin >> numbers;

        if (numbers > max1) 
        {

            max2 = max1;
            max1 = numbers;

        }
        else if (numbers > max2 && numbers != max1) 
        {

            max2 = numbers;

        }

    }

    std::cout << "Largest: " << max1 << ", Second largest: " << max2 << std::endl;

    return 0;

}
