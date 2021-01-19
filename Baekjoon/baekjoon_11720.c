#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, sum = 0;
	char *arr;

	scanf("%d", &n);
	arr = malloc(sizeof(char) * n);
	scanf("%s", arr);
	for (int i = 0; i < n; i++)
		sum += arr[i] - '0';
	printf("%d\n", sum);
	return (0);
}
