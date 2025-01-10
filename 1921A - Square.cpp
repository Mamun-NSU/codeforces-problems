#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        set<int> x_coords, y_coords;
        for (int i = 0; i < 4; ++i)
        {
            int x, y;
            cin >> x >> y;
            x_coords.insert(x);
            y_coords.insert(y);
        }

        // Since it's a square, there should be exactly 2 unique x and y coordinates
        int side_length = abs(*x_coords.rbegin() - *x_coords.begin()); // Difference between max and min x
        cout << side_length * side_length << endl;                     // Area of the square
    }

    return 0;
}
