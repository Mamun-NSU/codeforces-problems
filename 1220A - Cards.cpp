#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count_zero = count(s.begin(), s.end(), 'z');
    int count_one = count(s.begin(), s.end(), 'n');

    for (int i = 0; i < count_one; ++i)
    {
        cout << "1 ";
    }
    for (int i = 0; i < count_zero; ++i)
    {
        cout << "0 ";
    }

    cout << endl;

    return 0;
}
