#include <iostream>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        // Check if m is less than or equal to n and their parities match
        if (m <= n && (m % 2 == n % 2))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
