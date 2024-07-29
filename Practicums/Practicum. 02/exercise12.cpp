#include <iostream>

int main() 
{
    
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;
    int number5 = 0;

    std::cin >> number1 >> number2 >> number3 >> number4 >> number5;

    bool isSawtooth = true;

    if (!((number1 > number2 && number2 < number3) || (number1 < number2 && number2 > number3)))
    {

        isSawtooth = false;

    }

    if (isSawtooth) 
    {

        if (!((number2 > number1 && number2 > number3) || (number2 < number1 && number2 < number3)) ||
            !((number3 > number2 && number3 > number4) || (number3 < number2 && number3 < number4)) ||
            !((number4 > number3 && number4 > number5) || (number4 < number3 && number4 < number5))) 
        {

            isSawtooth = false;

        }

    }

    if (isSawtooth)
    {

        if (!((number5 > number4 && number4 < number3) || (number5 < number4 && number4 > number3))) 
        {

            isSawtooth = false;

        }

    }

    if (isSawtooth) 
    {

        std::cout << "yes" << std::endl;

    }
    else 
    {

        std::cout << "no" << std::endl;

    }

    return 0;

}

