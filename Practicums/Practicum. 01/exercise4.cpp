#include <iostream>

int main()
{
    
    int totalSeconds = 0;
    std::cin >> totalSeconds;

    int days = totalSeconds / 86400;
    int remainingSeconds = totalSeconds % 86400;

    int hours = remainingSeconds / 3600;
    remainingSeconds = remainingSeconds % 3600;

    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    std::cout << totalSeconds << " seconds is equal to: " << std::endl;
    std::cout << "Days: " << days << std::endl;
    std::cout << "Hours: " << hours << std::endl;
    std::cout << "Minutes: " << minutes << std::endl;
    std::cout << "Seconds: " << seconds << std::endl;

    return 0;

}

