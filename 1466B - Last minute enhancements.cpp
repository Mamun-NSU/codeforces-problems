#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
#define ll long long
#define Fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
int main()
{
    Fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 1; i < n; i++)
        {
            if (a[i] <= a[i - 1])
                a[i]++;
        }
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        cout << s.size() << endl;
    }
}