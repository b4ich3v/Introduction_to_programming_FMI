#include <iostream>
#include <algorithm> 

int main() 
{

    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;

    std::cin >> a >> b >> c >> d;

    int maxValue = 0;
    int minValue = 0;

    if (a > c)
    {

        maxValue = a;

    }
    else
    {

        maxValue = c;

    }

    if (b < d)
    {

        maxValue = b;

    }
    else
    {

        maxValue = d;

    }

    double maxStart = maxValue;
    double minEnd = minValue;

    if (maxStart <= minEnd) 
    {

        std::cout << "The intervals [" << a << ", " << b << "] and [" << c << ", " << d << "] intersect." << std::endl;

    }
    else
    {
        std::cout << "The intervals [" << a << ", " << b << "] and [" << c << ", " << d << "] do not intersect." << std::endl;

    }

    return 0;

}

