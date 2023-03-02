#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        if (len < 3)
            cout << s[1] - '0' << endl;
        else
        {
            int min = s[0];
            for (int i = 1; i < len; i++)
            {
                if (s[0] > s[i])
                    s[0] = s[i];
            }
            cout << s[0] - '0' << endl;
        }
    }
    return 0;
}