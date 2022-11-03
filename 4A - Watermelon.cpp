#include <iostream>

using namespace std;
// This is 4A - Watermelon of codeforces problems
int main()
{
    int N;
    cin >> N;
    if (N % 2 == 0 && N > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}