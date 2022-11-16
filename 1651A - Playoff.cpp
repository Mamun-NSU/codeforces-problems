#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t, i, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        i = pow(2, n);
        cout << i - 1 << endl;
    }
    return 0;
}