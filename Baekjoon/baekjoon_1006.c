#include <stdio.h>
#include <stdlib.h>

void invade_platoon(int *arr, int n, int w) // 소대가 들어갈 자리를 판별하고, 넣는 함수
{
    if (n > 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] + arr[i + 1] <= w && \
				arr[i] >= 0 && arr[i + 1] >= 0)
            {
                arr[i] = -2;
                arr[i + 1] = -2;
				i++;
            }
            else if (arr[i] + arr[i + n] <= w && \
				    arr[i] >= 0 && arr[i + n] >= 0)
			{
				arr[i] = -2;
				arr[i + n] = -2;
			}
        }
		if (arr[n - 1] + arr[0] <= w && \
			arr[n - 1] >= 0 && arr[0] >= 0)
		{
			arr[n - 1] = -2;
			arr[0] = -2;
		}
        if (arr[n - 1] + arr[(n * 2) - 1] <= w && \
            arr[n - 1] >= 0 && arr[0] >= 0)
        {
            arr[n - 1] = -2;
            arr[(n * 2) - 1] = -2;
        }
		for (int i = n; i < (n * 2) - 1; i++)
		{
			 if (arr[i] + arr[i + 1] <= w && \
				arr[i] >= 0 && arr[i + 1] >= 0)
            {
                arr[i] = -2;
                arr[i + 1] = -2;
				i++;
            }
		}
		if (arr[(n * 2) - 1] + arr[n] <= w && \
			arr[(n * 2) - 1] >= 0 && arr[n] >= 0)
		{
			arr[(n * 2) - 1] = -2;
			arr[n] = -2;
		}
    }
}

int count_platoon(void) // 소대를 넣고 최종 반환 값을 계산함
{
    int n, w, count, double_count;
    int *arr;

    n = w = count = double_count = 0;
    scanf("%d %d", &n, &w);
	arr = (int *)malloc(sizeof(int) * (n * 2));
    for (int i = 0; i < n * 2; i++)
        scanf("%d", &arr[i]);
    invade_platoon(arr, n, w);
    for (int i = 0; i < n * 2; i++)
    {
        if (arr[i] == -2)
            double_count++;
        else
            count++;
    }
    count = count + (double_count / 2);
    return (count);
}

int main(void)
{
    int t;

    t = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
        printf("%d\n", count_platoon());
    return (0);
}