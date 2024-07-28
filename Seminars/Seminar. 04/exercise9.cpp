#include <iostream>

bool areOnTheCircle(int a, int b, int c, int d) 
{

	int xA = a;
	int yA = b;

	int xB = c;
	int yB = d;
	
	int lenAPower2 = xA * xA + yA * yA;
	int lenBPower2 = xB * xB + yB * yB;

	return lenAPower2 == lenBPower2;

}

int main()
{

	std::cout << areOnTheCircle(1, 0, 1, 0);

	return 0;

}
