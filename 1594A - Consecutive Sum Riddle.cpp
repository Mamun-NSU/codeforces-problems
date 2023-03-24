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
        long long n;
        cin >> n;
        // view the image in this repository for better understanding
        // since negative numbers are included, we can simply include the negative
        // equivalent of the numbers in the range from 'l' to 'r' (inclusive) and not
        // include the negative equivalent of 'n' so that every pair would cancel each
        // other out and leave 'n' behind as the final answer
        cout << -(n - 1) << " " << n << '\n';
    }
    return 0;
}