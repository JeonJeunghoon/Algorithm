#include <stdio.h>

int main(void)
{
    int h, m;
    
    h = m = 0;
    scanf("%d %d", &h, &m);
    if (m >= 45)
        printf("%d %d\n", h, m - 45);
    else
    {
        if (h == 0)
            printf("%d ", 23);
        else
            printf("%d ", h - 1);
        printf("%d\n", 60 - (45 - m));
    }
    return (0);
}