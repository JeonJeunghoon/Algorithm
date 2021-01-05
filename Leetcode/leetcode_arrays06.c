int removeElement(int* nums, int numsSize, int val)
{
	int len, i, j = 0;
	
    while (i < numsSize)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    len = j;
    return (len);
}