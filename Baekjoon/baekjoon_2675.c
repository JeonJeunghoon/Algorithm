#include <stdio.h>

int main(void)
{
    int t, r;
    char arr[200];
    
    t = r = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < 200; i++)
            arr[i] = '\0';
        scanf("%d", &r);
        scanf("%s", arr);
        for (int i = 0; arr[i]; i++)
        {
            for (int j = 0; j < r; j++)
                printf("%c", arr[i]);
        }
        printf("\n");
    }
    return (0);
}