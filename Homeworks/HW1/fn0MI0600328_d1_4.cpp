/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Baychev
* @idnumber 0MI0600328
* @task 4
*
*/


#include <iostream>

void normalYear(int& year, int& month, int& day);
void leapYear(int& month, int& day);
void specialYear(int& month, int& day);
void nextDay(int& year, int& month, int& day);

bool DateValidation(int startYear, int endYear, int n, int startMonth, int endMonth, int startDay, int endDay);

int main()
{
	int startYear = 0;
	int startMonth = 0;
	int startDay = 0;

	int endYear = 0;
	int endMonth = 0;
	int endDay = 0;

	int counter = 1;
	int n = 0;

	std::cin >> startYear >> startMonth >> startDay;
	std::cin >> endYear >> endMonth >> endDay;
	std::cin >> n;

	if (!DateValidation(startYear, endYear, n, startMonth, endMonth, startDay, endDay))
	{
		std::cout << "Incorrect input";
		return -1;
	}

	while (!((startYear == endYear) && (startMonth == endMonth) && (startDay == endDay))) // Checking if we went to the final day
	{
		if (counter == 1)
		{
			std::cout << startYear << "-" << startMonth << "-" << startDay << " - "; // Print the first day of the interval
		}

		if (counter == n)
		{
			std::cout << startYear << "-" << startMonth << "-" << startDay << std::endl; // Print the last day of the interval
			counter = 0;
		}
		nextDay(startYear, startMonth, startDay);
		counter++;

	}
	if (counter == 1) // Checking if the last of the interval is also the first day
	{
		std::cout << startYear << "-" << startMonth << "-" << startDay << " - " << startYear << "-" << startMonth << "-" << startDay;
	}
	else
	{
		std::cout << startYear << "-" << startMonth << "-" << startDay;
	}

	return 0;

}

bool DateValidation(int startYear, int endYear, int n, int startMonth, int endMonth, int startDay, int endDay)
{
	if (startYear < 1600 || endYear > 2100 || n < 1 || n > 365)
	{
		return false;
	}

	if (startMonth <= 0 || endMonth <= 0 || startMonth > 12 || endMonth > 12)
	{
		return false;
	}

	if (startDay <= 0 || endDay <= 0)
	{
		return false;
	}

	if (startDay > 31 || endDay > 31)
	{
		return false;
	}

	if ((startMonth == 2 && startDay > 29) || (endMonth == 2 && endDay > 29))
	{
		return false;
	}
	if ((startYear < 1916 && startYear % 4 != 0 && startMonth == 2 && startDay>28)
		|| (endYear < 1916 && endYear % 4 != 0 && endMonth == 2 && endDay>28)
		) {
		return false;
	}
	else if (startYear == 1916 || endYear == 1916)
	{
		if ((startMonth == 4 && (startDay >= 1 && startDay <= 13)) || (endMonth == 4 && (endDay >= 1 && endDay <= 13)))
		{
			return false;
		}
	}
	else if (!((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) && startMonth == 2 && startDay > 28
		|| !((endYear % 4 == 0 && endYear % 100 != 0) || (endYear % 400 == 0)) && endMonth == 2 && endDay > 28
		)
	{
		return false;
	}

	if (startYear > endYear)
	{
		return false;
	}
	else if (startYear == endYear)
	{
		if (startMonth > endMonth)
		{
			return false;
		}
		else if (startMonth == endMonth)
		{
			if (startDay >= endDay)
			{
				return false;
			}
		}
	}
	return true;
}

void nextDay(int& year, int& month, int& day)
{
	if (year == 1916)
	{
		if (month == 2)
		{
			leapYear(month, day);
		}
		else if (month == 3)
		{
			specialYear(month, day);
		}
		else
		{
			normalYear(year, month, day);
		}
	}

	else if (year < 1916)
	{
		if (year % 4 == 0 && month == 2)
		{
			leapYear(month, day);
		}
		else
		{
			normalYear(year, month, day);
		}
	}

	else
	{
		if (((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) && month == 2)
		{
			leapYear(month, day);
		}
		else
		{
			normalYear(year, month, day);
		}
	}

}

void normalYear(int& year, int& month, int& day)
{

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	{
		if (day == 31)
		{
			month++;
			day = 1;
		}
		else
		{
			day++;
		}
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (day == 30)
		{
			month++;
			day = 1;
		}
		else
		{
			day++;
		}
		break;
	}
	case 2:
	{
		if (day == 28)
		{
			month++;
			day = 1;
		}
		else
		{
			day++;
		}
		break;
	}
	case 12:
	{
		if (day == 31)
		{
			year++;
			month++;
			day = 1;
		}
		else
		{
			day++;
		}
		break;
	}
	}

}

void leapYear(int& month, int& day)
{

	if (day == 29)
	{
		month++;
		day = 1;
	}
	else
	{
		day++;
	}

}
void specialYear(int& month, int& day)
{

	if (day == 31)
	{
		month++;
		day = 14;
	}
	else
	{
		day++;
	}

}