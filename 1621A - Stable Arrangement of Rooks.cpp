#include <stdio.h>

int main()
{
    int t, n, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &k);
        if (2 * k - n > 1)
            puts("-1");
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                    if (i == j && i % 2 == 1 && k)
                    {
                        putchar('R');
                        k--;
                    }
                    else
                        putchar('.');
                putchar('\n');
            }
        }
    }

    return 0;
}