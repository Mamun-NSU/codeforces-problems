#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1')
            {
                if (a[i] == '0')
                {
                    ans++;
                    a[i] = '2';
                    continue;
                }
                if (i == 0)
                {
                    if (a[i + 1] == '1')
                        ans++, a[i + 1] = '2';
                }
                else if (i == n - 1)
                {
                    if (a[i - 1] == '1')
                        ans++, a[n - 1] = '2';
                }
                else
                {
                    if (a[i - 1] == '1')
                        ans++, a[i - 1] = '2';
                    else if (a[i + 1] == '1')
                        ans++, a[i + 1] = '2';
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}