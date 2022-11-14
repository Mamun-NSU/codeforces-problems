#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    vector<int> counter(26, 0);
    bool checker = true;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            counter[s[i] - 'a']++; // count the keys encountered
        }
        else
        {
            int numerical_form = (s[i] - 'A');
            checker &= (counter[numerical_form] > 0); // the door must have its corresponding key
        }
    }
    cout << (checker ? "YES" : "NO") << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        TestCase();
    }
    return 0;
}