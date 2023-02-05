#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        int c = 0, x = 0, i;
        string s;
        cin >> s;
        vector<long long> v;
        for (i = 0; i < s.size();)
        {
            if (s[i] == '1')
            {
                c = 0;
                while (s[i] == '1')
                {
                    i++;
                    c++;
                    if (i + 1 == s.size() + 1)
                        break;
                }
                v.push_back(c);
            }
            else
                i++;
        }
        sort(v.begin(), v.end(), greater<long long>());

        x = 0;
        for (i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
            {
                x = x + v[i];
            }
        }

        cout << x << endl;
    }
    return 0;
}