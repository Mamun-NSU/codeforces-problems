#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define ll long long
const ll N = 2e6 + 5;
using namespace std;

ll a[N] = {0}, b[N] = {0};

int main()
{

    IO;
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<ll> vec(n);
        double ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
            ans += vec[i];
        }
        sort(vec.begin(), vec.end());
        ans -= vec[n - 1];
        ans /= (n - 1);
        cout << fixed << setprecision(9) << vec[n - 1] + ans << endl;
    }
    return 0;
}