#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; // Length of the array
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        unordered_map<int, int> freq; // Map to store the frequency of each element
        for (int num : a)
        {
            freq[num]++;
        }

        int score = 0;
        for (const auto &pair : freq)
        {
            score += pair.second / 2; // Each pair contributes to the score
        }

        cout << score << endl;
    }

    return 0;
}
