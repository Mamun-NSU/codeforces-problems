#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            swap(a, b);
        }
        // view the image in this repository for the derivation of formula
        int gap = abs(a - b);
        int range = gap << 1;
        if (a > range || b > range || c > range)
        {
            // if 'a', 'b', or 'c' is greater than 'range', then output -1
            cout << -1;
        }
        else if (c + gap > range)
        {
            // if the sum of 'c' and 'gap' is greater than range, then calculate their difference
            cout << c - gap;
        }
        else
        {
            // otherwise, calculate their sum
            cout << c + gap;
        }
        cout << '\n';
    }
    return 0;
}