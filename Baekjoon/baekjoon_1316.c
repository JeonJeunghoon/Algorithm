#include <stdio.h>

int main(void)
{
	int used[26];
	int n, count, i, j, k;
	char s[101];

	scanf("%d", &n);
	count = n;
	i = 0;
	while (i++ < n)
	{
		j = 0;
		while (j < 26)
			used[j++] = 0;
		scanf("%s", s);
		k = 0;
		while (s[k])
		{
			if (used[s[k] - 'a'] == 0)
			{
				used[s[k] - 'a'] = 1;
				while (used[s[k] - 'a'] == 1)
					k++;
				used[s[k - 1] - 'a'] = -1;
			}
			else if (used[s[k] - 'a'] == -1)
			{
				count--;
				break;
			}
		}
	}
	printf("%d\n", count);
}