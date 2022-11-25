#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int n = s.size();

        int ans = -1;
        if ((s[n - 1] - '0') % 2 == 0)
        {
            ans = 0;
        }
        else if ((s[0] - '0') % 2 == 0)
        {
            ans = 1;
        }
        else
        {
            bool checker = false;
            for (int i = 0; i < n; i++)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    checker = true;
                    break;
                }
            }
            if (checker)
            {
                ans = 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}