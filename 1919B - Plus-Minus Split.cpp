#include <iostream>
#include <string>
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
        string s;
        cin >> s;
        int p = count(s.begin(), s.end(), '+');
        int m = count(s.begin(), s.end(), '-');
        int d = abs(p - m);
        cout << d << endl;
    }
    return 0;
}
