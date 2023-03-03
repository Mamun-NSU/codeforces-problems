#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int x = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i], x = max(a[i] - b[i], x);
        bool y = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - b[i] != x && b[i] != 0)
            {
                y = false;
                break;
            }
        }
        if (y == true && x >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}