#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t)
    {
        string s;
        // cout<<"enter string"<<endl;
        cin >> s;
        // cout<<"string start"<<s[0]<<endl;

        // cout<<"enter character"<<endl;
        char x;
        cin >> x;
        // cout<<x<<endl;

        // cout<<"loop running"<<endl;
        int k = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] == x) && (i % 2 == 0))
            {
                cout << "YES" << endl;
                k++;
                break;
            }
        }

        if (k == 0)
        {
            cout << "NO" << endl;
        }

        t--;
    }
    return 0;
}