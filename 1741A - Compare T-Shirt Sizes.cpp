#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string sa, sb;
        cin >> sa >> sb;
        int a = sa.size();
        int b = sb.size();
        if (sa == sb)
        {
            cout << "=" << endl;
        }
        else
        {
            if (sa.back() == sb.back())
            {
                if (sa.back() == 'S')
                {
                    if (a > b)
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else if (sa.back() == 'L')
                {
                    if (a > b)
                    {
                        cout << ">" << endl;
                    }
                    else
                    {
                        cout << "<" << endl;
                    }
                }
            }
            else
            {
                if (sa.back() == 'S')
                {

                    cout << "<" << endl;
                }
                else if (sa.back() == 'M')
                {
                    if (sb.back() == 'L')
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else
                {
                    cout << ">" << endl;
                }
            }
        }
    }

    return 0;
}