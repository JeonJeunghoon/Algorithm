#include <stdio.h>
#include <string.h>

int main(void)
{
    int t, score, temp;
    char s[80];
    
    t = score = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        temp = 0;
        score = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == 'O')
            {
                temp++;
                score += temp;
            }
            else if (s[i] == 'X')
                temp = 0;
        }
        printf("%d\n", score);
        for (int i = 0; i < strlen(s); i++)
            s[i] = '\0';
    }
    return (0);
}