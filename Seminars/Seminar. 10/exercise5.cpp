// Напишете функция, която приема масив от цели числа и цяло число и елемент на масива. 
// Функцията да преподрежда елементите, така че всички по-малки елементи от подадения да са в ляво от него, 
// а всички по-големи - в дясно. (Забележка: Задачата да се реши с помощта на допълнителен масив 
// - същестува и решение без допълнителна памет (Hoare's partition, Lomuto partition и други), но то не се изисква)

#include <iostream>

int* updatedArray(int* array, int size, int number)
{

    if (size < 0 || array == nullptr)
    {

        std::cout << "Error" << std::endl;
        return nullptr;

    }

    int* result = new int[size];
    int index = 0;

    for (int i = 0; i < size; i++)
    {

        if (array[i] < number)
        {

            result[index] = array[i];
            index++;

        }

    }

    result[index] = number;
    index++;

    for (int i = 0; i < size; i++)
    {

        if (array[i] > number)
        {

            result[index] = array[i];
            index++;

        }

    }

    return result;

}

int main()
{

    int array[] = { 1, 5, 6, 3, 0, -1, 2, 9, 7 };
    int size = 9;

    int* result = updatedArray(array, size, 3);

    if(result != nullptr) 
    {

        for (int i = 0; i < size; i++) 
        {

            std::cout << result[i] << " ";

        }

        std::cout << std::endl;

        delete[] result; 

    }

    return 0;

}
