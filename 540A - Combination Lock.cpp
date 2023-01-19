#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int ans = 0;
        char a[1008], b[1008];
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            int t = abs(a[i] - b[i]);
            if (t > 5)
                t = 10 - t;
            ans += t;
        }
        cout << ans << endl;
    }
    return 0;
}