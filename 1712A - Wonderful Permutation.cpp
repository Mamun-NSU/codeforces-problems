#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int c = 0;
        for (int i = k; i < n; i++)
            if (a[i] <= k)
                c++;
        cout << c << endl;
    }
}