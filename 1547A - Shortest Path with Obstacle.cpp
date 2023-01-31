#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        vector<int> a(2), b(2), f(2);
        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        cin >> f[0] >> f[1];
        // compute the manhattan distance of 'a' and 'b' (disregard the block in the way)
        int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);
        if (a[0] == b[0] && a[0] == f[0] && f[1] >= min(a[1], b[1]) && f[1] <= max(a[1], b[1]))
        {
            // if all three ordered pairs have the same x-coordinate, and the y-coordinate of
            // ordered pair 'f' lies between the ordered pairs 'a' and 'b', then add 2 to the distance
            ans += 2;
        }
        else if (a[1] == b[1] && a[1] == f[1] && f[0] >= min(a[0], b[0]) && f[0] <= max(a[0], b[0]))
        {
            // if all three ordered pairs have the same y-coordinate, and the x-coordinate of
            // ordered pair 'f' lies between the ordered pairs 'a' and 'b', then add 2 to the distance
            ans += 2;
        }
        cout << ans << '\n';
    }
    return 0;
}