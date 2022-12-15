#include <bits/stdc++.h>

using namespace std;

main()

{

    int t, a, b, c;

    cin >> t;

    while (t--)

    {

        cin >> a >> b >> c;

        if (a == b && b == c)

        {

            if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }

        else if (a == b)
        {

            if (c % 2 == 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }

        else if (a == c)
        {

            if (b % 2 == 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }

        else if (b == c)
        {

            if (a % 2 == 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }

        else

        {

            if (a > b && a > c)

            {

                if (a - b == c)
                    cout << "YES" << endl;

                else
                    cout << "NO" << endl;
            }

            else if (b > a && b > c)

            {

                if (b - a == c)
                    cout << "YES" << endl;

                else
                    cout << "NO" << endl;
            }

            else

            {

                if (c - a == b)
                    cout << "YES" << endl;

                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}