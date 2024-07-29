#include <iostream>

int main() 
{
    
    double length = 0;
    double width = 0;

    std::cin >> length;
    std::cin >> width;

    double perimeter = 2 * (length + width);
    double area = length * width;

    std::cout << "The perimeter of the rectangle is: " << perimeter << std::endl;
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;

}

