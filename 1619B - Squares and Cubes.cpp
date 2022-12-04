#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define deba(i, a, n) \
    fo(i, n) { cout << a[i] << " "; }
#define pb push_back
#define mod 1e9 + 7
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define endl "\n"
#define vp(i, a, n) \
    fo(i, n)        \
    {               \
        int x;      \
        cin >> x;   \
        a.pb(x);    \
    }
#define ap(i, a, n) \
    fo(i, n) { cin >> a[i]; }

typedef vector<int> vi;

void solution()
{
    int n;
    cin >> n;
    int sq = floor(sqrt(n));
    int cu = floor(cbrt(n));
    int cs = (int)pow(n, 1.0 / 6);
    // cout<<cs+1<<" "<<(int)pow(cs+1, 6)<<endl;
    if ((int)pow(cs + 1, 6) == n || (int)pow(cs + 1, 6) == n - 1)
    {
        cout << sq + cu - cs - 1 << endl;
    }
    else
    {
        // cout<<cs<<endl;
        cout << sq + cu - cs << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }

    return 0;
}