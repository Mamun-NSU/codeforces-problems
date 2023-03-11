#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr[n - 2];
        string ans = "";
        for (int i = 0; i < n - 2; i++)
            cin >> arr[i];

        bool found = false;
        ans = arr[0][0];

        for (int i = 1; i < n - 2; i++)
        {
            if (arr[i][0] == arr[i - 1][1])
                ans += arr[i][0];
            else
            {
                found = true;
                ans = ans + arr[i - 1][1] + arr[i][0];
            }
        }
        ans += arr[n - 3][1];

        if (!found)
            ans += "a";

        cout << ans << endl;
    }
    return 0;
}