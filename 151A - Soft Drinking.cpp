#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << (min({(k * l) / nl, (c * d), (p) / np}, comp)) / n;

    //  x = (k * l) / nl;
    //         y = c * d;
    //         z = p / np;

    cout << min((min(x, y)), z) / n << endl;

    return 0;
}