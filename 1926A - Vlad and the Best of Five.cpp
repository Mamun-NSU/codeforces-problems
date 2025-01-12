#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        string s; // Input string of length 5
        cin >> s;

        // Count occurrences of 'A' and 'B'
        int countA = 0, countB = 0;
        for (char c : s)
        {
            if (c == 'A')
                countA++;
            else if (c == 'B')
                countB++;
        }

        // Output the character that appears most frequently
        if (countA > countB)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }

    return 0;
}
