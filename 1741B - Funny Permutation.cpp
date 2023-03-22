#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "!" << endl;
        break;
    case 2:
        cout << "2 1" << endl;
        break;
    case 3:
        cout << "-1" << endl;
        break;
    case 4:
        cout << "4 3 1 2" << endl;
        break;
    default:
        for (int i = n; i > n / 2 + 1; i--)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n / 2 + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}