#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *score;
	double biggest, sum, avg;
    
    n = biggest = sum = avg = 0;
    scanf("%d", &n);
    score = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
        sum += score[i];
        if (biggest < score[i])
            biggest = score[i];
    }
    avg = sum * 100 / n / biggest;
    printf("%.2f\n", avg);
    return (0);
}