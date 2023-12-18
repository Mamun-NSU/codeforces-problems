#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int indicesCount = 0;
        string code = "codeforces";
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] != code[i])
            {
                indicesCount++;
            }
        }
        cout << indicesCount << endl;
    }

    return 0;
}
