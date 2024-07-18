// Да се напише програма, която приема 2 числa - a и b и отпечатва всички прости числа в интервала [a, b].

#include <iostream>

int main() 
{

    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    if (a <= 0 || b <= 0) 
    {

        std::cout << "Invalid numbers" << std::endl;
        return 0;

    }

    if (a == b)
    {

        bool isPrime = true;

        for (int i = 2; i < a; i++)
        {

            if (a % i == 0)
            {

                isPrime = false;
                break;

            }

        }

        if (isPrime)
        {

            std::cout << a << std::endl;

        }
        else
        {

            return 0;

        }

    }
    else if (a < b)
    {

        for (int i = a; i <= b; i++)
        {

            bool isPrime = true;

            for (int j = 2; j < i; j++)
            {

                if (i % j == 0)
                {

                    isPrime = false;
                    break;

                }

            }

            if (isPrime)
            {

                std::cout << i << " ";

            }

        }

    }
    else
    {

        for (int i = b; i <= a; i++)
        {

            bool isPrime = true;

            for (int j = 2; j < i; j++)
            {

                if (i % j == 0)
                {

                    isPrime = false;
                    break;

                }

                if (isPrime)
                {

                    std::cout << i << " ";

                }

            }

        }

    }

    return 0;

}
