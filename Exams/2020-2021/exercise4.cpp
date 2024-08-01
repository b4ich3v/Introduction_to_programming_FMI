#include <iostream>

int* countletters(int array1[], int array2[], int N)
{

    if (array1 == nullptr || array2 == nullptr || N < 0) 
    {

        return nullptr;

    }

    int countOfUpper = 0;
    int countOfLower = 0;

    for (int i = 0; i < N; i++)
    {

        if ((array1[i] + array2[i]) >= 97 && (array1[i] + array2[i]) <= 122) 
        {

            countOfLower++;

        }

        if ((array1[i] + array2[i]) >= 65 && (array1[i] + array2[i]) <= 90)
        {

            countOfUpper++;

        }

    }

    int* toReturn = new int[2];
    toReturn[0] = countOfUpper;
    toReturn[1] = countOfLower;

    return toReturn;

}

int main() 
{

    int array1[] = { 3, 5, 11, 2, 9 };
    int array2[] = { 1, 4, 32, 71, 5 };

    int* result = countletters(array1, array2, 5);

    std::cout << "{" << result[0] << ",";
    std::cout << result[1] << "}";

    delete[] result;

    return 0;

}
