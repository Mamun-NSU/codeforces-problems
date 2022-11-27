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
        ll n, i, j;
        cin >> n;
        set<int> s;
        ll a1, k = 1;
        map<ll, ll> mp;
        for (i = 0; i < n; i++)
        {
            cin >> a1;
            mp[a1]++;
            k = max(k, mp[a1]);
        }
        cout << k << endl;
    }
    return 0;
}