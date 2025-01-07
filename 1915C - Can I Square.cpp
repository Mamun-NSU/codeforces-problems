#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long sum_a = 0;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            sum_a += a;
        }

        // Check if sum_a is a perfect square
        long long s = sqrt(sum_a);
        if (s * s == sum_a)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}