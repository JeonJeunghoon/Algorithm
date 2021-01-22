#include <stdio.h>

int main(void)
{
	int count, n;

	scanf("%d", &n);
	count = 1;
	if (n != 1)
	{
		for (int i = 0, j = 1; (n - 2) / 6 >= i; i += j++)
			count++;
	}
	printf("%d\n", count);
	return (0);
}