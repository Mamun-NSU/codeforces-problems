#include <bits/stdc++.h>

using namespace std;

main()

{

    int t, i, n;

    cin >> t;

    while (t--)

    {

        string s1, s2, s;

        cin >> s;

        n = s.size();

        for (i = 0; i < n / 2; i++)

        {

            s1 += s[i];
        }

        for (i = n / 2; i < s.size(); i++)

        {

            s2 += s[i];
        }

        if (s1 == s2)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}