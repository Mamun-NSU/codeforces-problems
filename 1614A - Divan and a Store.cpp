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
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // sort the sequence in non-decreasing order and gather as much
        // chocolates as possible until k becomes zero
        sort(a.begin(), a.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (k - a[i] >= 0)
            {
                if (a[i] >= l && a[i] <= r)
                {
                    cnt++;
                    k -= a[i];
                }
            }
            else
            {
                break;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}