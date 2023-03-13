#include <bits/stdc++.h>
using namespace std;
int check(string s, int num)
{
    string s1 = "RL";
    string s2 = "LR";
    // Checking if RL is a substring, then all the trophies are lit
    if (s.find(s1) != string::npos)
    {
        return 0;
    }
    // Checking if LR is a substring, then swapping that L and R will light all trophies
    else if (s.find(s2) != string::npos)
    {
        return (s.find(s2) + 1);
    }
    // Impossible to light all trophies returns -1
    else
    {
        return -1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int res = check(str, n);
        cout << res << endl;
    }

    return 0;
}