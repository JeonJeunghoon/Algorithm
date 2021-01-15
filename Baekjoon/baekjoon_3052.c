#include <stdio.h>

int main(void)
{
    int arr[42], d, count = 0;
    
    for (int i = 0; i < 42; i++)
        arr[i] = 0;
    for (int i = 0; i < 10; i++)
	{
		scanf("%d", &d);
        arr[d % 42]++;
	}
    for (int i = 0; i < 42; i++)
    {
        if (arr[i])
            count++;
    }
    printf("%d\n", count);
    return (0);
}