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
        int n = 3;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long mx = *max_element(a.begin(), a.end());

        int cnt = count(a.begin(), a.end(), mx);
        for (int i = 0; i < n; i++)
        {

            if (cnt == 1)
            {
                a[i] = (mx == a[i] ? 0 : mx - a[i] + 1);
            }
            else
            {
                a[i] = (mx == a[i] ? 1 : mx - a[i] + 1);
            }
        }
        for (auto &e : a)
        {
            cout << e << " ";
        }
        cout << '\n';
    }
    return 0;
}