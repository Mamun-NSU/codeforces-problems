#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <cmath>
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define string std::string
const int mod = 1e9 + 7;
mt19937_64 rng(std::chrono::system_clock::now().time_since_epoch().count());

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int r, b, d;
        cin >> r >> b >> d;

        int mx = max(r, b);
        int mn = min(r, b);

        double hi = ceil((double)mx / mn) - 1;
        double lo = floor((double)mx / mn) - 1;

        if (hi <= d && lo <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}