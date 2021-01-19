#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *arr = malloc(sizeof(char) * 101);
    int alpha[26], order = 0;

    for (int i = 0; i < 26; i++)
        alpha[i] = -1;
    scanf("%s", arr);
    for (int i = 0; arr[i]; i++)
	{
        if (alpha[arr[i] - 'a'] == -1)
            alpha[arr[i] - 'a'] = order;
        order++;
    }
	free(arr);
    for (int i = 0; i < 26; i++)
        printf("%d ", alpha[i]);
    return (0);
}