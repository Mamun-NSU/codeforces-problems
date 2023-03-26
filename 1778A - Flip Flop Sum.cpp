#include <bits/stdc++.h>
using namespace std;

void get()
{
    int n, i;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int dp[n + 1][2];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = -2e9;
        dp[i][1] = -2e9;
    }
    dp[0][0] = 0;
    dp[1][0] = a[1];
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = max(dp[i][0], dp[i - 1][0] + a[i]);
        dp[i][1] = max(dp[i][1], dp[i - 1][1] + a[i]);
        dp[i][1] = max(dp[i][1], dp[i - 2][0] - a[i] - a[i - 1]);
    }
    cout << dp[n][1] << "\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        get();
    return 0;
}