// Напишете функция, която приема 6 координати (3 точки) и връща обиколката на триъгълника по тези точки.

#include <iostream>

double distance(int x1, int y1, int x2, int y2) 
{

    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

}

double trianglePerimeter(int x1, int y1, int x2, int y2, int x3, int y3) 
{

    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);

    return side1 + side2 + side3;

}

int main()
{

	std::cout << trianglePerimeter(1, 1, 4, 7, 0, 10);

	return 0;

}
