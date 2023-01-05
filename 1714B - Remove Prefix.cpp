#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int t, h, m, H, M, n, d, i, j;

    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> m;
        int c = 0;
        int a[n];
        int rem = n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++; // m[a[i]] stores the number of duplicate elements :: FOR EXAMPLE - 1 2 1 7 1 2 1, here, no. of element 2 = 2(duplicate=1) and no. of element 1 = 4(duplicate=3) so, the number of duplicate value is (1+3)=4
        }
        i = 0;

        while (m.size() != rem) // map.size() = how many unique elements appear in the array
        {
            c++;
            m[a[i]]--;

            if (m[a[i]] == 0)
            {
                m.erase(a[i]);
            }

            i++;
            rem--;
        }
        cout << c << endl;
    }

    return 0;
}