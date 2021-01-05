#include <stdio.h>

void duplicateZeros(int* arr, int arrSize)
{
    int exception = 0;
    int *ptr = (int *)malloc(sizeof(int) * arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        ptr[i] = arr[i];
        if (arr[i] == 0)
            exception++;
    }
    if (exception == 0 || exception == arrSize)
        return ;
    for (int i = 0; i < arrSize - 1; i++)
    {
        if (arr[i] == 0)
        {
            arr[i + 1] = 0;
            for (int j = i + 2; j < arrSize; j++)
                arr[j] = ptr[j - 1];
            for (int k = 0; k < arrSize; k++)
                ptr[k] = arr[k];
            i++;
        }
    }
		free(ptr);
		ptr = NULL;
    return ;
}