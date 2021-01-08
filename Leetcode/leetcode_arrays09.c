#include <stdbool.h>

bool validMountainArray(int* arr, int arrSize)
{
    int i = 0;

    if (arrSize <= 1)
        return (false);
    while (i < arrSize - 1 && arr[i] <= arr[i + 1])
    {
        if (arr[i] == arr[i + 1])
            return (false);
        i++;
    }
    while (i < arrSize - 1 && arr[i] >= arr[i + 1])
    {
        if (arr[i] == arr[i + 1] || i == 0)
            return (false);
        i++;
    }
    if (i != arrSize - 1 || arr[i - 1] <= arr[i])
        return (false);
    return (true);
}