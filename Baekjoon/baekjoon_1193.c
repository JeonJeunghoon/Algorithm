#include <stdio.h>

int main(void)
{
    int x, a, b, max, min, stage;
    
    scanf("%d", &x);
	a = b = 1;
	if (x != 1)
	{
    	for (stage = 0; max < x; stage++)
		{
			max = (stage * (stage + 1)) / 2;
			min = ((stage * (stage - 1)) / 2) + 1;
		}
		stage -= 1;
		if (stage % 2 == 0)
		{
			if (x == min)
				b = stage;
			else if (x == max)
				a = stage;
			else
			{
				a = stage - (max - x);
				b += max - x;
			}
		}
		else if (stage % 2 == 1)
		{
			if (x == min)
				a = stage;
			else if (x == max)
				b = stage;
			else
			{
				b = stage - (max - x);
				a += max - x;
			}
		}
	}
    printf("%d/%d\n", a, b);
    return (0);
}