#include <stdio.h>

int main(void)
{
    char a[10001], b[10001], sum[10002];
	int i, j, k, z;

	scanf("%s %s", a, b);
	i = 0;
	while (a[i])
		i++;
	j = 0;
	while (b[j])
		j++;
	k = i > j ? i + 1 : j + 1;
	sum[k] = '\0';
	z = 0;
	while (z < k)
		sum[z++] = '0';
	i--;
	j--;
	k = 0;
	while (i >= 0 && j >= 0)
	{
		if (((sum[k] - '0') + (a[i] - '0') + (b[j] - '0')) / 10)
			sum[k + 1] = (((sum[k] - '0') + (a[i] - '0') + (b[j] - '0')) / 10) + '0';
		sum[k] = (((sum[k] - '0') + (a[i] - '0') + (b[j] - '0')) % 10) + '0';
		i--;
		j--;
		k++;
	}
	if (i > j)
	{
		while (i >= 0)
		{
			if (sum[k] - '0' + a[i] - '0' >= 10)
			{
				sum[k] = ((sum[k] - '0' + a[i] - '0') % 10) + '0';
				sum[k + 1]++;
			}
			else
				sum[k] += a[i] - '0';
			k++;
			i--;
		}
	}
	else if (i < j)
	{
		while (j >= 0)
		{
			if (sum[k] - '0' + b[j] - '0' >= 10)
			{
				sum[k] = ((sum[k] - '0' + b[j] - '0') % 10) + '0';
				sum[k + 1]++;
			}
			else
				sum[k] += b[j] - '0';
			k++;
			j--;
		}
	}
	if (sum[k] == '0')
		k--;
	for (int i = k; i >= 0; i--)
		printf("%d", sum[i] - '0');
	printf("\n");
    return (0);
}