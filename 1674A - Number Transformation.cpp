#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y % x != 0 || x > y)
            cout << "0 0\n";
        else
            cout << 1 << " " << y / x << "\n";
    }

    return 0;
}