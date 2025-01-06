#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Duration of the contest

        string log;
        cin >> log; // Contest log

        unordered_map<char, int> timeSpent;
        unordered_set<char> solved;

        for (char ch : log)
        {
            if (solved.find(ch) == solved.end())
            { // If the problem isn't solved yet
                timeSpent[ch]++;
                if (timeSpent[ch] == (ch - 'A' + 1))
                {
                    solved.insert(ch); // Mark problem as solved
                }
            }
        }

        cout << solved.size() << endl; // Number of problems solved
    }

    return 0;
}
