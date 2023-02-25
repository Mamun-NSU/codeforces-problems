#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0, sum = 0, a;
        cin >> n >> m;
        while (n--)
            cin >> a, sum += a;
        if (m == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}