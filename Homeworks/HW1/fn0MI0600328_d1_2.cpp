/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 2
*
*/
#include <iostream>

void inputArray(int n, int  array[]);

void bubbleSort(int array[], int n);

int main()
{

	const int SIZE = 1000;
	int array[SIZE] = {};
	int n = 0;

	std::cin >> n;

	if (n < 1 || n > 1000) // Validation
	{

		std::cout << "Incorrect input";
		return -1;

	}

	inputArray(n, array);

	for (int i = 0; i < n; i++)// Validate if people give correct answers
	{

		if (array[i] < 0 || array[i] > 1000)
		{

			std::cout << "Incorrect input";
			return -1;

		}

	}

	bubbleSort(array, n);

	int minCitizens = array[0] + 1;
	int answer = array[0];
	int counter = array[0];

	for (int i = 1; i < n; i++)
	{

		if (answer != array[i]) // If new person's answer is different from previous answer,
			//then we assume that we have new answer plus one more people
		{

			minCitizens = minCitizens + array[i] + 1;
			answer = array[i];
			counter = array[i];

		}
		else if (counter == 0) // If the answer is the same and the counter is zero,
			//we add again the same amound of peaople
		{

			counter = answer;
			minCitizens = minCitizens + array[i] + 1;

		}
		else 
		{  // If counter is different than zero we assume that someone
			counter--;

		}

	}

	std::cout << minCitizens;
	return 0;

}

void inputArray(int n, int  array[])
{

	for (int i = 0; i < n; i++)
	{

		std::cin >> array[i];

	}

}

void bubbleSort(int array[], int n)
{

	int i = 0;
	int j = 0;
	bool swapped;

	for (i = 0; i < n - 1; i++)
	{
		swapped = false;

		for (j = 0; j < n - i - 1; j++)
		{

			if (array[j] > array[j + 1])
			{

				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
				swapped = true;

			}

		}

		if (swapped == false)
			break;

	}

}