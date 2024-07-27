// Напишете функция, която приема масив и връща масив от масиви, на който елементите му са всички непразни подмасиви на дадения.

#include <iostream>

int** generateAllSubsets(int* array, int size, int& countOfSubsets)
{

    countOfSubsets = (1 << size) - 1;
    int** result = new int*[countOfSubsets];
    int currentIndex = 0;

    for (int i = 1; i <= countOfSubsets; i++)
    {

        int currentSizeOfSubset = 0;

        for (int j = 0; j < size; j++)
        {

            if (i & (1 << j)) 
            {

                currentSizeOfSubset++;

            }

        }

        result[currentIndex] = new int[currentSizeOfSubset + 1];
        result[currentIndex][0] = currentSizeOfSubset;
        int currentPosition = 1;

        for (int j = 0; j < size; j++)
        {

            if (i & (1 << j))
            {

                result[currentIndex][currentPosition] = array[j];
                currentPosition++;

            }

        }

        currentIndex++;

    }

    return result;

}

void printAllSubsets(int** subsets, int countOfSubsets)
{

    for (int i = 0; i < countOfSubsets; i++)
    {

        int currentSizeOfSubset = subsets[i][0];

        std::cout << "{ ";

        for (int j = 1; j <= currentSizeOfSubset; j++)
        {

            std::cout << subsets[i][j] << " ";

        }

        std::cout << "} ";

    }

}

void freeSubsets(int** subsets, int countOfSubsets) 
{

    for (int i = 0; i < countOfSubsets; i++) 
    {

        delete[] subsets[i];

    }

    delete[] subsets;

}

int main()
{

    int array[] = { 1 ,2 ,3 };
    int size = 3;
    int countOfSubsets = 0;

    int** subsets = generateAllSubsets(array, size, countOfSubsets);
    printAllSubsets(subsets, countOfSubsets);
    freeSubsets(subsets, countOfSubsets);

    return 0;

}
