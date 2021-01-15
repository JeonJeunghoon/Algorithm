#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[255];
    int max, is_qmark;
    size_t len;
    char s[1000000], c;

    for (int i = 0; i < 255; i++)
        arr[i] = 0;
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        arr[s[i]]++;
    }
    max = arr[s[0]];
    c = s[0];
    for (int i = 0; i < len; i++)
    {
        if (max < arr[s[i]])
        {
            max = arr[s[i]];
            c = s[i];
        }
    }
    is_qmark = 0;
    for (int i = 0; i < len; i++)
    {
        if (max == arr[s[i]] && c != s[i])
            is_qmark++;
    }
    if (is_qmark)
        printf("?\n");
    else
        printf("%c\n", c);
    return (0);
}