#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        if (s == "Timru")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}