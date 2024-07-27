// Напишете функция, която приема цяло число n и цяло число k и връща дали k в двоичен запис (разглеждайки го без водещите 0-ли) е част от двоичния запис на n.

#include <iostream>

void toBinary(int number, char* binaryStr, int& len) 
{

    len = 0;

    if (number == 0) 
    {

        binaryStr[len++] = '0';
        return;

    }

    while (number > 0)
    {

        binaryStr[len++] = (number % 2) ? '1' : '0';
        number /= 2;

    }
    
    for (int i = 0; i < len / 2; i++) 
    {

        char temp = binaryStr[i];

        binaryStr[i] = binaryStr[len - i - 1];
        binaryStr[len - i - 1] = temp;

    }

}

bool containsBinary(int n, int k) 
{

    char binaryN[32];
    char binaryK[32];
    int lenN = 0;
    int lenK = 0;

    toBinary(n, binaryN, lenN);
    toBinary(k, binaryK, lenK);

    if (lenK > lenN)
    {

        return false;

    }

    for (int i = 0; i <= lenN - lenK; i++) 
    {

        bool match = true;

        for (int j = 0; j < lenK; j++)
        {

            if (binaryN[i + j] != binaryK[j]) 
            {

                match = false;
                break;

            }

        }

        if (match) 
        {

            return true;

        }

    }

    return false;

}

int main() 
{

    std::cout << containsBinary(15, 3);

    return 0;

}

