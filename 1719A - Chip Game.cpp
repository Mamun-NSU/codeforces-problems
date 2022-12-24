#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long n, m;
        cin >> n >> m;
        if (n % 2 ^ m % 2)
            cout << "Burenka" << endl;
        else
            cout << "Tonya" << endl;
    }
    return 0;
}