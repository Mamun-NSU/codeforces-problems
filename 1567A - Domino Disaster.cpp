#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // change 'D' to 'U', and vice-versa
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U' || s[i] == 'D')
            {
                s[i] = s[i] ^ ('D' ^ 'U');
            }
        }
        cout << s << '\n';
    }
    return 0;
}