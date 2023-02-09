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
        string k;
        cin >> k;
        string s;
        cin >> s;
        int ans = 0;
        // calculate the distance of every adjacent letters (get the sum of all values)
        for (int i = 0; i + 1 < (int)s.size(); i++)
        {
            int x = -1;
            for (int j = 0; j < (int)k.size(); j++)
            {
                if (s[i] == k[j])
                {
                    x = j;
                    break;
                }
            }
            int y = -1;
            for (int j = 0; j < (int)k.size(); j++)
            {
                if (s[i + 1] == k[j])
                {
                    y = j;
                    break;
                }
            }
            ans += abs(x - y);
        }
        cout << ans << '\n';
    }
    return 0;
}