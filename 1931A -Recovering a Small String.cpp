#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int firstLetter = min(26, n - 2);
        int remainingSum = n - firstLetter;
        int secondLetter = min(26, remainingSum - 1);
        int thirdLetter = remainingSum - secondLetter;

        cout << (char)('a' + thirdLetter - 1) << (char)('a' + secondLetter - 1) << (char)('a' + firstLetter - 1) << endl;
    }

    return 0;
}
