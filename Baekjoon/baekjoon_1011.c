#include <stdio.h>

int main(void)
{
    int t, count, dis, max_dis, add_dis, four_idx;
    double x, y;
    
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lf %lf", &x, &y);
        dis = (int)(y - x);
        if (dis < 0)
            return (0);
        max_dis = 0;
        add_dis = 1;
        count = 1;
        while (max_dis < (dis) / 2 && dis != 1)
        {
            four_idx = 4;
            while (max_dis < (dis) / 2 && four_idx--)
            {
                max_dis += add_dis;
                count++;
            }
            add_dis++;
        }
        printf("%d\n", count);
    }
    return (0);
}