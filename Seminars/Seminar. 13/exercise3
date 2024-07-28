#include <iostream>

int power(double number, int exponent)
{

    if (exponent == 0) 
    {

        return 1;

    }
   
    if (exponent == 1) 
    {

        return number;

    }

    if (exponent > 0)
    {

        return number * power(number, exponent - 1);

    }
    else 
    {
        
        return 1 / power(number, -exponent);

    }

}

int main()
{

	std::cout << power(5, 2);

	return 0;

}
