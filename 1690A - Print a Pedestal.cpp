#include <bits\stdc++.h>
typedef long long ll;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n, h1 = 0, h2 = 0, h3 = 0;
        cin >> n;
        if (!(n % 2))
        {
            h3 = 1;
            n--;
        }
        h2 = (int)n / 2;
        h1 = n - h2;
        while (h2 > h3 + 3)
        {
            h2--;
            h1--;
            h3 += 2;
        }
        if (!h3)
        {
            h2--;
            h3++;
        }
        cout << h2 << " " << h1 << " " << h3 << endl;
    }
}