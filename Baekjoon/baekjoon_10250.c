#include <stdio.h>

int main(void)
{
    int t, h, w, n, row, col, room;
    
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &h, &w, &n);
		col = n % h ? n % h : h;
		row = n % h ? (n / h) + 1 : n / h;
		room = (col * 100) + row;
		printf("%d\n", room);
    }
    return (0);
}