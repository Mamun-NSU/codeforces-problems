#include <bits/stdc++.h>
using namespace std;
int aa, bb;
int cal(int a)
{
    if (a < aa)
        return aa;
    if (a > bb)
        return bb;
    return a;
}
int cal(int a, int b)
{ /*{{{*/
    int la = cal(a - 10), ra = cal(a + 10);
    int lb = cal(b - 10), rb = cal(b + 10);
    int ret = 0;
    for (int i = la; i <= ra; i++)
    {
        for (int j = lb; j <= rb; j++)
        {
            if (j <= i)
                continue;
            ret = max(ret, j % i);
        }
    }
    // cout<<a<<' '<<b<<' '<<ret<<endl;
    return ret;
} /*}}}*/
void solve()
{
    cin >> aa >> bb;
    int ans = 0;
    ans = max(ans, cal(aa, bb));
    ans = max(ans, cal(aa / 2, bb));
    ans = max(ans, cal(aa, bb / 2));
    ans = max(ans, cal(aa / 2, bb / 2));
    ans = max(ans, cal(bb / 2, bb));
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}