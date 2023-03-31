#include <bits/stdc++.h>
using namespace std;

int _count(string s, char left, char right)
{
    int balance(0), count(0);
    for (auto c : s)
    {
        if (c == right)
        {
            if (balance > 0)
            {
                --balance;
                ++count;
            }
        }
        else if (c == left)
            ++balance;
    }
    return count;
}

void solve()
{
    string s;
    cin >> s;
    cout << _count(s, '(', ')') + _count(s, '[', ']') << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}