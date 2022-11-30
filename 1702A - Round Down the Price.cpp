#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = stoi(str);
        int len = str.length() - 1;
        int k = (pow(10, len));
        cout << n - k << endl;
    }
}