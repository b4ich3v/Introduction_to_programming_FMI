#include <iostream>
#include <cmath> 

int main()
{
    
    double radius = 0;
    double x = 0;
    double y = 0;

    std::cin >> radius;
    std::cin >> x >> y;

    double distance = std::sqrt(x * x + y * y);

    if (distance < radius) 
    {

        std::cout << "The point is inside the circle." << std::endl;

    }
    else if (distance > radius) 
    {

        std::cout << "The point is outside the circle." << std::endl;

    }
    else 
    {

        std::cout << "The point is on the boundary of the circle." << std::endl;

    }

    return 0;

}

