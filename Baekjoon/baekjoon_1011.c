#include <stdio.h>

int main(void)
{
    int t, count;
    double x, y, i, dis, temp;
    
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lf %lf", &x, &y);
        dis = 0;
        temp = 1;
        count = 1;
        while (dis < (y - x) / 2 && y - x != 1)
        {
            i = 4;
            while (dis < (y - x) / 2 && i--)
            {
                dis += temp;
                count++;
            }
            temp++;
        }
        printf("%d\n", count);
    }
    return (0);
}