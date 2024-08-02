#include <iostream>

double mySin(double x, long n)
{

    double sum = 0.0;
    double term = x; 
    long long factorial = 1; 
    double xSquared = x * x; 

    for (long k = 0; k < n; k++) 
    {

        if (k > 0) 
        {
            
            term *= -1 * xSquared / ((2 * k) * (2 * k + 1));

        }

        sum += term;

    }

    return sum;

}

int main() 
{

    double x = 1.0; 
    long n = 10;    

    std::cout << mySin(x, n) << std::endl;

    return 0;

}
