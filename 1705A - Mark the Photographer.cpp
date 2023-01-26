#include <bits/stdc++.h>
using namespace std;

void test_cases()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool checker = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i + n] - a[i] < x)
        {
            checker = false;
            break;
        }
    }
    cout << (checker ? "YES" : "NO") << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        test_cases();
    }
}