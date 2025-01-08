#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool isValidSeating(const vector<int> &a, int n)
{
    set<int> occupied;
    for (int seat : a)
    {
        // If no occupied seats, any seat is valid
        if (occupied.empty())
        {
            occupied.insert(seat);
            continue;
        }

        // Check if the seat has at least one occupied neighbor
        if (occupied.count(seat - 1) == 0 && occupied.count(seat + 1) == 0)
        {
            return false;
        }

        // Mark the seat as occupied
        occupied.insert(seat);
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (isValidSeating(a, n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}