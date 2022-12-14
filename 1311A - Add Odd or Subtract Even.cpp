#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0, a = 0, b = 0, i = 0, c = 0, cnt = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            c = a - b;
            if (c % 2 == 0)
            {
                cnt = 1;
            }
            else
            {
                cnt = 2;
            }
        }
        else if (b > a)
        {
            c = b - a;
            if (c % 2 == 0)
            {
                cnt = 2;
            }
            else
            {
                cnt = 1;
            }
        }
        else
        {
            cnt = 0;
        }

        cout << cnt << endl;
    }
    return 0;
}