#include <iostream>

bool contains(const int* array, int size, int number)
{

    if (size <= 0) 
    {

        return false;

    }

    if (array[size - 1] == number)
    {

        return true;

    }

    return contains(array, size - 1, number);

}

int main() 
{

    int array[] = { 1, 2, 3, 4, 5 };
    int size = 5;
    int number = 0;

    std::cin >> number;

    if (contains(array, size, number)) 
    {

        std::cout << "The number " << number << " is in the array." << std::endl;

    }
    else
    {

        std::cout << "The number " << number << " is not in the array." << std::endl;

    }

    return 0;

}
