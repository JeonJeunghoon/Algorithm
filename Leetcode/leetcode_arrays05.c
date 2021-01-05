void merge(int* nums1, int nums1Size, int m, \
			int* nums2, int nums2Size, int n)
{
    int i, j, temp;

    i = m;
    j = 0;
    while (i < m + n && j < n)
    {
        nums1[i] = nums2[j];
        i++;
        j++;
    }
    i = 0;
    while (i < m + n)
    {
        j = i + 1;
        while (j < m + n)
        {
            if (nums1[i] > nums1[j])
            {
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
            j++;
        }
        i++;
    }
}