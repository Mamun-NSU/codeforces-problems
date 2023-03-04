#include <bits/stdc++.h>

#define int long long int
#define double long double
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl

using namespace std;

const bool LOOP_TEST_CASES = true;

void solve()
{
    int n, s, r;
    cin >> n >> s >> r;

    int a[n];
    int maxVal = s - r;
    a[n - 1] = maxVal;
    s = s - maxVal;
    int avg = s / (n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        a[i] = avg;
        s -= avg;
    }

    int i = 0;
    while (s > 0)
    {
        a[i % n]++;
        s--;
        i++;
    }

    print(a);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    if (LOOP_TEST_CASES)
    {
        cin >> t;
    }
    while (t--)
        solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

    return 0;
}