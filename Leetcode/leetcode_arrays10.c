#include <stdio.h>
#include <stdlib.h>

int* replaceElements(int* arr, int arrSize, int* returnSize)
{
    int biggest = 0;
    
    returnSize = (int *)malloc(sizeof(int) * 1);
    *returnSize = arrSize;
    for (int i = 0; i < arrSize - 1; i++)
    {
		biggest = arr[i + 1];
        for (int j = i + 1; j < arrSize - 1; j++)
        {
            if (biggest < arr[j + 1])
                biggest = arr[j + 1];
        }
        arr[i] = biggest;
    }
    arr[arrSize - 1] = -1;
    return (returnSize);
}

int main(void)
{
	int arr[10] = {17, 18, 5, 4, 6, 1, 1, 1, 1, 1};
	int arrSize = 10;
	int *returnSize;

	returnSize = replaceElements(arr, arrSize, returnSize);
	for (int i = 0; i < *returnSize; i++)
		printf("%d ", arr[i]);
	printf("\n");
}