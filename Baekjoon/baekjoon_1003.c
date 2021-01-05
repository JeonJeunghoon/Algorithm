long long g_zero, g_one;

long long fibonacci(int n)
{
    long long ret, p1, p2 = 0;
    p2 = 1;

	if (n == 0)
        g_zero = 1;
	else if (n == 1)
        g_one = 1;
	else
    {
        for (int i = 0; i < n; i++)
        {
            ret = p1 + p2;
            g_zero = p1;
            g_one = p2;
            p1 = p2;
            p2 = ret;
        }
    }
    return (0);
}

int main(void)
{
    int t = 0;
    long long N = 0;
    scanf("%d", &t);
    while (t--)
    {
        g_zero = 0;
        g_one = 0;
        scanf("%lld", &N);
        fibonacci(N);
        printf("%lld %lld\n", g_zero, g_one);
    }
    return (0);
}