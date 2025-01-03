#include <iostream>
#include <string>
using namespace std;

int main()
{
    string players;
    cin >> players;

    if (players.find("0000000") != string::npos || players.find("1111111") != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
