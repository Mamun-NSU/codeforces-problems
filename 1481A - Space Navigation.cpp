#include <bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i = 1; i < (a); i++)
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x = 0, y = 0, i, r = 0, d = 0, u = 0, l = 0;
        cin >> a >> b;
        string s;
        cin >> s;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
                r++;
            else if (s[i] == 'D')
                d++;
            else if (s[i] == 'L')
                l++;
            else if (s[i] == 'U')
                u++;
        }
        if (a >= 0)
        {
            if (a <= r)
                x = 1;
        }
        else if (a < 0)
        {
            if (abs(a) <= l)
                x = 1;
        }

        if (b >= 0)
        {
            if (b <= u)
                y = 1;
        }
        else if (b < 0)
        {
            if (abs(b) <= d)
                y = 1;
        }
        if (x == 1 && y == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        x = 0;
        y = 0;
    }
    return 0;
}