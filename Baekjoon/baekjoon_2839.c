#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n, f, t, sum;
	bool find = false;

	scanf("%d", &n);
	f = n / 5;
	while (f >= 0)
	{
		t = 0;
		while ((f * 5) + (t * 3) <= n && !find)
		{
			if ((f * 5) + (t * 3) == n)
			{
				find = true;
				break ;
			}
			t++;
		}
		if (find)
			break ;
		f--;
	}
	sum = f + t;
	if (f < 0)
		sum = -1;
	printf("%d\n", sum);
	return (0);
}
