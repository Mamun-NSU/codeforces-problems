#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        string s, p = "";
        cin >> s;
        for (int i = 0; i < 50; i++)
        {
            p = p + "Yes";
        }
        if (p.find(s) != -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}