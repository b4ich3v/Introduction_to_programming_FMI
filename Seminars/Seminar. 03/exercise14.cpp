// Да се напише програма, която приема цяло положително число n и отпечатва следната пирамида от доларчета

#include <iostream>

int main()
{

    int number = 0;
    std::cin >> number;

    std::cout << std::endl;

    for (int i = 1; i <= number; i++)
    {

        for (int j = 1; j <= i; j++) 
        {

            std::cout << "$" << " "; 

        }
         
        std::cout << std::endl;

    }

    return 0;

}
