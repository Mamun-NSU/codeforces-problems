#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, r, c, ans = 3;
    cin >> n >> m >> r >> c;
    char ch;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ch;
            if (ch == 'B')
            {
                if ((i + 1) == r && (j + 1) == c)
                    ans = min(ans, 0);
                if ((i + 1) == r || (j + 1) == c)
                    ans = min(ans, 1);
                else
                    ans = min(ans, 2);
            }
        }
    }
    if (ans == 3)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}