#include <bits/stdc++.h>
using namespace std;

bool check_distance(int x, int y)
{
    // view the image in this repository for better understanding
    // this function is for checking if the euclidean distance between two coordinates is an integer
    int x_term = x * x;
    int y_term = y * y;
    int d = sqrt(x_term + y_term);
    return (d * d - x_term == y_term && d * d - y_term == x_term);
}

void perform_test()
{
    int x, y;
    cin >> x >> y;
    // there will only be 3 answers:
    // 1. 0 - destination is at the origin
    // 2. 1 - the euclidean distance between origin and destination is an integer
    // 3. 2 - for the first move, we can choose any coordinates such that the euclidean
    // distance from origin to chosen and from chosen to destination will be both an integer so for the second
    // move, this will be from the chosen to the destination coordinates itself
    if (x == 0 && y == 0)
    {
        cout << "0\n";
        return;
    }
    if (check_distance(x, y))
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        perform_test();
    }
    return 0;
}