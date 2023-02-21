#include <bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i = 0; i < (a); i++)
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, n, a, b, c, x, cnt = 0;
        cin >> n >> a >> b >> c;
        if (n % a == 0 || n % b == 0 || n % c == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            x = min({(a - n % a), (b - n % b), (c - n % c)});
            cout << x << endl;
        }
    }
    return 0;
}