#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k = 0;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            k += a[i];
        }
        

        if (k == n)
        {
            cout << 0 << endl;
            continue;
        }
        ll x = (n + 1) - k;
        if (x < 0)
            cout << abs(x) + 1 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}