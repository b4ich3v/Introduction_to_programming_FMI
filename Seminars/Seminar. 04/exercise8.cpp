#include <iostream>

int logBaseK(int n, int k)
{

    if (k <= 1) 
    {

        std::cout << "Base k must be greater than 1";
        return -1; 

    }

    int result = 0;

    while (n >= k) 
    {

        n /= k;
        result++;

    }

    return result;

}

int main()
{

	std::cout << logBaseK(90, 3);

	return 0;

}
