#include <iostream>

int findElement(long arr[], int l) 
{

    if (arr == nullptr || l < 0)
    {

        return -1;

    }

    int index = 0;

    while (index != l - 1) 
    {

        int average = (arr[index] + arr[index + 2]) / 2;

        if (arr[index + 1] > average) 
        {

            return arr[index + 1];
            break;

        }

        index++;

    }

    return -1;
       
}

int main() 
{

    long arr[] = { 2, 3, 17, 8, 1, 9 };
    int size = 6;

    std::cout << findElement(arr, size);

    return 0;

}
