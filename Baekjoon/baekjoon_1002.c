#include <stdio.h>
#include <math.h>

int main(void)
{
    int t, x1, x2, y1, y2, r1, r2, R, r = 0;
    double dis, sum = 0;
    
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        sum = r1 + r2;
				R = r1 > r2 ? r1 : r2;
				r = r1 < r2 ? r1 : r2;
        if ((x1 == x2) && (y1 == y2))
        {
            if (R != r)
                printf("%d\n", 0);
            else
                printf("%d\n", -1);
        }
				else if (dis > sum || (R > (r + dis)))
            printf("%d\n", 0);
        else if (dis == sum || (R == (r + dis)))
            printf("%d\n", 1);
        else if (dis > R - r && dis < R + r)
            printf("%d\n", 2);
    }
    return (0);
}