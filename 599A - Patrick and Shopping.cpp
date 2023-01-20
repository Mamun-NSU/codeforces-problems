#include <iostream>
using namespace std;
int main()
{
    int d1, d2, d3, min1, min2;
    cin >> d1 >> d2 >> d3;
    min1 = min((d1 + d2 + d3), (d1 + d3 + d3 + d1));
    min2 = min((d2 + d2 + d1 + d1), (d2 + d3 + d3 + d2));
    cout << min(min1, min2) << endl;
    return 0;
}