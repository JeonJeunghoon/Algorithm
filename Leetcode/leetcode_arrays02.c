int numlen(int num)
{
    int i = 0;
    
    if (num != 0)
    {
        while (num)
        {
            num /= 10;
            i++;
        }
        if (i % 2 == 0 && i < 7)
            return (1);
    }
    return (0);
}

int findNumbers(int* nums, int numsSize)
{
    int ret = 0;
    
    if (numsSize < 1 || numsSize > 500)
        return (-1);
    while (numsSize--)
    {
        if (numlen(*nums) == 1)
            ret++;
        nums++;
    }
    return (ret);
}