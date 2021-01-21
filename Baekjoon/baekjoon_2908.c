#include <stdio.h>

int main(void)
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    if (a % 10 > b % 10)
        printf("%d\n", a);
    else if (a % 10 < b % 10)
        printf("%d\n", b);
    else if (a % 100 - a % 10 > b % 100 - b % 10)
        printf("%d\n", a);
    else if (a % 100 - a % 10 < b % 100 - b % 10)
        printf("%d\n", b);
    else if (a / 100 > b / 100)
        printf("%d\n", a);
    else
        printf("%d\n", b);
    return (0);
}