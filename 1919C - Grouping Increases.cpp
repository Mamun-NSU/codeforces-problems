#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> s, t;
        int penalty = 0;

        s.push_back(a[0]);
        t.push_back(a[1]);

        for (int i = 2; i < n; i++)
        {
            if (a[i] < s.back())
            {
                s.push_back(a[i]);
            }
            else
            {
                t.push_back(a[i]);
                if (t.size() > 1 && t[t.size() - 2] < t.back())
                {
                    penalty++;
                }
            }
        }
        cout << penalty << endl;
    }

    return 0;
}
