#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int m;
    cin >> m;

    set<int> possibleSums;
    possibleSums.insert(0);

    while (m--)
    {
        int t, v;
        cin >> t >> v;

        if (t == 1)
        {

            set<int> newSums;
            for (int sum : possibleSums)
            {
                newSums.insert(sum + (1 << v));
            }
            possibleSums.insert(newSums.begin(), newSums.end());
        }
        else
        {

            if (possibleSums.count(v))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}