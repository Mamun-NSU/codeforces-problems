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
        int k;
        cin >> k;
        // view the image in this repository for better understanding
        // find a square number that is greater than or equal to 'k'
        int n = ceil(sqrt(k));
        // to get the range of a layer, subtract 'n' by 1 and multiply it to 2
        int range = (n - 1) * 2;
        // calculate the difference of the square number and 'k'
        int diff = (n * n) - k;
        if (diff < n)
        {
            // if 'diff' is less than 'n', then the row is 'n' itself and the column is ('diff' + 1)
            cout << n << " " << diff + 1;
        }
        else
        {
            // otherwise, calculate the difference of 'k' and the starting number in a layer + 1
            // for the row, and 'n' itself is the column
            cout << k - ((n * n) - range) + 1 << " " << n;
        }
        cout << '\n';
    }
    return 0;
}