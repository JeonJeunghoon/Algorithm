#include <stdio.h>

int main(void)
{
    long long a, b, c, diff, count;
    
    scanf("%lld %lld %lld", &a, &b, &c);
    diff = c - b;
	if (diff <= 0)
		printf("-1\n");
	else
	{
		count = (a / diff) + 1;
    	printf("%lld\n", count);
	}
	return (0);
}