#include <stdio.h>

int main(void)
{
    int n, count = 0;
    
    scanf("%d", &n);
    if (n < 100)
        printf("%d\n", n);
    else
    {
        for (int i = 100; i <= n; i++)
        {
            if (i/100 - ((i/10)%10) == ((i/10)%10) - i%10)
                count++;
        }
		count += 99;
		printf("%d\n", count);
    }
    return (0);
}