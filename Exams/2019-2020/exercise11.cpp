#include <iostream>

bool AnalyzeArr(int arr[], int length)
{

    if (arr == nullptr || length < 0) 
    {

        return false;

    }

    int count = 0;

    for (int i = 0; i < length; i++)
    {

        if (arr[i] == i)
        {

            count++;

        }

    }

    if (count >= 2) 
    {

        return true;

    }
    else
    {

        return false;

    }

}


int main()
{


    int arr[] = { 0, 1 ,31, 21 };
    std::cout << AnalyzeArr(arr, 4);

    return 0;

}
