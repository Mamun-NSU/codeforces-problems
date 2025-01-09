#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;

        // Maximum slices of filling (cheese or ham)
        int fillings = c + h;

        // Bread is always one more than fillings in a valid sandwich
        int max_layers = min(b, fillings + 1) + min(b - 1, fillings);

        cout << max_layers << endl;
    }

    return 0;
}