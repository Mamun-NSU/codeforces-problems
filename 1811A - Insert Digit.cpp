#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;
    while (T > 0)
    {
        int n, d;
        string str;
        cin >> n >> d >> str;
        int cookie = -1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] < d + '0')
            {
                cookie = i;
                break;
            }
        }
        if (cookie == -1)
        {
            cout << str << d << endl;
        }
        else
        {
            str.insert(cookie, to_string(d));
            cout << str << endl;
        }
        T--;
    }
    return 0;
}