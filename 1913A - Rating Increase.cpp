#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ab;
        cin >> ab;
        for (int i = 1; i < ab.length(); ++i)
        {
            string a_str = ab.substr(0, i);
            string b_str = ab.substr(i);

            int a = stoi(a_str);
            int b = stoi(b_str);

            if (a > 0 && b > 0 && a_str[0] != '0' && b_str[0] != '0' && b > a)
            {
                cout << a << " " << b << endl;
                break;
            }
            if (i == ab.length() - 1)
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
