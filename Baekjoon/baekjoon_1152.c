#include <stdio.h>

int main(void)
{
    char arr[1000001];
    int count, i;

	count = i = 0;
    while (scanf("%s", arr) != EOF)
	{
		count++;
		while (arr[i])
			i++;
	}
    printf("%d\n", count);
	return (0);
}
