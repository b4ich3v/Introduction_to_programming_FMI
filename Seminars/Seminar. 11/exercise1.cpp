#include <iostream>

int** players = nullptr;
int* numPlayers = nullptr;
int* totalPoints = nullptr;
int* teamIndices = nullptr;
int numTeams = 0;

void initializeTeam(int teamIndex, int playerCount)
{
   
    players[teamIndex] = new int[playerCount];


    for (int i = 0; i < playerCount; i++)
    {

        players[teamIndex][i] = 0;

    }

    numPlayers[teamIndex] = playerCount;
    totalPoints[teamIndex] = 0;

}

void addPoints(int teamIndex, int playerIndex, int points)
{

    if (playerIndex >= 0 && playerIndex < numPlayers[teamIndex])
    {

        totalPoints[teamIndex] -= players[teamIndex][playerIndex];
        players[teamIndex][playerIndex] += points;
        totalPoints[teamIndex] += players[teamIndex][playerIndex];

    }

}

void printTeams()
{

    for (int i = 0; i < numTeams; i++)
    {

        int teamIndex = teamIndices[i];

        std::cout << "Team " << teamIndex + 1 << " (Total Points: " << totalPoints[teamIndex] << "): ";

        for (int j = 0; j < numPlayers[teamIndex]; j++)
        {

            std::cout << players[teamIndex][j] << " ";

        }

        std::cout << std::endl;

    }

}

void sortTeams()
{

    for (int i = 0; i < numTeams - 1; i++)
    {

        for (int j = 0; j < numTeams - 1 - i; j++)
        {

            if (totalPoints[teamIndices[j]] < totalPoints[teamIndices[j + 1]])
            {

                int temp = teamIndices[j];
                teamIndices[j] = teamIndices[j + 1];
                teamIndices[j + 1] = temp;

            }

        }

    }

}

int main()
{

    std::cout << "Enter number of teams: ";
    std::cin >> numTeams;

    players = new int* [numTeams];
    numPlayers = new int[numTeams];
    totalPoints = new int[numTeams];
    teamIndices = new int[numTeams];

    for (int i = 0; i < numTeams; i++)
    {

        int playerCount;

        std::cout << "Enter number of players for team " << i + 1 << ": ";

        std::cin >> playerCount;
        initializeTeam(i, playerCount);
        teamIndices[i] = i;

    }

    while (true)
    {

        int teamIndex, playerIndex, points;
        std::cout << "Enter team index, player index, and points to add (or -1 to quit): ";
        std::cin >> teamIndex;

        if (teamIndex == -1)
        {

            break;

        }

        std::cin >> playerIndex >> points;

        addPoints(teamIndex, playerIndex, points);
        sortTeams();
        printTeams();

    }

    for (int i = 0; i < numTeams; i++)
    {

        delete[] players[i];

    }

    delete[] players;
    delete[] numPlayers;
    delete[] totalPoints;
    delete[] teamIndices;

    return 0;

}
