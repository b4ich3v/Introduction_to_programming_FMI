// Използваме strcpy, strcmp, snprintf на готово.

#include <iostream>
#include <cstring>

#pragma warning(disable:4996)

const int MAX_PLAYERS = 10;
const int NAME_LENGTH = 1024;

char playerNames[MAX_PLAYERS][NAME_LENGTH];
int playerPoints[MAX_PLAYERS];
int numPlayers = 0;

void addPoints(const char* name, int pointsToAdd) 
{

    for (int i = 0; i < numPlayers; ++i)
    {

        if (strcmp(playerNames[i], name) == 0) 
        {

            playerPoints[i] += pointsToAdd;
            return;

        }

    }

    if (numPlayers < MAX_PLAYERS) 
    {

        strncpy(playerNames[numPlayers], name, NAME_LENGTH);
        playerNames[numPlayers][NAME_LENGTH - 1] = '\0'; 
        playerPoints[numPlayers] = pointsToAdd;
        numPlayers++;

    }
    else 
    {

        std::cout << "No more space for new players.\n";

    }

}

void sortPlayers() 
{

    for (int i = 0; i < numPlayers - 1; i++) 
    {

        for (int j = i + 1; j < numPlayers; j++) 
        {

            if (playerPoints[i] < playerPoints[j]) 
            {
                
                int tempPoints = playerPoints[i];
                playerPoints[i] = playerPoints[j];
                playerPoints[j] = tempPoints;

                char tempName[NAME_LENGTH];
                strncpy(tempName, playerNames[i], NAME_LENGTH);
                tempName[NAME_LENGTH - 1] = '\0'; 

                strncpy(playerNames[i], playerNames[j], NAME_LENGTH);
                playerNames[i][NAME_LENGTH - 1] = '\0';

                strncpy(playerNames[j], tempName, NAME_LENGTH);
                playerNames[j][NAME_LENGTH - 1] = '\0'; 

            }

        }

    }

}

void printPlayers() 
{

    sortPlayers(); 

    for (int i = 0; i < numPlayers; i++) 
    {

        std::cout << "Name: " << playerNames[i] << ", Points: " << playerPoints[i] << std::endl;

    }

}

int main() 
{
 
    addPoints("Ivan", 10);
    printPlayers();

    addPoints("Peter", 20);
    printPlayers();

    addPoints("Ivan", 15);
    printPlayers();

    addPoints("Maria", 25);
    printPlayers();

    for (int i = 0; i < MAX_PLAYERS; i++) 
    {

        char name[NAME_LENGTH];
        snprintf(name, NAME_LENGTH, "Player%d", i + 1);
        addPoints(name, i * 10);

    }

    printPlayers();
    addPoints("ExtraPlayer", 100);
    printPlayers();

    return 0;

}
