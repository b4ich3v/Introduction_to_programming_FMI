// Въвежа се цяло число. Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.

#include <iostream>

int main()
{
	int grade = 0;
	std::cin >> grade;

	bool isValidGrade = (grade >= 2 && grade <= 6);

	std::cout << isValidGrade << std::endl;

	return 0;

}
