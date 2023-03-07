#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ld PI = 2 * acosl(0.0);
const int inf = 2e5 + 7;
const int mxN = 3000000;
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a, 0, sizeof a)
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) (a / gcd(a, b) * b)
#define abs(a) (a < 0 ? -(a) : a)
#define debug1(x) cout << #x << "=" << x << endl
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d", &a)
#define pf(a) printf("%d\n", a)
#define DEBUG 0
// cout<<"Case "<<cas<<": "<<
int main()
{
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ar[n];
        bool mark[100];
        reset(mark);
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                mark[(ar[j] - ar[i])] = 1;
            }
        }
        int cn = 0;
        for (i = 0; i <= 50; i++)
        {
            if (mark[i] == 1)
            {
                cn++;
            }
        }
        cout << cn << endl;
    }
}