#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string r1, r2;
    cin >> r1 >> r2;

    for (int i = 0; i < n; i++)
    {
        if (r1[i] == 'G')
            r1[i] = 'B';

        if (r2[i] == 'G')
            r2[i] = 'B';
    }

    if (r1 == r2)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}