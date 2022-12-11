#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{

    ll n, ans = 0, sum = 0, m;
    string s;
    int t;
    cin >> t;

    while (t--)
    {
        ans = 0;
        cin >> n;
        if (n < 2050 || n % 2050)
            cout << -1 << '\n';
        else
        {
            m = n / 2050;
            // cout<<m<<'\n';
            while (m > 0)
            {
                ans = m % 10;
                sum += ans;
                m /= 10;
            }
            cout << sum << '\n';
            sum = 0;
        }
    }
    return 0;
}