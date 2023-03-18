#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (k == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag = true;
        for (int i = 1; i <= n; i += 2)
        {
            long long a = (long long)i;
            long long b = (long long)(i + 1);
            if (((a + k) * b) % 4 != 0 && ((b + k) * a) % 4 != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 1; i <= n; i += 2)
        {
            long long a = (long long)i;
            long long b = (long long)(i + 1);
            if (((a + k) * b) % 4 == 0)
            {
                cout << i << " " << i + 1 << endl;
            }
            else
            {
                cout << i + 1 << " " << i << endl;
            }
        }
    }
    return 0;
}