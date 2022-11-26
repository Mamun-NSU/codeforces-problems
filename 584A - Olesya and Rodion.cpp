#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    if (t == 10)
    {
        if (n == 1)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= n - 1; i++)
            {
                cout << 2;
            }
            cout << 0 << endl;
        }
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            cout << t;
        }
        cout << endl;
    }
    return 0;
}