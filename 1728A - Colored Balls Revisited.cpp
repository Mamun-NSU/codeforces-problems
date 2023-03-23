#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ind = 1, maxi = a[0];
        for (int i = 1; i < n; i++)
        {
            if (maxi <= a[i])
            {
                maxi = a[i];
                ind = i + 1;
            }
        }

        cout << ind;

        cout << endl;
    }
    return 0;
}