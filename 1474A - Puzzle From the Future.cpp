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
        ll n, x, i;
        cin >> n;
        string s, s1;
        cin >> s;
        cout << 1;
        x = s[0] - '0' + 1;
        f(i, n)
        {
            if (s[i] == '0' && x == 1)
            {
                cout << 0;
                x = s[i] - '0' + 0;
            }
            else if (s[i] == '0' && x == 0)
            {
                cout << 1;
                x = s[i] - '0' + 1;
            }
            else if (s[i] == '0' && x == 2)
            {
                cout << 1;
                x = s[i] - '0' + 1;
            }
            else if (s[i] == '1' && x == 1)
            {
                cout << 1;
                x = s[i] - '0' + 1;
            }
            else if (s[i] == '1' && x == 0)
            {
                cout << 1;
                x = s[i] - '0' + 1;
            }
            else if (s[i] == '1' && x == 2)
            {
                cout << 0;
                x = s[i] - '0' + 0;
            }
        }
        cout << endl;
    }
    return 0;
}