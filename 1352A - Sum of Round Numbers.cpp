#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, m, n;
    cin >> t;
    while (t--)
    {
        int i, x = 0;
        string s;
        cin >> s;
        m = s.length();
        for (i = 0; i < m; i++)
        {
            if (s[i] != '0')
                x++;
        }
        cout << x << endl;
        for (i = 0; i < m; i++)
        {
            if (s[i] != '0')
            {
                cout << s[i];
                for (int j = 0; j < m - i - 1; j++)
                {
                    cout << 0;
                }
                cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}