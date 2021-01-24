#include <stdio.h>

int main(void)
{
    int a, b, v, days;
    
    scanf("%d %d %d", &a, &b, &v);
    days = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0)
		days++;
    printf("%d\n", days);
    return (0);
}