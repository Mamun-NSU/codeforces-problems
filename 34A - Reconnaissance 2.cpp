#include <bits/stdc++.h>

using namespace std;

main()

{

    int n, i, c = 0, x, y;

    cin >> n;

    int a[n], b[n];

    for (i = 0; i < n; i++)

    {

        cin >> a[i];

        b[i] = a[i];
    }

    int l = 1;

    int r = n;

    x = abs(a[0] - a[n - 1]);

    for (i = 1; i < n; i++)

    {

        y = abs(a[i] - a[i - 1]);

        if (y < x)

        {

            x = y;

            l = i;

            r = i + 1;
        }
    }

    cout << l << " " << r << endl;

    return 0;
}