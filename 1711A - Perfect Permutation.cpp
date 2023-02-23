#include <iostream>

using namespace std;

// Driver code
int main()
{
    int testcase = 1, n;
    cin >> testcase;
    for (int i = 1; i <= testcase; i++)
    {
        cin >> n;
        cout << n << " ";
        for (int j = 1; j < n; j++)
        {
            cout << j << " ";
        }
    }

    return 0;
}