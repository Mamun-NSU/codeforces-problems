#include <bits/stdc++.h>

using namespace std;

main()

{

    int t, n, i;

    cin >> t;

    while (t--)

    {

        string s;

        int zc = 0, oc = 0;

        cin >> s;

        if (s.size() <= 2)
            cout << "0" << endl;

        else

        {

            for (int i = 0; i < s.size(); i++)

            {

                if (s[i] == '0')
                    zc++;

                else
                    oc++;
            }

            if (oc == zc)
                cout << zc - 1 << endl;

            else

            {

                int r = min(zc, oc);

                cout << r << endl;
            }
        }
    }

    return 0;
}