#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, k, n;
	int **arr;
    
    scanf("%d", &t);
    while (t--)
    {
		scanf("%d%d", &k, &n);
		arr = malloc(sizeof(int *) * (k + 1));
		for (int i = 0; i < k + 1; i++)
			arr[i] = malloc(sizeof(int) * (n + 1));
		for (int i = 0; i < n + 1; i++)
			arr[0][i] = i;
		for (int i = 1; i < k + 1; i++)
		{
			arr[i][1] = 1;
			for (int j = 2; j < n + 1; j++)
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
		printf("%d\n", arr[k][n]);
    }
    return (0);
}