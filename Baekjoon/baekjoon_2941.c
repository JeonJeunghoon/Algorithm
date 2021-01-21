#include <stdio.h>

int main(void)
{
    char s[101];
    int count = 0;
    
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-'))
            count++;
        else if (s[i] == 'd' && (s[i + 1] == '-' || (s[i + 1] == 'z' && s[i + 2] == '=')))
            count++;
        else if (s[i] == 'l' && s[i + 1] == 'j')
            count++;
        else if (s[i] == 'n' && s[i + 1] == 'j')
            count++;
        else if (s[i] == 's' && s[i + 1] == '=')
            count++;
        else if (s[i] == 'z' && s[i + 1] == '=')
            count++;
        else
            count++;
        if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-') || \
        s[i] == 'd' && s[i + 1] == '-' || \
        s[i] == 'l' && s[i + 1] == 'j' || \
        s[i] == 'n' && s[i + 1] == 'j' || \
        s[i] == 's' && s[i + 1] == '=' || \
        s[i] == 'z' && s[i + 1] == '=')
            i++;
        else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
            i += 2;
    }
    printf("%d\n", count);
}