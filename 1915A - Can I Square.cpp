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

        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int bucket;
            cin >> bucket;
            total += bucket;
        }

        int side = sqrt(total);

        if (side * side == total)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}