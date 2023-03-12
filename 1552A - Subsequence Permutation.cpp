#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int count, sum = 0;
    cin >> count;
    string str, s;
    cin >> str;
    s = str;
    sort(str.begin(), str.end());
    for (int i = 0; i < count; i++)
    {
        if (str[i] != s[i])
            sum++;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
        cout << solve() << endl;
    return 0;
}