#include <iostream>

const int SPECIAL_VALUE = 0.393701;

int main()
{
    
    double cm = 0;

    std::cin >> cm;

    double inches = cm * SPECIAL_VALUE;

    std::cout << cm << " cm is equal to " << inches << " inches." << std::endl;

    return 0;

}

