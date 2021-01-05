void bubble_sort(int *arr, int len)
{
    for (int i = len - 1; i > 0; i--)
    {
         for (int j = 0; j < i; j++)
         {
              if (arr[j] > arr[j+1])
              {
                   int temp = arr[j];
                   arr[j] = arr[j + 1];
                   arr[j + 1] = temp;
              }
         }
    }
}

int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
    int     *arr = (int *)malloc(sizeof(int) * numsSize);
    int     i = -1;

    *returnSize = numsSize;
    while (++i < numsSize)
        arr[i] = nums[i] * nums[i];
    bubble_sort(arr, numsSize);
    return (arr);
}