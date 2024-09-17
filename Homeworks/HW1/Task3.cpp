/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 3
*
*/

#include <iostream>

bool threeEqualElementsFunc(char arrayOfBalls[], int& ballCounter, int& index)
{

    bool isEmpty = true;

    for (int i = 0; i < ballCounter; ++i)  // Check if the array is empty
    {

        if (arrayOfBalls[i] >= 'a' && arrayOfBalls[i] <= 'z')
        {

            isEmpty = false;
            break;

        }

    }

    if (isEmpty)
    {

        return false;

    }

    int rightCounter = 0;
    int leftCounter = 0;

    for (int i = index; i < ballCounter - 1; i++)  // Checking the right side
    {

        if (arrayOfBalls[index] == arrayOfBalls[i + 1])
        {

            rightCounter++;

        }
        else
        {

            break;

        }

    }

    for (int i = index; i > 0; i--)   // Checking the left side
    {

        if (arrayOfBalls[index] == arrayOfBalls[i - 1])
        {

            leftCounter++;

        }
        else
        {

            break;

        }

    }

    int mainCounter = rightCounter + leftCounter + 1;

    if (mainCounter >= 3)  // Deleting the corresponding elements
    {

        int newArrayOfBallsIndex = 0;
        char newArrayOfBalls[ballCounter];

        for (int j = 0; j < index - leftCounter; j++)
        {

            newArrayOfBalls[newArrayOfBallsIndex++] = arrayOfBalls[j];

        }
        for (int j = index + rightCounter + 1; j < ballCounter; j++)
        {

            newArrayOfBalls[newArrayOfBallsIndex++] = arrayOfBalls[j];

        }

        ballCounter = newArrayOfBallsIndex;

        for (int i = 0; i < ballCounter; ++i)
        {

            arrayOfBalls[i] = newArrayOfBalls[i];

        }

        index -= leftCounter;
        return true;

    }

    return false;

}

void shootingFunc(int position, char color, char arrayOfBalls[], int& ballCounter)
{

    char newArrayOfBalls[ballCounter + 1];
    int index = position + 1;

    int newBallCounter = 0;

    for (int i = 0; i <= position; i++)  // Insert elements up to position
    {

        newArrayOfBalls[i] = arrayOfBalls[i];
        newBallCounter++;

    }

    newArrayOfBalls[index] = color;  // Insert the new ball
    newBallCounter++;

    for (int i = position + 1; i < ballCounter; i++)  // Copy remaining elements
    {

        newArrayOfBalls[newBallCounter++] = arrayOfBalls[i];

    }

    ballCounter = newBallCounter;

    for (int i = 0; i < ballCounter; i++)  // Copy back to original array
    {

        arrayOfBalls[i] = newArrayOfBalls[i];

    }

    int specialIndex = index;
    while (threeEqualElementsFunc(arrayOfBalls, ballCounter, specialIndex))
    {
        // Keep checking for groups of 3 or more after shooting
    }

}

void afterShootingFunc(int numberOfShootings, char arrayOfBalls[], int& ballCounter)
{

    for (int i = 0; i < numberOfShootings; i++)
    {

        int index;
        char color;
        std::cin >> index >> color;

        shootingFunc(index, color, arrayOfBalls, ballCounter);

    }

    if (ballCounter > 0 && arrayOfBalls[0] >= 'a' && arrayOfBalls[0] <= 'z')
    {

        for (int i = 0; i < ballCounter; i++)
        {

            std::cout << arrayOfBalls[i] << " ";

        }

    }
    else
    {

        std::cout << -1;

    }

}

int main()
{

    const int SIZE_BALLS = 256;
    const int SIZE_SHOOTINGS = 127;
    int n;
    char arrayOfBalls[SIZE_BALLS];

    std::cin >> n;

    if (n > SIZE_BALLS)
    {

        std::cout << "Incorrect Input";

    }
    else
    {

        for (int i = 0; i < n; ++i)
        {

            std::cin >> arrayOfBalls[i];

        }

        int numberOfShootings;
        std::cin >> numberOfShootings;

        if (numberOfShootings > SIZE_SHOOTINGS)
        {

            std::cout << "Incorrect Input";

        }
        else
        {

            afterShootingFunc(numberOfShootings, arrayOfBalls, n);

        }

    }

    return 0;

}
