#include <iostream>

int largestSeq(int array[] ,int N)
{

    if (array == nullptr || N < 0 )
    {

        return -1;

    }

    int maxSum = 0;
    int currSum = 0;

    for (int i = 0; i < N; i++)
    {

        while (array[i] % 2 == 0)
        {

            currSum += array[i];
            i++;

        }
        
        if (maxSum < currSum)
        {

            maxSum = currSum;

        }

        currSum = 0;

    }

    for (int i = 0; i < N; i++)
    {

        while (array[i] % 2 == 0)
        {

            currSum += array[i];
            i++;

        }

        if (maxSum == currSum)
        {

            return maxSum;
            break;

        }

        currSum = 0;

    }

    return -1;

}

int main()
{

    int array[] = { 2, 4, 3, 11, 12, 168, 144, 5, 9, 62, 98, 1 };
    int N = 12;

    std::cout << largestSeq(array, N);

    return 0;

}

