#include <stdio.h>

int main(void)
{
    int arr[100000] = {0};
	int n = 0;

    for (int i = 0; i < 9999; i++)
	{
        if (i > 999)
            n = i + (i % 10) + ((i % 100)/10) + ((i % 1000)/100) + (i/1000);
		else if (i > 99)
            n = i + (i % 10) + ((i % 100)/10) + (i/100);
        else if (i > 9)
            n = i + (i % 10) + (i/10);
        else
            n = i + i;
        arr[n] = 1;
    }
    for (int i = 0; i < 9999; i++)
    {
        if (arr[i] == 0)
            printf("%d\n", i);
    }
    return (0);
}