#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i = 0;
    int len = 0;
    int temp = 0;

    if (numsSize > 10000)
            return (-1);
    while (i < numsSize)
    {
		while (nums[i++] == 1)
			temp++;
        len = len > temp ? len : temp;
        temp = 0;
    }
    return (len);
}