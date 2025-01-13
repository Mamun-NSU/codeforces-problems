#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_map<int, int> freq;
        int result = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;

            // Check if the current element appears at least 3 times
            if (freq[a[i]] == 3)
            {
                result = a[i];
            }
        }

        cout << result << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
