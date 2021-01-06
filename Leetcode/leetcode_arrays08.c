#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize)
{
    int temp = 0;
    
    for (int i = 0; i < arrSize; i++)
    {
        temp = arr[i] * 2;
        for (int j = 0; j < arrSize; j++)
        {
            if (j == i)
                continue ;
            if (temp == arr[j])
                return (true);
        }
    }
    return (false);
}