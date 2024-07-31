#include <iostream>

int AnalyzeArray(int arr[], int l)
{

	if (l < 0) 
	{

		return -1;

	}

	int sum = 0;


	for (int i = 0; i < l; i++)
	{

		sum += arr[i];

	}

	int currSum = 0;

	for (int i = 0; i < l; i++)
	{

		currSum += arr[i];

		if (sum - currSum == currSum) 
		{

			return 1;
			break;

		}

	}

	return 0;

}

int main() 
{

	int arr[] = { 1,6,1,0,5,199 };
	std::cout << AnalyzeArray(arr, 6);

	return 0;

}
