#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n + 1];
        map<int, int> mp;
        // for(i=1;i<=n;i++)
        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (mp.find(arr[i]) != mp.end())
                mp[-arr[i]]++;
            else
                mp[arr[i]]++;
        }
        cout << mp.size() << endl;
    }
    return 0;
}