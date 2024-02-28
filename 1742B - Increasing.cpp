#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        bool isIncreasing = true;
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] <= arr[i - 1])
            {
                isIncreasing = false;
                break;
            }
        }

        cout << (isIncreasing ? "YES" : "NO") << endl;
    }

    return 0;
}
