#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, n;
    float *arr, avg, res;
    
    t = n = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        avg = res = 0.0f;
        scanf("%d", &n);
        arr = malloc(sizeof(float) * n);
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &arr[j]);
            avg += arr[j];
        }
        avg /= n;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > avg)
                res++;
        }
		res = (res / n) * 100;
		free(arr);
        printf("%.3f%%\n", res);
    }
    return (0);
}