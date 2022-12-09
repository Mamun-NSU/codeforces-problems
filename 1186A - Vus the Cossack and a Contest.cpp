#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (min(m, k) >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}