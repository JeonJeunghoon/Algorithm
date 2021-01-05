#include <stdio.h>
#include <math.h>

int main(void)
{
	int t, x1, y1, x2, y2, x3, y3, n, r, start, goal, result = 0;

	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		while (n--)
		{
			scanf("%d %d %d", &x3, &y3, &r);
			start = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
			goal = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
			if (r > start && r <= goal)
				result++;
			else if (r <= start && r > goal)
				result++;
		}
		printf("%d\n", result);
		result = 0;
	}
	return (0);
}