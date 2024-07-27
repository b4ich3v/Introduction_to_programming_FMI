// Напишете функция, която по подадено цяло число n и цяло число k и връща числото, което е "закодирано" в последните k бита на n.

#include <iostream>

int codedInKbits(int n, int k) 
{

	int mask = (1 << k) - 1;

	return n & mask;

}

int main()
{

	std::cout << codedInKbits(189, 4);

	return 0;

}
