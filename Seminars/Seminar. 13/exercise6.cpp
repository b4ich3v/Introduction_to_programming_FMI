#include <iostream>

bool binarySearch(const int* array, int left, int right, int number)
{
    
    if (left > right) 
    {

        return false;

    }

    int middle = left + (right - left) / 2;

    if (array[middle] == number) 
    {

        return true;

    }

    if (array[middle] > number) 
    {

        return binarySearch(array, left, middle - 1, number);

    }

   
    return binarySearch(array, middle + 1, right, number);

}

int main() 
{

    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int size = 10;
    int number = 0;

    std::cin >> number;

    if (binarySearch(array, 0, size - 1, number))
    {

        std::cout << "The number " << number << " is in the array." << std::endl;

    }
    else 
    {

        std::cout << "The number " << number << " is not in the array." << std::endl;

    }

    return 0;

}
