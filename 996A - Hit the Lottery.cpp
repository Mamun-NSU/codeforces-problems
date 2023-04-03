#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll flag = 0;
    while (n)
    {
        if (n >= 100)
        {
            flag++;
            n -= 100;
        }
        else if (n >= 20)
        {
            flag++;
            n -= 20;
        }
        else if (n >= 10)
        {
            flag++;
            n -= 10;
        }
        else if (n >= 5)
        {
            flag++;
            n -= 5;
        }
        else if (n >= 1)
        {
            flag++;
            n -= 1;
        }
    }
    cout << flag << endl;
}