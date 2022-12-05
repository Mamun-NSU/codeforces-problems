#include <bits/stdc++.h>

using namespace std;

main()

{

    int t, i;

    cin >> t;

    while (t--)

    {

        cin >> i;

        if (i % 10 == 9)

        {

            cout << (i / 10) + 1 << endl;
        }

        else
            cout << i / 10 << endl;
    }

    return 0;
}