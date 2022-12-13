#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);

        int flag = 0;
        for (int i = 1, a, t; i <= n; i++)
        {
            scanf("%d", &a);
            if (flag == 0)
            {
                t = sqrt(a);
                if (t * t != a)
                    flag = 1;
            }
        }

        puts(flag ? "YES" : "NO");
    }

    return 0;
}