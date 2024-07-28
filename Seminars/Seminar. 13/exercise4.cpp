#include <iostream>

int sumArray(const int* array, int size)
{
    
    if (size <= 0) 
    {

        return 0;

    }

    
    return array[size - 1] + sumArray(array, size - 1);

}

int main()
{

    int array[] = { 1, 2, 3, 4, 5 };
    int size = 5;

    int result = sumArray(array, size);

    std::cout << result << std::endl;

    return 0;

}
