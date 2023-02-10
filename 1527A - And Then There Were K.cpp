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
        string s;
        cin >> n;
        while (n != 0)
        {
            k = n - 1;
            n = n & k;
        }
        cout << k << endl;
    }

    return 0;
}