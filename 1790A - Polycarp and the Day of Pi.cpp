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

        int correctDigits = 0;
        string pi = "314159265358979323846264338327";

        for (int i = 0; i < min(n.length(), pi.length()); i++)
        {
            if (n[i] == pi[i])
            {
                correctDigits++;
            }
            else
            {
                break;
            }
        }

        cout << correctDigits << endl;
    }

    return 0;
}
